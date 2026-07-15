#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"

namespace UnityEngine { class Animation; }

#define STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_00C5E99C9B0EC08D_OFFSET UNITYSDK_OFFSET(0x14EC58B0)
#define STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x14EC5810)
#define STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14EC57B0)
#define STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14EC5870)
#define STAGEHARMONYANIMATIONLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC5ED0)

inline static constexpr unsigned int StageHarmonyAnimationLinkSlot_TypeDefinitionIndex = 45742;

class StageHarmonyAnimationLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::UnityEngine::Animation* TargetAnimation; // 0x40

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

	::System::Void Method_2_00C5E99C9B0EC08D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT_METHOD_2_00C5E99C9B0EC08D_OFFSET))(this, a1);
	}
};
