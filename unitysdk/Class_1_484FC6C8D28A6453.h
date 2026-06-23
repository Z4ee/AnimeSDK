#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_484FC6C8D28A6453_Enum_3_C780BFBFED223F30_7.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_D7792C76A5465266.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace MoleMole::Vehicle { class VehicleTestCameraMono; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_484FC6C8D28A6453_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13FBC2D0)
#define CLASS_1_484FC6C8D28A6453_METHOD_1_3CB594945AF85BF3_OFFSET UNITYSDK_OFFSET(0x13FBC380)
#define CLASS_1_484FC6C8D28A6453_METHOD_1_49BC8120B2321B5D_OFFSET UNITYSDK_OFFSET(0x13FBC8F0)
#define CLASS_1_484FC6C8D28A6453_METHOD_1_5967057CD668BF97_OFFSET UNITYSDK_OFFSET(0x13FBC610)
#define CLASS_1_484FC6C8D28A6453_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x13FBC570)
#define CLASS_1_484FC6C8D28A6453_METHOD_1_8D40D96F1A4BFB23_OFFSET UNITYSDK_OFFSET(0x13FBCAA0)
#define CLASS_1_484FC6C8D28A6453_METHOD_1_AD4565442A48CEF1_OFFSET UNITYSDK_OFFSET(0x13FBC250)
#define CLASS_1_484FC6C8D28A6453_METHOD_1_B13A873C7C334E65_OFFSET UNITYSDK_OFFSET(0x13FBC410)
#define CLASS_1_484FC6C8D28A6453_METHOD_1_D26D36BF546FB283_OFFSET UNITYSDK_OFFSET(0x13FBC650)
#define CLASS_1_484FC6C8D28A6453__CTOR_OFFSET UNITYSDK_OFFSET(0x13FBC110)

inline static constexpr unsigned int Class_1_484FC6C8D28A6453_TypeDefinitionIndex = 82037;

class Class_1_484FC6C8D28A6453 : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_484FC6C8D28A6453_Enum_3_C780BFBFED223F30_7>* Field_1_0; // 0x10
	::Struct_2_D7792C76A5465266 Field_1_2; // 0x18
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_3; // 0x38
	::System::Boolean Field_1_1; // 0x40

	::System::Void _ctor(::MoleMole::Vehicle::VehicleTestCameraMono*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*&))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_DISPOSE_OFFSET))(this);
	}

	static ::Class_1_484FC6C8D28A6453* Method_1_3CB594945AF85BF3(::MoleMole::Vehicle::VehicleTestCameraMono* a1)
	{
		return ((::Class_1_484FC6C8D28A6453*(*)(::MoleMole::Vehicle::VehicleTestCameraMono*))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_METHOD_1_3CB594945AF85BF3_OFFSET))(a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_AD4565442A48CEF1(::MoleMole::Vehicle::VehicleTestCameraMono* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_METHOD_1_AD4565442A48CEF1_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_B13A873C7C334E65()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_METHOD_1_B13A873C7C334E65_OFFSET))(this);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_5967057CD668BF97()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_METHOD_1_5967057CD668BF97_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_D26D36BF546FB283()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_METHOD_1_D26D36BF546FB283_OFFSET))(this);
	}

	::System::Void Method_1_49BC8120B2321B5D(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_METHOD_1_49BC8120B2321B5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8D40D96F1A4BFB23(::MoleMole::Vehicle::VehicleTestCameraMono*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*&))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_METHOD_1_8D40D96F1A4BFB23_OFFSET))(this, a1);
	}
};
