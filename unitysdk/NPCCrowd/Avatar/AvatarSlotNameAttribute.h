#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define NPCCROWD_AVATAR_AVATARSLOTNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFCB780)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int AvatarSlotNameAttribute_TypeDefinitionIndex = 85886;

	class AvatarSlotNameAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_AVATARSLOTNAMEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
