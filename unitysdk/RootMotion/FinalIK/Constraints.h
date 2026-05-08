#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_CONSTRAINTS_INITIATE_OFFSET UNITYSDK_OFFSET(0x1BC8E620)
#define ROOTMOTION_FINALIK_CONSTRAINTS_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BC8E510)
#define ROOTMOTION_FINALIK_CONSTRAINTS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BC8E770)
#define ROOTMOTION_FINALIK_CONSTRAINTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC8EF50)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Constraints_TypeDefinitionIndex = 36557;

	class Constraints : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::UnityEngine::Transform* target; // 0x18
		::UnityEngine::Vector3 positionOffset; // 0x20
		::UnityEngine::Vector3 position; // 0x2C
		::System::Single positionWeight; // 0x38
		::UnityEngine::Vector3 rotationOffset; // 0x3C
		::UnityEngine::Vector3 rotation; // 0x48
		::System::Single rotationWeight; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTS__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTS_ISVALID_OFFSET))(this);
		}

		::System::Void Initiate(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTS_INITIATE_OFFSET))(this, transform);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTS_UPDATE_OFFSET))(this);
		}
	};
}
