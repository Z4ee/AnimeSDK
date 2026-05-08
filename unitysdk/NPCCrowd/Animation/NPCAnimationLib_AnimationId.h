#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ANIMATIONID_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x58CD50)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ANIMATIONID__CCTOR_OFFSET UNITYSDK_OFFSET(0xD253FC0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ANIMATIONID__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationLib_AnimationId_TypeDefinitionIndex = 74944;

	struct alignas(4) NPCAnimationLib_AnimationId
	{
		static ::NPCCrowd::Animation::NPCAnimationLib_AnimationId* StaticGet_Null()
		{
			return (::NPCCrowd::Animation::NPCAnimationLib_AnimationId*)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationLib_AnimationId_TypeDefinitionIndex)->GetStaticField(0xC780);
		}
		::System::Int32 AvatarId; // 0x10
		::System::Int32 ClipId; // 0x14

		::System::Void _ctor(::System::Int32 avatarId, ::System::Int32 clipId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ANIMATIONID__CTOR_OFFSET))(this, avatarId, clipId);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ANIMATIONID__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ANIMATIONID_GET_ISNULL_OFFSET))(this);
		}
	};
}
