#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONREQUEST_CONSUME_OFFSET UNITYSDK_OFFSET(0x582BB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONREQUEST_REQUEST_OFFSET UNITYSDK_OFFSET(0x37DA60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0D2DE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x383610)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationRequest_TypeDefinitionIndex = 70463;

	struct alignas(4) AnimationSubManager_PoseInertializationRequest
	{
		static ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_PoseInertializationRequest_TypeDefinitionIndex)->GetStaticField(0xAD60);
		}
		::System::Single _duration; // 0x10
		::System::Int32 _frameCount; // 0x14

		::System::Void _ctor(::Foundation::DefaultConstruct _)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONREQUEST__CTOR_OFFSET))(this, _);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONREQUEST__CCTOR_OFFSET))();
		}

		::System::Void Request(::System::Int32 frameCount, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONREQUEST_REQUEST_OFFSET))(this, frameCount, duration);
		}

		::System::Boolean Consume(::System::Int32 frameCount, ::System::Single& duration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONREQUEST_CONSUME_OFFSET))(this, frameCount, duration);
		}
	};
}
