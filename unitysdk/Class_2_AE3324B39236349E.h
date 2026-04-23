#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterEnableEmptyModel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AE3324B39236349E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11E78690)
#define CLASS_2_AE3324B39236349E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11E786D0)
#define CLASS_2_AE3324B39236349E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11E78A00)
#define CLASS_2_AE3324B39236349E_TICK_OFFSET UNITYSDK_OFFSET(0x11E78A50)
#define CLASS_2_AE3324B39236349E__CTOR_OFFSET UNITYSDK_OFFSET(0x11E78680)

inline static constexpr unsigned int Class_2_AE3324B39236349E_TypeDefinitionIndex = 50672;

class Class_2_AE3324B39236349E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterEnableEmptyModel* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
