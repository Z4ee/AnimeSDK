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

class Class_0_16E4307DCC419505_510;
namespace MoleMole::Cameras { class OverlookCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CD86C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x10CD81D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_03DCDD14283C7F97_OFFSET UNITYSDK_OFFSET(0x10CDC700)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_08540CA3B07D5D4C_OFFSET UNITYSDK_OFFSET(0x10CD99F0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_0C860AB7507BAB00_OFFSET UNITYSDK_OFFSET(0x10CDDC30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_101A32C963DB381D_OFFSET UNITYSDK_OFFSET(0x10CD9C20)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10CDDB20)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_16801BC35ED4A7E1_OFFSET UNITYSDK_OFFSET(0x10CDD800)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_2BD2A2E8F5E35FEE_OFFSET UNITYSDK_OFFSET(0x10CDC050)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_456C6D6AD33BF539_1_OFFSET UNITYSDK_OFFSET(0x10CDABD0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_456C6D6AD33BF539_OFFSET UNITYSDK_OFFSET(0x10CDA7D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_4F5D6A7E6189A876_OFFSET UNITYSDK_OFFSET(0x10CDAFE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_502151CB9BD48407_OFFSET UNITYSDK_OFFSET(0x10CDC7D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_563D01EF12842FDB_OFFSET UNITYSDK_OFFSET(0x10CDCFE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_6B76CD2A2F97B3A3_OFFSET UNITYSDK_OFFSET(0x10CD8C80)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_72D0379EC6B2445B_OFFSET UNITYSDK_OFFSET(0x10CDBF70)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_83D997291DF5390E_OFFSET UNITYSDK_OFFSET(0x10CDE090)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_8C189A2F9FEF53B4_OFFSET UNITYSDK_OFFSET(0x10CDA280)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_94ACC7EA43BA7D0B_OFFSET UNITYSDK_OFFSET(0x10CD9510)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_9B69F2843E8D7DC8_OFFSET UNITYSDK_OFFSET(0x10CD9150)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_A44B75F73D46BA7B_OFFSET UNITYSDK_OFFSET(0x10CD8640)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_B85F5AFFD4064BD3_OFFSET UNITYSDK_OFFSET(0x10CDB900)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_D18AA788221C2AD6_OFFSET UNITYSDK_OFFSET(0x10CD9EB0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_D480BDC40F761BA9_OFFSET UNITYSDK_OFFSET(0x10CDC200)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_D5AD576C66CCAEF7_OFFSET UNITYSDK_OFFSET(0x10CDD360)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_E8F666B824789CF9_OFFSET UNITYSDK_OFFSET(0x10CDA790)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_E936B56DDFB2D161_OFFSET UNITYSDK_OFFSET(0x10CDA330)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_F8D2A797E99A54DF_OFFSET UNITYSDK_OFFSET(0x10CDD4F0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10CD84A0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_TypeDefinitionIndex = 78860;

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
		::Class_0_16E4307DCC419505_510* _mainTarget; // 0x40
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_510*>* _additionalTarget; // 0x48
		::System::Predicate_1<::Class_0_16E4307DCC419505_510*>* _invalidTarget; // 0x50
		::Nap::NapECS::EcsWorld* _entityWorld; // 0x58
		::PipelineCamera::WorldBasicCameraData _result; // 0x60

		::System::Void _ctor(::MoleMole::Cameras::OverlookCameraConfig*& a1, ::Class_0_16E4307DCC419505_510* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*&, ::Class_0_16E4307DCC419505_510*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE__CTOR_OFFSET))(this, a1, a2);
		}

		::MoleMole::Cameras::ScopedOverlookCameraMode_Enum_3_574692C6858BCEEA get_Target()
		{
			return ((::MoleMole::Cameras::ScopedOverlookCameraMode_Enum_3_574692C6858BCEEA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GET_TARGET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_DISPOSE_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_6B76CD2A2F97B3A3()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_6B76CD2A2F97B3A3_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_101A32C963DB381D(::PipelineCamera::WorldBasicCameraData a1, ::UnityEngine::BoundingSphere a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_101A32C963DB381D_OFFSET))(this, a1, a2);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_D18AA788221C2AD6(::PipelineCamera::WorldBasicCameraData a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_D18AA788221C2AD6_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_E936B56DDFB2D161(::PipelineCamera::WorldBasicCameraData a1, ::UnityEngine::BoundingSphere a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_E936B56DDFB2D161_OFFSET))(this, a1, a2);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_4F5D6A7E6189A876(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_4F5D6A7E6189A876_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_72D0379EC6B2445B(::Class_0_16E4307DCC419505_510* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_510*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_72D0379EC6B2445B_OFFSET))(this, a1);
		}

		::System::Void Method_1_2BD2A2E8F5E35FEE(::Class_0_16E4307DCC419505_510* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_510*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_2BD2A2E8F5E35FEE_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_D480BDC40F761BA9()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_D480BDC40F761BA9_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_456C6D6AD33BF539(::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B& a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_456C6D6AD33BF539_OFFSET))(this, a1);
		}

		::System::Void Method_1_502151CB9BD48407(::PipelineCamera::WorldBasicCameraData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_502151CB9BD48407_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_8C189A2F9FEF53B4()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_8C189A2F9FEF53B4_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_08540CA3B07D5D4C(::PipelineCamera::WorldBasicCameraData a1, ::UnityEngine::BoundingSphere a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_08540CA3B07D5D4C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_D5AD576C66CCAEF7(::Class_0_16E4307DCC419505_510* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_510*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_D5AD576C66CCAEF7_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_563D01EF12842FDB(::PipelineCamera::WorldBasicCameraData a1, ::UnityEngine::BoundingSphere a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_563D01EF12842FDB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_F8D2A797E99A54DF(::MoleMole::Cameras::OverlookCameraConfig* a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_F8D2A797E99A54DF_OFFSET))(this, a1, a2, a3);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_B85F5AFFD4064BD3(::PipelineCamera::WorldBasicCameraData a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_B85F5AFFD4064BD3_OFFSET))(this, a1);
		}

		::UnityEngine::BoundingSphere Method_1_94ACC7EA43BA7D0B()
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_94ACC7EA43BA7D0B_OFFSET))(this);
		}

		::System::Single Method_1_E8F666B824789CF9(::System::Single a1, ::System::Single a2, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_E8F666B824789CF9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_1290EA767C459179_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid Method_1_A44B75F73D46BA7B(::MoleMole::Cameras::OverlookCameraConfig* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_A44B75F73D46BA7B_OFFSET))(this, a1);
		}

		::System::Single Method_1_03DCDD14283C7F97(::System::Single a1, ::System::Single a2, ::System::Single a3, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B& a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_03DCDD14283C7F97_OFFSET))(this, a1, a2, a3, a4);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_9B69F2843E8D7DC8()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_9B69F2843E8D7DC8_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_456C6D6AD33BF539_1(::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B& a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::MoleMole::Cameras::ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_456C6D6AD33BF539_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_0C860AB7507BAB00(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::OverlookCameraConfig*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::OverlookCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_0C860AB7507BAB00_OFFSET))(this, a1, a2);
		}

		::PipelineCamera::ScopedDelegateHandle Method_1_83D997291DF5390E(::MoleMole::Cameras::OverlookCameraConfig*& a1)
		{
			return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_83D997291DF5390E_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_16801BC35ED4A7E1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_METHOD_1_16801BC35ED4A7E1_OFFSET))(this);
		}
	};
}
