#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_92DACB0281238082_Enum_3_C780BFBFED223F30_2.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/FAddBehaviorParam.h"
#include "unitysdk/Foundation/FBehaviorHandle.h"
#include "unitysdk/MoleMole/Cameras/BangbooAdjustmentCameraOverriddenConfig.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_2FEF77D21A380E48.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITimestamp; }
namespace Foundation { template <typename T> class KeyBasedBehaviorManager_1; }
namespace MoleMole::Cameras { class BangbooAdjustmentCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class String; }

#define CLASS_1_92DACB0281238082_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD0A6B10)
#define CLASS_1_92DACB0281238082_METHOD_1_0054A9045A54D0A7_OFFSET UNITYSDK_OFFSET(0xD0A77F0)
#define CLASS_1_92DACB0281238082_METHOD_1_00B77A664396B1D7_OFFSET UNITYSDK_OFFSET(0xD0A8560)
#define CLASS_1_92DACB0281238082_METHOD_1_1501699996888A1B_OFFSET UNITYSDK_OFFSET(0xD0A7090)
#define CLASS_1_92DACB0281238082_METHOD_1_31468188A6DDF970_OFFSET UNITYSDK_OFFSET(0xD0A8830)
#define CLASS_1_92DACB0281238082_METHOD_1_39DDF1C57D6F7B15_OFFSET UNITYSDK_OFFSET(0xD0A8910)
#define CLASS_1_92DACB0281238082_METHOD_1_5A5863A8DCA1A489_OFFSET UNITYSDK_OFFSET(0xD0A7660)
#define CLASS_1_92DACB0281238082_METHOD_1_5CC26CBA27117D48_OFFSET UNITYSDK_OFFSET(0xD0A89A0)
#define CLASS_1_92DACB0281238082_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0xD0A8890)
#define CLASS_1_92DACB0281238082_METHOD_1_73E4F7FDB7D52139_OFFSET UNITYSDK_OFFSET(0xD0A7510)
#define CLASS_1_92DACB0281238082_METHOD_1_7FF3D778CC7165BD_OFFSET UNITYSDK_OFFSET(0xD0A71E0)
#define CLASS_1_92DACB0281238082_METHOD_1_C363F3461345AB10_OFFSET UNITYSDK_OFFSET(0xD0A6A80)
#define CLASS_1_92DACB0281238082_METHOD_1_C7A8E5D8FC2FBE99_OFFSET UNITYSDK_OFFSET(0xD0A7A20)
#define CLASS_1_92DACB0281238082_METHOD_1_D26D36BF546FB283_OFFSET UNITYSDK_OFFSET(0xD0A82B0)
#define CLASS_1_92DACB0281238082_METHOD_1_D5918EE8301D7399_OFFSET UNITYSDK_OFFSET(0xD0A6BC0)
#define CLASS_1_92DACB0281238082_METHOD_1_DE3E68B40078F43B_OFFSET UNITYSDK_OFFSET(0xD0A87B0)
#define CLASS_1_92DACB0281238082_METHOD_1_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0xD0A6EB0)
#define CLASS_1_92DACB0281238082__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A67E0)

inline static constexpr unsigned int Class_1_92DACB0281238082_TypeDefinitionIndex = 49654;

class Class_1_92DACB0281238082 : public ::System::Object
{
public:
	::Struct_2_2FEF77D21A380E48 Field_1_1; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_92DACB0281238082_Enum_3_C780BFBFED223F30_2>* Field_1_0; // 0x190
	::Foundation::KeyBasedBehaviorManager_1<::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig>* Field_1_2; // 0x198
	::Foundation::ITimestamp* Field_1_3; // 0x1A0
	::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig Field_1_4; // 0x1A8

	::System::Void _ctor(::System::UInt32 a1, ::Nap::NapECS::EcsWorld* a2, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D5918EE8301D7399(::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_D5918EE8301D7399_OFFSET))(this, a1);
	}

	::System::Void Method_1_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_1_1501699996888A1B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_1501699996888A1B_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_7FF3D778CC7165BD(::PipelineCamera::WorldBasicCameraData a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_7FF3D778CC7165BD_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_73E4F7FDB7D52139()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_73E4F7FDB7D52139_OFFSET))(this);
	}

	::System::Boolean Method_1_5A5863A8DCA1A489(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_5A5863A8DCA1A489_OFFSET))(this, a1);
	}

	::Foundation::FBehaviorHandle Method_1_0054A9045A54D0A7(::System::String* a1, ::System::String* a2, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig a3, ::Foundation::FAddBehaviorParam a4, ::System::String*& a5)
	{
		return ((::Foundation::FBehaviorHandle(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig, ::Foundation::FAddBehaviorParam, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_0054A9045A54D0A7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_C7A8E5D8FC2FBE99(::System::UInt32 a1, ::Nap::NapECS::EcsWorld* a2, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_C7A8E5D8FC2FBE99_OFFSET))(this, a1, a2, a3);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_D26D36BF546FB283()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_D26D36BF546FB283_OFFSET))(this);
	}

	::System::Void Method_1_DE3E68B40078F43B(::Foundation::FBehaviorHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::FBehaviorHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_DE3E68B40078F43B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_00B77A664396B1D7(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_00B77A664396B1D7_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_31468188A6DDF970(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_31468188A6DDF970_OFFSET))(this, a1);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_C363F3461345AB10(::System::UInt32 a1, ::Nap::NapECS::EcsWorld* a2, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_C363F3461345AB10_OFFSET))(this, a1, a2, a3);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_39DDF1C57D6F7B15(::System::UInt32 a1, ::Nap::NapECS::EcsWorld* a2, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* a3)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_39DDF1C57D6F7B15_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5CC26CBA27117D48(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_5CC26CBA27117D48_OFFSET))(this, a1, a2);
	}
};
