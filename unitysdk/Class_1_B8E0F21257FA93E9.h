#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8E0F21257FA93E9_Enum_3_33B16E3E02BB0BB4_15.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_E8856E2B6F276DE7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class PlaneCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }

#define CLASS_1_B8E0F21257FA93E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x148B36E0)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_096AAF1E3CDF42D6_OFFSET UNITYSDK_OFFSET(0x148B4370)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_0AF5A41F88C3627F_OFFSET UNITYSDK_OFFSET(0x148B42E0)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_189EC257A8D53234_OFFSET UNITYSDK_OFFSET(0x148B4740)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x148B3670)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_3192F8355D37E829_OFFSET UNITYSDK_OFFSET(0x148B3BB0)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_351060D64F7F438E_1_OFFSET UNITYSDK_OFFSET(0x148B4630)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_351060D64F7F438E_OFFSET UNITYSDK_OFFSET(0x148B4250)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x148B4530)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_6E6D34E3225EDF7E_OFFSET UNITYSDK_OFFSET(0x148B3780)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_725EC7A0DC1D6958_1_OFFSET UNITYSDK_OFFSET(0x148B45B0)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_725EC7A0DC1D6958_2_OFFSET UNITYSDK_OFFSET(0x148B4B20)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_725EC7A0DC1D6958_OFFSET UNITYSDK_OFFSET(0x148B4170)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_84DCE10615B2BA60_OFFSET UNITYSDK_OFFSET(0x148B46C0)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x148B4870)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x148B4930)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x148B4110)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_DCCF63B007FEBD16_1_OFFSET UNITYSDK_OFFSET(0x148B49D0)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0x148B43E0)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_DDF4E6AEE2216B17_OFFSET UNITYSDK_OFFSET(0x148B41F0)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x148B4BA0)
#define CLASS_1_B8E0F21257FA93E9_METHOD_1_FFB9B243ADBD4219_OFFSET UNITYSDK_OFFSET(0x148B4C00)
#define CLASS_1_B8E0F21257FA93E9__CTOR_OFFSET UNITYSDK_OFFSET(0x148B34B0)

inline static constexpr unsigned int Class_1_B8E0F21257FA93E9_TypeDefinitionIndex = 82860;

class Class_1_B8E0F21257FA93E9 : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_B8E0F21257FA93E9_Enum_3_33B16E3E02BB0BB4_15>* Field_1_2; // 0x10
	::Struct_2_E8856E2B6F276DE7 Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0xA0

	::System::Void _ctor(::MoleMole::Cameras::PlaneCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PlaneCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_6E6D34E3225EDF7E()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_6E6D34E3225EDF7E_OFFSET))(this);
	}

	::System::Void Method_1_C6159FCF4A6D407A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_C6159FCF4A6D407A_OFFSET))(this);
	}

	::System::Void Method_1_725EC7A0DC1D6958(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_725EC7A0DC1D6958_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_DDF4E6AEE2216B17()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_DDF4E6AEE2216B17_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_351060D64F7F438E()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_351060D64F7F438E_OFFSET))(this);
	}

	::System::Void Method_1_0AF5A41F88C3627F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_0AF5A41F88C3627F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_096AAF1E3CDF42D6(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_096AAF1E3CDF42D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_DCCF63B007FEBD16_OFFSET))(this, a1);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_3192F8355D37E829(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_3192F8355D37E829_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_725EC7A0DC1D6958_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_725EC7A0DC1D6958_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_351060D64F7F438E_1()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_351060D64F7F438E_1_OFFSET))(this);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_84DCE10615B2BA60()
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_84DCE10615B2BA60_OFFSET))();
	}

	::System::Void Method_1_189EC257A8D53234(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_189EC257A8D53234_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_BF972395CC722BF9_OFFSET))(this);
	}

	::System::Void Method_1_DCCF63B007FEBD16_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_DCCF63B007FEBD16_1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_725EC7A0DC1D6958_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_725EC7A0DC1D6958_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_FFB9B243ADBD4219(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_METHOD_1_FFB9B243ADBD4219_OFFSET))(this, a1);
	}
};
