#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"

namespace UnityEngine { class Animation; }

#define STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_0F76D2A38DFBC84F_OFFSET UNITYSDK_OFFSET(0xABDA0B0)
#define STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xABDA010)
#define STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xABD9FB0)
#define STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xABDA070)
#define STAGEHARMONYANIMATIONLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xABDA4B0)

inline static constexpr unsigned int StageHarmonyAnimationLinkSlot_TypeDefinitionIndex = 38395;

class StageHarmonyAnimationLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::UnityEngine::Animation* TargetAnimation; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0F76D2A38DFBC84F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_0F76D2A38DFBC84F_OFFSET))(this, a1);
	}
};
