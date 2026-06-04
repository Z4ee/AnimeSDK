#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystem { class EnviroProperty; }
namespace RPG::Client { class EnvironmentSystem; }

#define STAGEHARMONYENVLINKSLOT_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0xD097490)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xD0966A0)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_A2DA80120C837C5A_OFFSET UNITYSDK_OFFSET(0xD096820)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_AFF0132E2D0A9036_OFFSET UNITYSDK_OFFSET(0xD097040)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD0967E0)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_EF0F3CB1D9D9986E_OFFSET UNITYSDK_OFFSET(0xD096B10)
#define STAGEHARMONYENVLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xD0975F0)

inline static constexpr unsigned int StageHarmonyEnvLinkSlot_TypeDefinitionIndex = 44832;

class StageHarmonyEnvLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::EnviromentSystem::EnviromentPropertiesID EnvPropertyID; // 0x28
	::System::Boolean UsePriority; // 0x2C
	::RPG::GameCore::EnviromentControlPriority Priority; // 0x30
	::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x38
	::EnviromentSystem::EnviroProperty* _cachedPropertyV1; // 0x40
	::Class_1_EAF7984A8FAD6BE4* _cachedPropertyV2; // 0x48
	::RPG::GameCore::EnviromentControlPriority _lastPriority; // 0x50
	::EnviromentSystem::EnviromentPropertiesID _lastEnvPropertyID; // 0x54
	::System::Boolean _hasSetPatch; // 0x58
	::System::Boolean _isInitialized; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A2DA80120C837C5A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_A2DA80120C837C5A_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF0F3CB1D9D9986E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_EF0F3CB1D9D9986E_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFF0132E2D0A9036(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_AFF0132E2D0A9036_OFFSET))(this, a1);
	}

	::System::Void Method_2_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_08DCF72FBE01FF99_OFFSET))(this);
	}
};
