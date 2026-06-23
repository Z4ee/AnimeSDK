#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B6CB25C8158EE1DE_Enum_3_C780BFBFED223F30_3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_24F60EA0D4DCCDF0.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class TimelineDataExtra; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class DelegateCameraDataBlenderBuilder; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6CB25C8158EE1DE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114DDAC0)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_21360BB0E7184F8B_1_OFFSET UNITYSDK_OFFSET(0x114DF940)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_21360BB0E7184F8B_OFFSET UNITYSDK_OFFSET(0x114DE220)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x114DDA50)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_35F826730F7FB9BD_OFFSET UNITYSDK_OFFSET(0x114DF700)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_392267C4D8AC544E_1_OFFSET UNITYSDK_OFFSET(0x114DED00)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_392267C4D8AC544E_OFFSET UNITYSDK_OFFSET(0x114DEE60)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_49BC8120B2321B5D_OFFSET UNITYSDK_OFFSET(0x114DE050)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x114DEFC0)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_72D56A137A65675E_OFFSET UNITYSDK_OFFSET(0x114DF3D0)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x114DE370)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x114DDB80)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x114DF2B0)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_B13A873C7C334E65_OFFSET UNITYSDK_OFFSET(0x114DEBA0)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_D26D36BF546FB283_OFFSET UNITYSDK_OFFSET(0x114DDD80)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_DB7233D1CBD72694_OFFSET UNITYSDK_OFFSET(0x114DF060)
#define CLASS_1_B6CB25C8158EE1DE_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x114DD740)
#define CLASS_1_B6CB25C8158EE1DE__CTOR_OFFSET UNITYSDK_OFFSET(0x114DD5F0)

inline static constexpr unsigned int Class_1_B6CB25C8158EE1DE_TypeDefinitionIndex = 60823;

class Class_1_B6CB25C8158EE1DE : public ::System::Object
{
public:
	// static const ::Enum_3_24F60EA0D4DCCDF0 Field_1_0; // 0x0
	// static const ::PipelineCamera::WorldBasicCameraDataDeltaFlag Field_1_1; // 0x0
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_B6CB25C8158EE1DE_Enum_3_C780BFBFED223F30_3>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::Cinemachine::CinemachineVirtualCameraBase*, ::System::Int32>* Field_1_6; // 0x18
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* Field_1_5; // 0x28
	::MoleMole::TimelineDataExtra* Field_1_4; // 0x30
	::System::Boolean Field_1_7; // 0x38
	::System::Boolean Field_1_8; // 0x39
	::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Field_1_9; // 0x3C

	::System::Void _ctor(::MoleMole::TimelineDataExtra* a1, ::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineDataExtra*, ::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_D26D36BF546FB283()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_D26D36BF546FB283_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_21360BB0E7184F8B(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_21360BB0E7184F8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_80313B77C31AD02B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_80313B77C31AD02B_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_1_49BC8120B2321B5D(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_49BC8120B2321B5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	static ::Class_1_B6CB25C8158EE1DE* Method_1_DB7233D1CBD72694(::MoleMole::TimelineDataExtra* a1, ::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* a2)
	{
		return ((::Class_1_B6CB25C8158EE1DE*(*)(::MoleMole::TimelineDataExtra*, ::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_DB7233D1CBD72694_OFFSET))(a1, a2);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_72D56A137A65675E(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_72D56A137A65675E_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_B13A873C7C334E65()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_B13A873C7C334E65_OFFSET))(this);
	}

	::PipelineCamera::DelegateCameraDataBlenderBuilder* Method_1_392267C4D8AC544E()
	{
		return ((::PipelineCamera::DelegateCameraDataBlenderBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_392267C4D8AC544E_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_35F826730F7FB9BD()
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_35F826730F7FB9BD_OFFSET))(this);
	}

	::PipelineCamera::DelegateCameraDataBlenderBuilder* Method_1_392267C4D8AC544E_1()
	{
		return ((::PipelineCamera::DelegateCameraDataBlenderBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_392267C4D8AC544E_1_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_21360BB0E7184F8B_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_METHOD_1_21360BB0E7184F8B_1_OFFSET))(this, a1);
	}
};
