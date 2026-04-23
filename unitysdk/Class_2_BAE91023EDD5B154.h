#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StackRedStance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_BAE91023EDD5B154_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9162670)
#define CLASS_2_BAE91023EDD5B154_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9162760)
#define CLASS_2_BAE91023EDD5B154_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x91626B0)
#define CLASS_2_BAE91023EDD5B154_TICK_OFFSET UNITYSDK_OFFSET(0x9162700)
#define CLASS_2_BAE91023EDD5B154__CTOR_OFFSET UNITYSDK_OFFSET(0x9162660)

inline static constexpr unsigned int Class_2_BAE91023EDD5B154_TypeDefinitionIndex = 51306;

class Class_2_BAE91023EDD5B154 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::StackRedStance* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackRedStance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackRedStance*))((::PBYTE)hIl2Cpp + CLASS_2_BAE91023EDD5B154__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAE91023EDD5B154_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAE91023EDD5B154_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BAE91023EDD5B154_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAE91023EDD5B154_ONTASKBEGIN_OFFSET))(this);
	}
};
