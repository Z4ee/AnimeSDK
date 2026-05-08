#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_DBFF5AD1EC04D1A1_METHOD_1_2BF1F5B3DD45F04A_OFFSET UNITYSDK_OFFSET(0xFE988D0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_DBFF5AD1EC04D1A1__CTOR_OFFSET UNITYSDK_OFFSET(0xFE988C0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtualPipelineCamera_Class_1_DBFF5AD1EC04D1A1_TypeDefinitionIndex = 56152;

	class NapVirtualPipelineCamera_Class_1_DBFF5AD1EC04D1A1 : public ::System::Object
	{
	public:
		::System::String* Field_1_0; // 0x10
		::Il2CppArray<::System::String*>* Field_1_1; // 0x18
		::Il2CppArray<::System::String*>* Field_1_2; // 0x20
		::UnityEngine::LayerMask Field_1_3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_DBFF5AD1EC04D1A1__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_2BF1F5B3DD45F04A(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_DBFF5AD1EC04D1A1_METHOD_1_2BF1F5B3DD45F04A_OFFSET))(this, a1);
		}
	};
}
