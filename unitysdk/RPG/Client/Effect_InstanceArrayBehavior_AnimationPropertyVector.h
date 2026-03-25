#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client::TAUtils { class Vector4AnimationCurve; }
namespace System { class String; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYVECTOR_METHOD_1_E36E328887750B82_OFFSET UNITYSDK_OFFSET(0x9552120)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x95535C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_AnimationPropertyVector_TypeDefinitionIndex = 57830;

	class Effect_InstanceArrayBehavior_AnimationPropertyVector : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::RPG::Client::TAUtils::Vector4AnimationCurve* animation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYVECTOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_1_E36E328887750B82(::System::Single a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYVECTOR_METHOD_1_E36E328887750B82_OFFSET))(this, a1);
		}
	};
}
