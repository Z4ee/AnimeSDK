#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define NPCCROWD_AVATAR_AVATARANIMATIONIDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xFB57F00)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int AvatarAnimationIdAttribute_TypeDefinitionIndex = 65054;

	class AvatarAnimationIdAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_AVATARANIMATIONIDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
