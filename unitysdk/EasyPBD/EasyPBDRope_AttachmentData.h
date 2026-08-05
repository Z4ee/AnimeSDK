#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define EASYPBD_EASYPBDROPE_ATTACHMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C59FC30)

namespace EasyPBD
{
	inline static constexpr unsigned int EasyPBDRope_AttachmentData_TypeDefinitionIndex = 27268;

	class EasyPBDRope_AttachmentData : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10
		::System::Int32 particleIndex; // 0x18
		::System::Single extraMass; // 0x1C
		::UnityEngine::Vector3 localOffset; // 0x20
		::UnityEngine::Vector3 localEuler; // 0x2C
		::System::Boolean alignToRopeTangent; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ATTACHMENTDATA__CTOR_OFFSET))(this);
		}
	};
}
