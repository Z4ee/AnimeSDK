#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_A0A2B4808490646F;
namespace RPG::GameCore { class ModifyTeamBoostPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1A8A50F57D96B541_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE653440)
#define CLASS_2_1A8A50F57D96B541_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE6534E0)
#define CLASS_2_1A8A50F57D96B541_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE6538C0)
#define CLASS_2_1A8A50F57D96B541_TICK_OFFSET UNITYSDK_OFFSET(0xE653910)
#define CLASS_2_1A8A50F57D96B541__CTOR_OFFSET UNITYSDK_OFFSET(0xE653380)

inline static constexpr unsigned int Class_2_1A8A50F57D96B541_TypeDefinitionIndex = 50911;

class Class_2_1A8A50F57D96B541 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_1_A0A2B4808490646F* Field_2_2; // 0x20
	::RPG::GameCore::ModifyTeamBoostPoint* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyTeamBoostPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyTeamBoostPoint*))((::PBYTE)hIl2Cpp + CLASS_2_1A8A50F57D96B541__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A8A50F57D96B541_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A8A50F57D96B541_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A8A50F57D96B541_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1A8A50F57D96B541_TICK_OFFSET))(this, a1);
	}
};
