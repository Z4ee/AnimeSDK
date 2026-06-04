#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BD270527DDA5F245;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_19DE60403D10A725_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C70020)
#define CLASS_2_19DE60403D10A725_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C70060)
#define CLASS_2_19DE60403D10A725_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C70450)
#define CLASS_2_19DE60403D10A725_TICK_OFFSET UNITYSDK_OFFSET(0x10C703F0)
#define CLASS_2_19DE60403D10A725__CTOR_OFFSET UNITYSDK_OFFSET(0x10C70010)
#define CLASS_2_19DE60403D10A725__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x10C704A0)

inline static constexpr unsigned int Class_2_19DE60403D10A725_TypeDefinitionIndex = 49503;

class Class_2_19DE60403D10A725 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BD270527DDA5F245* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::LittleGameLevelConfig* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::String* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BD270527DDA5F245* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BD270527DDA5F245*))((::PBYTE)hIl2Cpp + CLASS_2_19DE60403D10A725__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE60403D10A725_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE60403D10A725_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_19DE60403D10A725_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE60403D10A725_ONTASKRESET_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE60403D10A725__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
