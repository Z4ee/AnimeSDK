#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"

namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define STAGEHARMONYLIGHTLINKSLOT_METHOD_2_278DE3B6BE616E54_OFFSET UNITYSDK_OFFSET(0xD098CE0)
#define STAGEHARMONYLIGHTLINKSLOT_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xD098AD0)
#define STAGEHARMONYLIGHTLINKSLOT_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xD098B80)
#define STAGEHARMONYLIGHTLINKSLOT_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD098CA0)
#define STAGEHARMONYLIGHTLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD098C60)
#define STAGEHARMONYLIGHTLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xD0990D0)

inline static constexpr unsigned int StageHarmonyLightLinkSlot_TypeDefinitionIndex = 44837;

class StageHarmonyLightLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::UnityEngine::Light* TargetLight; // 0x28
	::RPG::CustomRP::CustomAdditionalLightData* lightData; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_278DE3B6BE616E54(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_METHOD_2_278DE3B6BE616E54_OFFSET))(this, a1);
	}
};
