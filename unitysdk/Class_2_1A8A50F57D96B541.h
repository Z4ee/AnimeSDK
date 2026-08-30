#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_FE960BFE71661018;
namespace RPG::GameCore { class ModifyTeamBoostPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1A8A50F57D96B541_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16169360)
#define CLASS_2_1A8A50F57D96B541_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16169400)
#define CLASS_2_1A8A50F57D96B541_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16169740)
#define CLASS_2_1A8A50F57D96B541_TICK_OFFSET UNITYSDK_OFFSET(0x16169790)
#define CLASS_2_1A8A50F57D96B541__CTOR_OFFSET UNITYSDK_OFFSET(0x161692A0)

inline static constexpr unsigned int Class_2_1A8A50F57D96B541_TypeDefinitionIndex = 55423;

class Class_2_1A8A50F57D96B541 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ModifyTeamBoostPoint* OFKGLJOAMLD; // 0x20
	::Class_1_FE960BFE71661018* MFFNFOHJGGL; // 0x28

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
