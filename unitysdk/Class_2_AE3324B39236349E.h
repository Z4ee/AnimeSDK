#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterEnableEmptyModel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AE3324B39236349E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE6E640)
#define CLASS_2_AE3324B39236349E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE6E680)
#define CLASS_2_AE3324B39236349E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE6E9A0)
#define CLASS_2_AE3324B39236349E_TICK_OFFSET UNITYSDK_OFFSET(0xBE6E9F0)
#define CLASS_2_AE3324B39236349E__CTOR_OFFSET UNITYSDK_OFFSET(0xBE6E630)

inline static constexpr unsigned int Class_2_AE3324B39236349E_TypeDefinitionIndex = 55144;

class Class_2_AE3324B39236349E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::CharacterEnableEmptyModel* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterEnableEmptyModel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterEnableEmptyModel*))((::PBYTE)hIl2Cpp + CLASS_2_AE3324B39236349E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE3324B39236349E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE3324B39236349E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE3324B39236349E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AE3324B39236349E_TICK_OFFSET))(this, a1);
	}
};
