#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_ConfigItemAnim_OnShow_AnimType.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2_ConfigItemAnim;

#define MONOUITABLESCROLLV2_CONFIGITEMANIM_ONSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x12B36FC0)

inline static constexpr unsigned int MonoUITableScrollV2_ConfigItemAnim_OnShow_TypeDefinitionIndex = 75061;

class MonoUITableScrollV2_ConfigItemAnim_OnShow : public ::System::Object
{
public:
	::MonoUITableScrollV2_ConfigItemAnim_OnShow_AnimType animType; // 0x10
	::MonoUITableScrollV2_ConfigItemAnim* configItemAnim; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_CONFIGITEMANIM_ONSHOW__CTOR_OFFSET))(this);
	}
};
