#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_ConfigItemAnim_IntervalType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AnimationCurveEx; }
namespace System { class String; }

#define MONOUITABLESCROLLV2_CONFIGITEMANIM_RESETANIMPARAMS_OFFSET UNITYSDK_OFFSET(0x187C65D0)
#define MONOUITABLESCROLLV2_CONFIGITEMANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x187C6670)

inline static constexpr unsigned int MonoUITableScrollV2_ConfigItemAnim_TypeDefinitionIndex = 54109;

class MonoUITableScrollV2_ConfigItemAnim : public ::System::Object
{
public:
	::System::String* AnimationName; // 0x10
	::MonoUITableScrollV2_ConfigItemAnim_IntervalType intervalType; // 0x18
	::System::Single ShowInterval; // 0x1C
	::MoleMole::AnimationCurveEx* Curve; // 0x20
	::System::Single DelayTime; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_CONFIGITEMANIM__CTOR_OFFSET))(this);
	}

	::System::Void ResetAnimParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_CONFIGITEMANIM_RESETANIMPARAMS_OFFSET))(this);
	}
};
