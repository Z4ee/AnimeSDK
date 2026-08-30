#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYFLOAT_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0xCDEA400)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0xCDEB300)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_AnimationPropertyFloat_TypeDefinitionIndex = 70580;

	class Effect_InstanceArrayBehavior_AnimationPropertyFloat : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::AnimationCurve* animation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYFLOAT_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
		}
	};
}
