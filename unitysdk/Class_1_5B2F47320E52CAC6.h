#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B2F47320E52CAC6_Enum_3_33B16E3E02BB0BB4_13.h"
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

#define CLASS_1_5B2F47320E52CAC6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12091CD0)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_0A545C018D164123_OFFSET UNITYSDK_OFFSET(0x12093450)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_150B4BE7F595D7BA_OFFSET UNITYSDK_OFFSET(0x12092240)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_189EC257A8D53234_OFFSET UNITYSDK_OFFSET(0x12092090)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_192BAB7D0751DC2F_OFFSET UNITYSDK_OFFSET(0x12092B90)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_21B49519B95794B3_1_OFFSET UNITYSDK_OFFSET(0x12092B70)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_21B49519B95794B3_2_OFFSET UNITYSDK_OFFSET(0x120932B0)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_21B49519B95794B3_OFFSET UNITYSDK_OFFSET(0x120928D0)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_2BE5E8FB547356E3_1_OFFSET UNITYSDK_OFFSET(0x12093A10)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_2BE5E8FB547356E3_OFFSET UNITYSDK_OFFSET(0x12093140)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_4BF06BA67D298086_OFFSET UNITYSDK_OFFSET(0x12091C50)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x120921C0)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_6BE1CA8D28099056_OFFSET UNITYSDK_OFFSET(0x120928F0)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x12091FE0)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_B632E3BE93938E42_OFFSET UNITYSDK_OFFSET(0x12092460)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_D42CD30C840C86F0_OFFSET UNITYSDK_OFFSET(0x12091D70)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_D6C225F121F56344_1_OFFSET UNITYSDK_OFFSET(0x120932D0)
#define CLASS_1_5B2F47320E52CAC6_METHOD_1_D6C225F121F56344_OFFSET UNITYSDK_OFFSET(0x12092FC0)
#define CLASS_1_5B2F47320E52CAC6__CTOR_OFFSET UNITYSDK_OFFSET(0x12091880)

inline static constexpr unsigned int Class_1_5B2F47320E52CAC6_TypeDefinitionIndex = 80107;

class Class_1_5B2F47320E52CAC6 : public ::System::Object
{
public:
	::MoleMole::Cameras::BezierSurfaceCameraConfig* Field_1_0; // 0x10
	::Foundation::Clamped_1<::System::Single> Field_1_1; // 0x18
	::Foundation::Clamped_1<::System::Single> Field_1_3; // 0x30
	::Foundation::Clamped_1<::System::Single> Field_1_4; // 0x48
	::Foundation::Clamped_1<::System::Single> Field_1_2; // 0x60
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_5B2F47320E52CAC6_Enum_3_33B16E3E02BB0BB4_13>* Field_1_6; // 0x78
	::System::Boolean Field_1_5; // 0x80

	::System::Void _ctor(::MoleMole::Cameras::BezierSurfaceCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_D42CD30C840C86F0(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_D42CD30C840C86F0_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_4BF06BA67D298086(::MoleMole::Cameras::BezierSurfaceCameraConfig* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_4BF06BA67D298086_OFFSET))(this, a1);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_150B4BE7F595D7BA(::MoleMole::Cameras::BezierSurfaceCameraConfig* a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_150B4BE7F595D7BA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B632E3BE93938E42()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_B632E3BE93938E42_OFFSET))(this);
	}

	::Foundation::Clamped_1<::System::Single> Method_1_21B49519B95794B3()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_21B49519B95794B3_OFFSET))(this);
	}

	::System::Boolean Method_1_6BE1CA8D28099056(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_6BE1CA8D28099056_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_189EC257A8D53234(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_189EC257A8D53234_OFFSET))(this, a1);
	}

	::Foundation::Clamped_1<::System::Single> Method_1_21B49519B95794B3_1()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_21B49519B95794B3_1_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_192BAB7D0751DC2F(::MoleMole::Cameras::BezierSurfaceCameraConfig* a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::BezierSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_192BAB7D0751DC2F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D6C225F121F56344(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_D6C225F121F56344_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2BE5E8FB547356E3(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_2BE5E8FB547356E3_OFFSET))(this, a1);
	}

	::Foundation::Clamped_1<::System::Single> Method_1_21B49519B95794B3_2()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_21B49519B95794B3_2_OFFSET))(this);
	}

	::System::Boolean Method_1_D6C225F121F56344_1(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_D6C225F121F56344_1_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_0A545C018D164123()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_0A545C018D164123_OFFSET))(this);
	}

	::System::Boolean Method_1_2BE5E8FB547356E3_1(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B2F47320E52CAC6_METHOD_1_2BE5E8FB547356E3_1_OFFSET))(this, a1);
	}
};
