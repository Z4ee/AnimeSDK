#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystem { class EnviroProperty; }
namespace RPG::Client { class EnvironmentSystem; }

#define STAGEHARMONYENVLINKSLOT_METHOD_2_08C6766056A70BB1_OFFSET UNITYSDK_OFFSET(0x14ECA270)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x14ECA0F0)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_326C0E7732FB1BD8_OFFSET UNITYSDK_OFFSET(0x14ECA720)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_4C516A7087AA1402_OFFSET UNITYSDK_OFFSET(0x14ECAF20)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x14ECB590)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14ECA230)
#define STAGEHARMONYENVLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECB7D0)

inline static constexpr unsigned int StageHarmonyEnvLinkSlot_TypeDefinitionIndex = 45749;

class StageHarmonyEnvLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::EnviromentSystem::EnviromentPropertiesID EnvPropertyID; // 0x40
	::System::Boolean UsePriority; // 0x44
	::RPG::GameCore::EnviromentControlPriority Priority; // 0x48
	::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x50
	::EnviromentSystem::EnviroProperty* _cachedPropertyV1; // 0x58
	::Class_1_EAF7984A8FAD6BE4* _cachedPropertyV2; // 0x60
	::RPG::GameCore::EnviromentControlPriority _lastPriority; // 0x68
	::EnviromentSystem::EnviromentPropertiesID _lastEnvPropertyID; // 0x6C
	::System::Boolean _hasSetPatch; // 0x70
	::System::Boolean _isInitialized; // 0x71

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

	::System::Void Method_2_08C6766056A70BB1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_08C6766056A70BB1_OFFSET))(this, a1);
	}

	::System::Void Method_2_326C0E7732FB1BD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_326C0E7732FB1BD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C516A7087AA1402(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_4C516A7087AA1402_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}
};
