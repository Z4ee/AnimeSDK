#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SCEPADTRIGGEREFFECTWEAPONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x885100)

inline static constexpr unsigned int ScePadTriggerEffectWeaponParam_TypeDefinitionIndex = 74348;

struct alignas(1) ScePadTriggerEffectWeaponParam
{
	::System::Byte startPosition; // 0x10
	::System::Byte endPosition; // 0x11
	::System::Byte strength; // 0x12

	::System::Void _ctor(::System::Byte weapStartPosition, ::System::Byte weapEndPosition, ::System::Byte weapStrength)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SCEPADTRIGGEREFFECTWEAPONPARAM__CTOR_OFFSET))(this, weapStartPosition, weapEndPosition, weapStrength);
	}
};
