#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9CF5DC7249C701AC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYATTACHPOINTS_METHOD_1_EA727EED653D961C_OFFSET UNITYSDK_OFFSET(0x13988B70)
#define MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYATTACHPOINTS__CTOR_OFFSET UNITYSDK_OFFSET(0x13988B60)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int EntityCameraViewConfigByAttachPoints_TypeDefinitionIndex = 71359;

	class EntityCameraViewConfigByAttachPoints : public ::System::Object
	{
	public:
		::System::String* head; // 0x10
		::System::String* leftHand; // 0x18
		::System::String* rightHand; // 0x20
		::System::String* leftFoot; // 0x28
		::System::String* rightFoot; // 0x30
		::System::String* middlePoint; // 0x38
		::UnityEngine::Vector3 headExtension; // 0x40
		::System::Single verticalRatio; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYATTACHPOINTS__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_EA727EED653D961C(::System::UInt32 a1, ::Struct_2_9CF5DC7249C701AC& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_9CF5DC7249C701AC&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYATTACHPOINTS_METHOD_1_EA727EED653D961C_OFFSET))(this, a1, a2);
		}
	};
}
