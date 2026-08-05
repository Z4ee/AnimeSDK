#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_FEATUREPOINT_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x129862C0)
#define MOLEMOLE_FEATUREPOINT_METHOD_1_4AD015C8B128B3A0_OFFSET UNITYSDK_OFFSET(0x12985F00)
#define MOLEMOLE_FEATUREPOINT_METHOD_1_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0x129860D0)
#define MOLEMOLE_FEATUREPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x12985EE0)

namespace MoleMole
{
	inline static constexpr unsigned int FeaturePoint_TypeDefinitionIndex = 51917;

	class FeaturePoint : public ::System::Object
	{
	public:
		::System::Single minAngle; // 0x10
		::System::Single maxAngle; // 0x14
		::UnityEngine::Transform* pointTransform; // 0x18
		::UnityEngine::Vector3 pointTransformOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_4AD015C8B128B3A0(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT_METHOD_1_4AD015C8B128B3A0_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_FF11A7936E830212()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT_METHOD_1_FF11A7936E830212_OFFSET))(this);
		}

		::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
		}
	};
}
