#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole::Utils::CameraSequence { class MaintainLastCameraRotation; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE86E390)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE86E3D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION___C___CCTOR_B__21_0_OFFSET UNITYSDK_OFFSET(0xE86E3E0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int MaintainLastCameraRotation___c_TypeDefinitionIndex = 81470;

	class MaintainLastCameraRotation___c : public ::System::Object
	{
	public:
		static ::MoleMole::Utils::CameraSequence::MaintainLastCameraRotation___c** StaticGet___9()
		{
			return (::MoleMole::Utils::CameraSequence::MaintainLastCameraRotation___c**)Il2CppClass::FromTypeDefinitionIndex(MaintainLastCameraRotation___c_TypeDefinitionIndex)->GetStaticField(0x435C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion __cctor_b__21_0(::MoleMole::Utils::CameraSequence::MaintainLastCameraRotation* self, ::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::MoleMole::Utils::CameraSequence::MaintainLastCameraRotation*, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION___C___CCTOR_B__21_0_OFFSET))(this, self, context);
		}
	};
}
