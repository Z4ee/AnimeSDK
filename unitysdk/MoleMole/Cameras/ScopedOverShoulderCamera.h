#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_4A097505A5A1A069.h"
#include "unitysdk/MoleMole/Cameras/OverShoulderCameraData.h"
#include "unitysdk/MoleMole/Cameras/ScopedOverShoulderCamera_Enum_3_55C6DDFDFD9F932E.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_52A902145F5BE513_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xECEA970)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_0781F88D06095A03_OFFSET UNITYSDK_OFFSET(0xECEC320)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_0E1BDEE095A16B6B_OFFSET UNITYSDK_OFFSET(0xECEAC30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A0585D5DEE6FF31_1_OFFSET UNITYSDK_OFFSET(0xECEBF80)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A0585D5DEE6FF31_OFFSET UNITYSDK_OFFSET(0xECEB3C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A6927D0798C1CDA_1_OFFSET UNITYSDK_OFFSET(0xECEBF00)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A6927D0798C1CDA_OFFSET UNITYSDK_OFFSET(0xECEB480)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xECEBC90)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0xECEC830)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0xECED9C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xECEB500)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_31933D7A1B9AEFE3_OFFSET UNITYSDK_OFFSET(0xECED250)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xECEC7C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xECED2A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_3D5054820AEEE699_OFFSET UNITYSDK_OFFSET(0xECEBB70)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xECEDA20)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xECEBD30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xECEB290)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0xECEB7B0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_4D9AF0772C5D0480_OFFSET UNITYSDK_OFFSET(0xECEC930)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_565B23350997A3F9_OFFSET UNITYSDK_OFFSET(0xECEC890)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0xECEBDA0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_782C2E4E446641D7_OFFSET UNITYSDK_OFFSET(0xECEC2A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8417CDEB7B154E29_1_OFFSET UNITYSDK_OFFSET(0xECEBE40)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8417CDEB7B154E29_OFFSET UNITYSDK_OFFSET(0xECEC580)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_850CE475E2372942_OFFSET UNITYSDK_OFFSET(0xECED2E0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_882E82750C05A3D7_OFFSET UNITYSDK_OFFSET(0xECEA6D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8B5519E0E1747D4E_OFFSET UNITYSDK_OFFSET(0xECEB330)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8BAA4FB7D9C1E719_OFFSET UNITYSDK_OFFSET(0xECEC0B0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8D4118C8A6074696_OFFSET UNITYSDK_OFFSET(0xECEC040)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8E94DE259B874845_OFFSET UNITYSDK_OFFSET(0xECEB5C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_9F59C088ACADFAC2_OFFSET UNITYSDK_OFFSET(0xECEC6D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A5E8F32B3838589E_1_OFFSET UNITYSDK_OFFSET(0xECEC640)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A5E8F32B3838589E_OFFSET UNITYSDK_OFFSET(0xECEC210)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A847AED19A77B516_OFFSET UNITYSDK_OFFSET(0xECECA90)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_C0B52E1F228C38E1_OFFSET UNITYSDK_OFFSET(0xECEAB10)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_C0FE531EFFDBAC16_OFFSET UNITYSDK_OFFSET(0xECECE70)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_C946F64728403EED_OFFSET UNITYSDK_OFFSET(0xECEA8A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_CBB16AE705BCA424_OFFSET UNITYSDK_OFFSET(0xECEB560)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_CD3D78B7FEDE99CF_OFFSET UNITYSDK_OFFSET(0xECED5D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_E7BC66F94B7A6CBF_OFFSET UNITYSDK_OFFSET(0xECEDA70)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_EF6ABD3C06FC49A6_OFFSET UNITYSDK_OFFSET(0xECEB8A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xECEBCE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0xECEAB00)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xECEA500)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_TypeDefinitionIndex = 58293;

	class ScopedOverShoulderCamera : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_CreateCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ScopedOverShoulderCamera_TypeDefinitionIndex)->GetStaticField(0x10CB0);
		}
		// static const ::Enum_3_4A097505A5A1A069 PIPELINE_CAMERA_PRIORITY; // 0x0
		::System::UInt32 _createCountIndex; // 0x10
		::MoleMole::Utils::TaskBasedEventCollection_1<::MoleMole::Cameras::ScopedOverShoulderCamera_Enum_3_55C6DDFDFD9F932E>* _events; // 0x18
		::System::Boolean _isCameraSetup; // 0x20
		::System::Boolean _blendInAimingEnabled; // 0x21
		::System::Single _blendInTime; // 0x24
		::MoleMole::Cameras::OverShoulderCameraData _cameraData; // 0x28
		::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* _subModule; // 0x200
		::UnityEngine::Vector3 _lastVisualFocusPosition; // 0x208
		::System::Boolean _isInFocusTargetMode; // 0x214
		::UnityEngine::Vector3 _curFocusTargetPos; // 0x218
		::System::Single _focusTargetRotateDampSpeed; // 0x224
		::System::Boolean _isMuteManualRotate; // 0x228

		::System::Void _ctor(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DISPOSE_OFFSET))(this);
		}

		::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_C0B52E1F228C38E1(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2)
		{
			return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_C0B52E1F228C38E1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_0E1BDEE095A16B6B(::MoleMole::Cameras::OverShoulderCameraConfig*& a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*&, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_0E1BDEE095A16B6B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_479759059E440327_OFFSET))(this, a1);
		}

		::System::Single Method_1_8B5519E0E1747D4E(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8B5519E0E1747D4E_OFFSET))(this, a1);
		}

		::System::String* Method_1_1A0585D5DEE6FF31()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A0585D5DEE6FF31_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_1_CBB16AE705BCA424(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_CBB16AE705BCA424_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_8E94DE259B874845(::System::Single a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8E94DE259B874845_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_EF6ABD3C06FC49A6(::System::Single a1, ::System::Single a2)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_EF6ABD3C06FC49A6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_3D5054820AEEE699(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_3D5054820AEEE699_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_882E82750C05A3D7(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_882E82750C05A3D7_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_1_1A6927D0798C1CDA(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a2, ::MoleMole::Cameras::CameraTrackBlending* a3)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A6927D0798C1CDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Single Method_1_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_77577333B4681208()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_77577333B4681208_OFFSET))(this);
		}

		::System::String* Method_1_1A6927D0798C1CDA_1(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a2, ::MoleMole::Cameras::CameraTrackBlending* a3)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A6927D0798C1CDA_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_1_1A0585D5DEE6FF31_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A0585D5DEE6FF31_1_OFFSET))(this);
		}

		::System::Void Method_1_8D4118C8A6074696(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8D4118C8A6074696_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_1_8BAA4FB7D9C1E719(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8BAA4FB7D9C1E719_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_A5E8F32B3838589E(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a2, ::MoleMole::Cameras::CameraTrackBlending* a3)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A5E8F32B3838589E_OFFSET))(this, a1, a2, a3);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_782C2E4E446641D7(::UnityEngine::Vector3 a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_782C2E4E446641D7_OFFSET))(this, a1);
		}

		::System::Single Method_1_0781F88D06095A03(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_0781F88D06095A03_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_1_8417CDEB7B154E29()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8417CDEB7B154E29_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_9F59C088ACADFAC2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_9F59C088ACADFAC2_OFFSET))(this);
		}

		::System::String* Method_1_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
		}

		static ::MoleMole::Cameras::ScopedOverShoulderCamera* Method_1_565B23350997A3F9(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3)
		{
			return ((::MoleMole::Cameras::ScopedOverShoulderCamera*(*)(::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_565B23350997A3F9_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_1_4D9AF0772C5D0480(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_4D9AF0772C5D0480_OFFSET))(this, a1);
		}

		::System::Void Method_1_A847AED19A77B516(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3, ::PipelineCamera::CameraCommandSpawnSubModules*& a4, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A847AED19A77B516_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single Method_1_8417CDEB7B154E29_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8417CDEB7B154E29_1_OFFSET))(this);
		}

		::System::Single Method_1_A5E8F32B3838589E_1(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a2, ::MoleMole::Cameras::CameraTrackBlending* a3)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A5E8F32B3838589E_1_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::Cameras::OverShoulderCameraConfig* Method_1_31933D7A1B9AEFE3()
		{
			return ((::MoleMole::Cameras::OverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_31933D7A1B9AEFE3_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::PipelineCamera::ScopedDelegateHandle Method_1_850CE475E2372942(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3)
		{
			return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_850CE475E2372942_OFFSET))(this, a1, a2, a3);
		}

		::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_C0FE531EFFDBAC16(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2)
		{
			return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_C0FE531EFFDBAC16_OFFSET))(this, a1, a2);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_CD3D78B7FEDE99CF(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_CD3D78B7FEDE99CF_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1D4018D4200358D0_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_3_OFFSET))(this);
		}

		::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Single Method_1_E7BC66F94B7A6CBF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_E7BC66F94B7A6CBF_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid Method_1_C946F64728403EED(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1 a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_C946F64728403EED_OFFSET))(this, a1, a2, a3);
		}
	};
}
