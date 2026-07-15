#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIMERCONFIG_METHOD_1_72A9C35A6067A4C0_OFFSET UNITYSDK_OFFSET(0x17EB5630)
#define RPG_CLIENT_AIMERCONFIG_METHOD_1_A733AB2FC7A9B88A_OFFSET UNITYSDK_OFFSET(0x17EB3FB0)
#define RPG_CLIENT_AIMERCONFIG_METHOD_1_E91361DFF1424851_OFFSET UNITYSDK_OFFSET(0x17EB4940)
#define RPG_CLIENT_AIMERCONFIG_METHOD_1_ECA72114536D14FE_OFFSET UNITYSDK_OFFSET(0x17EB3DF0)
#define RPG_CLIENT_AIMERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB5AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AimerConfig_TypeDefinitionIndex = 65443;

	class AimerConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Axis; // 0x10
		::UnityEngine::Transform* AimTransform; // 0x20
		::System::Boolean AimOnBone; // 0x28
		::System::Int32 PitchUpLimit; // 0x2C
		::System::Int32 PitchDownLimit; // 0x30
		::UnityEngine::Vector3 ActualTarget; // 0x34
		::UnityEngine::Matrix4x4 AimRelativeMatrix; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMERCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_72A9C35A6067A4C0(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMERCONFIG_METHOD_1_72A9C35A6067A4C0_OFFSET))(this, a1);
		}

		::System::Void Method_1_ECA72114536D14FE(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMERCONFIG_METHOD_1_ECA72114536D14FE_OFFSET))(this, a1);
		}

		::System::Void Method_1_A733AB2FC7A9B88A(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMERCONFIG_METHOD_1_A733AB2FC7A9B88A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_E91361DFF1424851(::UnityEngine::Transform* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMERCONFIG_METHOD_1_E91361DFF1424851_OFFSET))(this, a1, a2, a3);
		}
	};
}
