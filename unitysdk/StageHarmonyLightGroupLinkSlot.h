#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"

namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define STAGEHARMONYLIGHTGROUPLINKSLOT_METHOD_2_278DE3B6BE616E54_OFFSET UNITYSDK_OFFSET(0xD0986A0)
#define STAGEHARMONYLIGHTGROUPLINKSLOT_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xD098490)
#define STAGEHARMONYLIGHTGROUPLINKSLOT_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xD098540)
#define STAGEHARMONYLIGHTGROUPLINKSLOT_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD098660)
#define STAGEHARMONYLIGHTGROUPLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD098620)
#define STAGEHARMONYLIGHTGROUPLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xD098A90)

inline static constexpr unsigned int StageHarmonyLightGroupLinkSlot_TypeDefinitionIndex = 44835;

class StageHarmonyLightGroupLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::UnityEngine::Light* TargetLight; // 0x28
	::RPG::CustomRP::CustomAdditionalLightData* lightData; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_278DE3B6BE616E54(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_METHOD_2_278DE3B6BE616E54_OFFSET))(this, a1);
	}
};
