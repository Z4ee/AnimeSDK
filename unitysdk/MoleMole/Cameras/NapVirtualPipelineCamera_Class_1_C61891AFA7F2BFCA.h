#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_C61891AFA7F2BFCA_METHOD_1_2516FCDA11A80F25_OFFSET UNITYSDK_OFFSET(0x16C246C0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_C61891AFA7F2BFCA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C246B0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtualPipelineCamera_Class_1_C61891AFA7F2BFCA_TypeDefinitionIndex = 69715;

	class NapVirtualPipelineCamera_Class_1_C61891AFA7F2BFCA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* Field_1_0; // 0x10
		::Il2CppArray<::System::String*>* Field_1_7; // 0x18
		::System::String* Field_1_1; // 0x20
		::UnityEngine::LayerMask Field_1_6; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_C61891AFA7F2BFCA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_2516FCDA11A80F25(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CLASS_1_C61891AFA7F2BFCA_METHOD_1_2516FCDA11A80F25_OFFSET))(this, a1);
		}
	};
}
