#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD9BF245E9195DA2_Enum_3_33B16E3E02BB0BB4_13.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class BezierSurfaceCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_FD9BF245E9195DA2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B08810)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_189EC257A8D53234_OFFSET UNITYSDK_OFFSET(0x10B09200)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_192BAB7D0751DC2F_OFFSET UNITYSDK_OFFSET(0x10B095B0)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_205DC02BC4B931AD_OFFSET UNITYSDK_OFFSET(0x10B09330)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_21B49519B95794B3_1_OFFSET UNITYSDK_OFFSET(0x10B0A510)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_21B49519B95794B3_2_OFFSET UNITYSDK_OFFSET(0x10B0A530)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_21B49519B95794B3_OFFSET UNITYSDK_OFFSET(0x10B0A470)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_22C031C2E2271C85_OFFSET UNITYSDK_OFFSET(0x10B09C10)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_2BE5E8FB547356E3_1_OFFSET UNITYSDK_OFFSET(0x10B0A550)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_2BE5E8FB547356E3_OFFSET UNITYSDK_OFFSET(0x10B08FD0)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_43A7D3D22B68CD59_OFFSET UNITYSDK_OFFSET(0x10B088B0)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_4BF06BA67D298086_OFFSET UNITYSDK_OFFSET(0x10B08790)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x10B0A490)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_93CB117B68824A6F_OFFSET UNITYSDK_OFFSET(0x10B0A080)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x10B09140)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_B60766D56BABF3DE_1_OFFSET UNITYSDK_OFFSET(0x10B0A300)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_B60766D56BABF3DE_OFFSET UNITYSDK_OFFSET(0x10B08E60)
#define CLASS_1_FD9BF245E9195DA2_METHOD_1_CAD2B59C5C1E7BF1_OFFSET UNITYSDK_OFFSET(0x10B099F0)
#define CLASS_1_FD9BF245E9195DA2__CTOR_OFFSET UNITYSDK_OFFSET(0x10B083B0)

inline static constexpr unsigned int Class_1_FD9BF245E9195DA2_TypeDefinitionIndex = 79783;

class Class_1_FD9BF245E9195DA2 : public ::System::Object
{
public:
	::Foundation::Clamped_1<::System::Single> Field_1_0; // 0x10
	::Foundation::Clamped_1<::System::Single> Field_1_1; // 0x28
	::Foundation::Clamped_1<::System::Single> Field_1_2; // 0x40
	::MoleMole::Cameras::BezierSurfaceCameraConfig* Field_1_3; // 0x58
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_FD9BF245E9195DA2_Enum_3_33B16E3E02BB0BB4_13>* Field_1_5; // 0x60
	::Foundation::Clamped_1<::System::Single> Field_1_7; // 0x68
	::System::Boolean Field_1_6; // 0x80

	::System::Void _ctor(::MoleMole::Cameras::BezierSurfaceCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_43A7D3D22B68CD59()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_43A7D3D22B68CD59_OFFSET))(this);
	}

	::System::Boolean Method_1_B60766D56BABF3DE(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_B60766D56BABF3DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2BE5E8FB547356E3(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_2BE5E8FB547356E3_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::System::Boolean Method_1_205DC02BC4B931AD(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_205DC02BC4B931AD_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_192BAB7D0751DC2F(::MoleMole::Cameras::BezierSurfaceCameraConfig* a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_192BAB7D0751DC2F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_22C031C2E2271C85()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_22C031C2E2271C85_OFFSET))(this);
	}

	::System::Boolean Method_1_93CB117B68824A6F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_93CB117B68824A6F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B60766D56BABF3DE_1(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_B60766D56BABF3DE_1_OFFSET))(this, a1);
	}

	::Foundation::Clamped_1<::System::Single> Method_1_21B49519B95794B3()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_21B49519B95794B3_OFFSET))(this);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::Foundation::Clamped_1<::System::Single> Method_1_21B49519B95794B3_1()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_21B49519B95794B3_1_OFFSET))(this);
	}

	::System::Void Method_1_189EC257A8D53234(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_189EC257A8D53234_OFFSET))(this, a1);
	}

	::Foundation::Clamped_1<::System::Single> Method_1_21B49519B95794B3_2()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_21B49519B95794B3_2_OFFSET))(this);
	}

	::System::Void Method_1_CAD2B59C5C1E7BF1(::MoleMole::Cameras::BezierSurfaceCameraConfig* a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_CAD2B59C5C1E7BF1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_2BE5E8FB547356E3_1(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_2BE5E8FB547356E3_1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_4BF06BA67D298086(::MoleMole::Cameras::BezierSurfaceCameraConfig* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_FD9BF245E9195DA2_METHOD_1_4BF06BA67D298086_OFFSET))(this, a1);
	}
};
