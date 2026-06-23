#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CD3FC0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10CD4000)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATEBLENDERBUILDER_B__4_1_OFFSET UNITYSDK_OFFSET(0x10CD4070)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATECUTBUILDER_B__2_0_OFFSET UNITYSDK_OFFSET(0x10CD4010)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATECUTBUILDER_B__2_1_OFFSET UNITYSDK_OFFSET(0x10CD4060)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackBlending___c_TypeDefinitionIndex = 76697;

	class CameraTrackBlending___c : public ::System::Object
	{
	public:
		static ::MoleMole::Cameras::CameraTrackBlending___c** StaticGet___9()
		{
			return (::MoleMole::Cameras::CameraTrackBlending___c**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending___c_TypeDefinitionIndex)->GetStaticField(0x30190);
		}
		static ::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending___c_TypeDefinitionIndex)->GetStaticField(0x30198);
		}
		static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__2_1()
		{
			return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending___c_TypeDefinitionIndex)->GetStaticField(0x301A0);
		}
		static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending___c_TypeDefinitionIndex)->GetStaticField(0x301A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraDataBlender* _GenerateCutBuilder_b__2_0(::PipelineCamera::ICameraDataBlender* _)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATECUTBUILDER_B__2_0_OFFSET))(this, _);
		}

		::System::Void _GenerateCutBuilder_b__2_1(::PipelineCamera::ICameraDataBlender* _)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATECUTBUILDER_B__2_1_OFFSET))(this, _);
		}

		::System::Void _GenerateBlenderBuilder_b__4_1(::PipelineCamera::ICameraDataBlender* _)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATEBLENDERBUILDER_B__4_1_OFFSET))(this, _);
		}
	};
}
