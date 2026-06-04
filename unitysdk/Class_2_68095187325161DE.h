#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvNpcSearchProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_68095187325161DE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC652B0)
#define CLASS_2_68095187325161DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC65350)
#define CLASS_2_68095187325161DE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAC653A0)
#define CLASS_2_68095187325161DE_TICK_OFFSET UNITYSDK_OFFSET(0xAC652F0)
#define CLASS_2_68095187325161DE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC652A0)

inline static constexpr unsigned int Class_2_68095187325161DE_TypeDefinitionIndex = 49041;

class Class_2_68095187325161DE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AdvNpcSearchProp* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcSearchProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcSearchProp*))((::PBYTE)hIl2Cpp + CLASS_2_68095187325161DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68095187325161DE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_68095187325161DE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68095187325161DE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68095187325161DE_ONTASKRESET_OFFSET))(this);
	}
};
