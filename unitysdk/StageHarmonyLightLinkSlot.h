#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"

namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define STAGEHARMONYLIGHTLINKSLOT_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14ECCF80)
#define STAGEHARMONYLIGHTLINKSLOT_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x14ECD030)
#define STAGEHARMONYLIGHTLINKSLOT_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14ECD150)
#define STAGEHARMONYLIGHTLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14ECD110)
#define STAGEHARMONYLIGHTLINKSLOT_METHOD_2_FD6AF0F9AA9298B1_OFFSET UNITYSDK_OFFSET(0x14ECD190)
#define STAGEHARMONYLIGHTLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECD810)

inline static constexpr unsigned int StageHarmonyLightLinkSlot_TypeDefinitionIndex = 45754;

class StageHarmonyLightLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::UnityEngine::Light* TargetLight; // 0x40
	::RPG::CustomRP::CustomAdditionalLightData* lightData; // 0x48

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

	::System::Void Method_2_FD6AF0F9AA9298B1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_METHOD_2_FD6AF0F9AA9298B1_OFFSET))(this, a1);
	}
};
