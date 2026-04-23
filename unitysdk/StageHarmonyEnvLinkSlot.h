#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystem { class EnviroProperty; }
namespace RPG::Client { class EnvironmentSystem; }

#define STAGEHARMONYENVLINKSLOT_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0xB9520F0)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_0A9EFE4E2D24011F_OFFSET UNITYSDK_OFFSET(0xB951CA0)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB9512C0)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_46821F7F37665DC0_OFFSET UNITYSDK_OFFSET(0xB951730)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB951400)
#define STAGEHARMONYENVLINKSLOT_METHOD_2_F5909B5FD6F94F42_OFFSET UNITYSDK_OFFSET(0xB951440)
#define STAGEHARMONYENVLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xB952250)

inline static constexpr unsigned int StageHarmonyEnvLinkSlot_TypeDefinitionIndex = 44286;

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

	::System::Void Method_2_F5909B5FD6F94F42(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_F5909B5FD6F94F42_OFFSET))(this, a1);
	}

	::System::Void Method_2_46821F7F37665DC0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_46821F7F37665DC0_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A9EFE4E2D24011F(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_0A9EFE4E2D24011F_OFFSET))(this, a1);
	}

	::System::Void Method_2_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_METHOD_2_08DCF72FBE01FF99_OFFSET))(this);
	}
};
