#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/Cameras/ScopedOverlookCameraMode_Enum_3_574692C6858BCEEA.h"
#include "unitysdk/MoleMole/Cameras/ScopedOverlookCameraMode_Enum_3_F9E481BF72336112.h"
#include "unitysdk/MoleMole/Cameras/ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_475;
namespace MoleMole::Cameras { class OverlookCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116D27A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x116D22A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_003BCEE77B554B8B_OFFSET UNITYSDK_OFFSET(0x116D7AE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_03DCDD14283C7F97_OFFSET UNITYSDK_OFFSET(0x116D5B10)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_08540CA3B07D5D4C_OFFSET UNITYSDK_OFFSET(0x116D3AA0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_0C860AB7507BAB00_OFFSET UNITYSDK_OFFSET(0x116D7C90)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_101A32C963DB381D_OFFSET UNITYSDK_OFFSET(0x116D7850)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x116D5A00)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_1B6C02BB64D748CB_OFFSET UNITYSDK_OFFSET(0x116D6810)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_3BAC235C44CF4114_OFFSET UNITYSDK_OFFSET(0x116D5BE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_456C6D6AD33BF539_1_OFFSET UNITYSDK_OFFSET(0x116D6C60)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_456C6D6AD33BF539_OFFSET UNITYSDK_OFFSET(0x116D5F60)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_4F5D6A7E6189A876_OFFSET UNITYSDK_OFFSET(0x116D3D20)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_502151CB9BD48407_OFFSET UNITYSDK_OFFSET(0x116D7070)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_54DC8E44CB0235C2_OFFSET UNITYSDK_OFFSET(0x116D6370)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_791080C2E10226D6_OFFSET UNITYSDK_OFFSET(0x116D5040)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_81DA82687DD552DD_OFFSET UNITYSDK_OFFSET(0x116D3200)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_83D997291DF5390E_OFFSET UNITYSDK_OFFSET(0x116D80F0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_8C189A2F9FEF53B4_OFFSET UNITYSDK_OFFSET(0x116D5120)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_94ACC7EA43BA7D0B_OFFSET UNITYSDK_OFFSET(0x116D35C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_9988C07AD83EEDAF_OFFSET UNITYSDK_OFFSET(0x116D2D60)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_A44B75F73D46BA7B_OFFSET UNITYSDK_OFFSET(0x116D2720)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_AA25391E670C1134_OFFSET UNITYSDK_OFFSET(0x116D51D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_B85F5AFFD4064BD3_OFFSET UNITYSDK_OFFSET(0x116D49E0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_D6D2393EEF15A1C4_OFFSET UNITYSDK_OFFSET(0x116D56D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_DCECD94370F1B8B5_OFFSET UNITYSDK_OFFSET(0x116D4620)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_E8F666B824789CF9_OFFSET UNITYSDK_OFFSET(0x116D3CE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_F8D2A797E99A54DF_OFFSET UNITYSDK_OFFSET(0x116D6500)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x116D2570)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_TypeDefinitionIndex = 81958;

	class ScopedOverlookCameraMode : public ::System::Object
	{
	public:
		::MoleMole::Utils::TaskBasedEventCollection_1<::MoleMole::Cameras::ScopedOverlookCameraMode_Enum_3_F9E481BF72336112>* _events; // 0x10
		::System::Boolean _isCameraSetup; // 0x18
		::System::Int32 _frameCount; // 0x1C
		::MoleMole::Cameras::OverlookCameraConfig* _config; // 0x20
		::System::Single _enterYaw; // 0x28
		::PipelineCamera::ICameraDataBlenderBuilder* _blenderBuilder; // 0x30
		::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* _subModule; // 0x38
		::Class_0_16E4307DCC419505_475* _mainTarget; // 0x40
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_475*>* _additionalTarget; // 0x48
		::System::Predicate_1<::Class_0_16E4307DCC419505_475*>* _invalidTarget; // 0x50
		::Nap::NapECS::EcsWorld* _entityWorld; // 0x58
		::PipelineCamera::WorldBasicCameraData _result; // 0x60

		::System::Void _ctor(::MoleMole::Cameras::OverlookCameraConfig*& a1, ::Class_0_16E4307DCC419505_475* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*&, ::Class_0_16E4307DCC419505_475*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE__CTOR_OFFSET))(this, a1, a2);
		}

		::MoleMole::Cameras::ScopedOverlookCameraMode_Enum_3_574692C6858BCEEA get_Target()
		{
			return ((::MoleMole::Cameras::ScopedOverlookCameraMode_Enum_3_574692C6858BCEEA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GET_TARGET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_DISPOSE_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_9988C07AD83EEDAF()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_9988C07AD83EEDAF_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_81DA82687DD552DD()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_81DA82687DD552DD_OFFSET))(this);
		}

		::System::Single Method_1_E8F666B824789CF9(::System::Single a1, ::System::Single a2, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_E8F666B824789CF9_OFFSET))(this, a1, a2, a3);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_4F5D6A7E6189A876(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_4F5D6A7E6189A876_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_791080C2E10226D6(::Class_0_16E4307DCC419505_475* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_475*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_791080C2E10226D6_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_8C189A2F9FEF53B4()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_8C189A2F9FEF53B4_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_AA25391E670C1134()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_AA25391E670C1134_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_D6D2393EEF15A1C4()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_D6D2393EEF15A1C4_OFFSET))(this);
		}

		::UnityEngine::BoundingSphere Method_1_94ACC7EA43BA7D0B()
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_94ACC7EA43BA7D0B_OFFSET))(this);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_1290EA767C459179_OFFSET))(this);
		}

		::System::Single Method_1_03DCDD14283C7F97(::System::Single a1, ::System::Single a2, ::System::Single a3, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B& a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_03DCDD14283C7F97_OFFSET))(this, a1, a2, a3, a4);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_3BAC235C44CF4114(::PipelineCamera::WorldBasicCameraData a1, ::UnityEngine::BoundingSphere a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_3BAC235C44CF4114_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid Method_1_A44B75F73D46BA7B(::MoleMole::Cameras::OverlookCameraConfig* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_A44B75F73D46BA7B_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_456C6D6AD33BF539(::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B& a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_456C6D6AD33BF539_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_DCECD94370F1B8B5(::PipelineCamera::WorldBasicCameraData a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_DCECD94370F1B8B5_OFFSET))(this, a1);
		}

		::System::Void Method_1_54DC8E44CB0235C2(::Class_0_16E4307DCC419505_475* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_475*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_54DC8E44CB0235C2_OFFSET))(this, a1);
		}

		::System::Void Method_1_F8D2A797E99A54DF(::MoleMole::Cameras::OverlookCameraConfig* a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_F8D2A797E99A54DF_OFFSET))(this, a1, a2, a3);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_B85F5AFFD4064BD3(::PipelineCamera::WorldBasicCameraData a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_B85F5AFFD4064BD3_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_1B6C02BB64D748CB(::PipelineCamera::WorldBasicCameraData a1, ::UnityEngine::BoundingSphere a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_1B6C02BB64D748CB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_502151CB9BD48407(::PipelineCamera::WorldBasicCameraData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_502151CB9BD48407_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_101A32C963DB381D(::PipelineCamera::WorldBasicCameraData a1, ::UnityEngine::BoundingSphere a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_101A32C963DB381D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_003BCEE77B554B8B(::Class_0_16E4307DCC419505_475* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_475*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_003BCEE77B554B8B_OFFSET))(this, a1);
		}

		::System::Void Method_1_0C860AB7507BAB00(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::OverlookCameraConfig*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::OverlookCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_0C860AB7507BAB00_OFFSET))(this, a1, a2);
		}

		::PipelineCamera::ScopedDelegateHandle Method_1_83D997291DF5390E(::MoleMole::Cameras::OverlookCameraConfig*& a1)
		{
			return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_83D997291DF5390E_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_08540CA3B07D5D4C(::PipelineCamera::WorldBasicCameraData a1, ::UnityEngine::BoundingSphere a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_08540CA3B07D5D4C_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_456C6D6AD33BF539_1(::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B& a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_456C6D6AD33BF539_1_OFFSET))(this, a1);
		}
	};
}
