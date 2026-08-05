#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INDEXDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x652E20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INDEXDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF6038E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INDEXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x652E80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_IndexData_TypeDefinitionIndex = 88244;

	struct alignas(2) AnimationSubManager_IndexData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_IndexData* StaticGet_Invalid()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_IndexData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_IndexData_TypeDefinitionIndex)->GetStaticField(0xE610);
		}
		::System::UInt16 StateMachineArchetypeIndex; // 0x10
		::System::UInt16 AvatarArchetypeIndex; // 0x12
		::System::UInt16 AnimationArchetypeIndex; // 0x14

		::System::Void _ctor(::System::UInt16 stateMachineArchetypeIndex, ::System::UInt16 avatarArchetypeIndex, ::System::UInt16 animationArchetypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INDEXDATA__CTOR_OFFSET))(this, stateMachineArchetypeIndex, avatarArchetypeIndex, animationArchetypeIndex);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INDEXDATA__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INDEXDATA_GET_ISVALID_OFFSET))(this);
		}
	};
}
