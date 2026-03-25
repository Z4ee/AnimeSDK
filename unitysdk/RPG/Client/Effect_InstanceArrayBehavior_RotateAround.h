#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/QuaternionTransform.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND_METHOD_1_54B0E9D6F6DD967C_OFFSET UNITYSDK_OFFSET(0x9553E70)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9553C40)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x9554250)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_RotateAround_TypeDefinitionIndex = 57824;

	class Effect_InstanceArrayBehavior_RotateAround : public ::System::Object
	{
	public:
		::UnityEngine::Transform* RotateAroundPoint; // 0x10
		::System::Single RotateAroundAngleSpeed; // 0x18
		::UnityEngine::Vector3 _RotateAroundPosition; // 0x1C
		::UnityEngine::Vector3 _RotateAroundAxis; // 0x28
		::System::Single _RotateAroundAngle; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_1_54B0E9D6F6DD967C(::RPG::Client::TAUtils::QuaternionTransform& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TAUtils::QuaternionTransform&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND_METHOD_1_54B0E9D6F6DD967C_OFFSET))(this, a1);
		}
	};
}
