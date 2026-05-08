#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define NPCCROWD_AVATAR_ACCESSORYIDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD4AB60)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int AccessoryIdAttribute_TypeDefinitionIndex = 44060;

	class AccessoryIdAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_ACCESSORYIDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
