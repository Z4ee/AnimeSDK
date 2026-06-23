#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_44EB9C1BE1434A8D_Enum_3_33B16E3E02BB0BB4_5.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_A9137615B2822874.h"
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

#define CLASS_1_44EB9C1BE1434A8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C34F60)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_189EC257A8D53234_OFFSET UNITYSDK_OFFSET(0x12C36010)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x12C34EF0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_351060D64F7F438E_1_OFFSET UNITYSDK_OFFSET(0x12C35DD0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_351060D64F7F438E_OFFSET UNITYSDK_OFFSET(0x12C350E0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x12C35000)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x12C35E60)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_6E6D34E3225EDF7E_OFFSET UNITYSDK_OFFSET(0x12C35340)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_84DCE10615B2BA60_OFFSET UNITYSDK_OFFSET(0x12C35060)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_1_OFFSET UNITYSDK_OFFSET(0x12C35CC0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_2_OFFSET UNITYSDK_OFFSET(0x12C35EE0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_OFFSET UNITYSDK_OFFSET(0x12C35170)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x12C35F60)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_B8313FE9944D5E32_OFFSET UNITYSDK_OFFSET(0x12C35760)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x12C36590)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_D3D4ED899E46E2D1_OFFSET UNITYSDK_OFFSET(0x12C36520)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_DCCF63B007FEBD16_1_OFFSET UNITYSDK_OFFSET(0x12C361A0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0x12C351F0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_DDF4E6AEE2216B17_OFFSET UNITYSDK_OFFSET(0x12C36140)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_F536CCCC14C0C3BE_OFFSET UNITYSDK_OFFSET(0x12C35D40)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x12C362F0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_FFB9B243ADBD4219_OFFSET UNITYSDK_OFFSET(0x12C36350)
#define CLASS_1_44EB9C1BE1434A8D__CTOR_OFFSET UNITYSDK_OFFSET(0x12C34D30)

inline static constexpr unsigned int Class_1_44EB9C1BE1434A8D_TypeDefinitionIndex = 62921;

class Class_1_44EB9C1BE1434A8D : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_44EB9C1BE1434A8D_Enum_3_33B16E3E02BB0BB4_5>* Field_1_0; // 0x10
	::Struct_2_A9137615B2822874 Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0xA0

	::System::Void _ctor(::MoleMole::Cameras::PlaneCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PlaneCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_84DCE10615B2BA60()
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)())((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_84DCE10615B2BA60_OFFSET))();
	}

	::UnityEngine::Vector2 Method_1_351060D64F7F438E()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_351060D64F7F438E_OFFSET))(this);
	}

	::System::Void Method_1_893814ED967AF5E7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_DCCF63B007FEBD16_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_6E6D34E3225EDF7E()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_6E6D34E3225EDF7E_OFFSET))(this);
	}

	::System::Void Method_1_893814ED967AF5E7_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F536CCCC14C0C3BE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_F536CCCC14C0C3BE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_351060D64F7F438E_1()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_351060D64F7F438E_1_OFFSET))(this);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_893814ED967AF5E7_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_2_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::System::Void Method_1_189EC257A8D53234(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_189EC257A8D53234_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_DDF4E6AEE2216B17()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_DDF4E6AEE2216B17_OFFSET))(this);
	}

	::System::Void Method_1_DCCF63B007FEBD16_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_DCCF63B007FEBD16_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_FFB9B243ADBD4219(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_FFB9B243ADBD4219_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_D3D4ED899E46E2D1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_D3D4ED899E46E2D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8313FE9944D5E32(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_B8313FE9944D5E32_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_BF972395CC722BF9_OFFSET))(this);
	}
};
