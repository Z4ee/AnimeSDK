#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/QuaternionTransform.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT_METHOD_1_54B0E9D6F6DD967C_OFFSET UNITYSDK_OFFSET(0xB858FD0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB858F40)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0xB859250)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_LookAt_TypeDefinitionIndex = 66026;

	class Effect_InstanceArrayBehavior_LookAt : public ::System::Object
	{
	public:
		::UnityEngine::Transform* LookAtPoint; // 0x10
		::System::Single LookAtBlend; // 0x18
		::UnityEngine::Vector3 _LookAtPosition; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_54B0E9D6F6DD967C(::RPG::Client::TAUtils::QuaternionTransform& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TAUtils::QuaternionTransform&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT_METHOD_1_54B0E9D6F6DD967C_OFFSET))(this, a1);
		}
	};
}
