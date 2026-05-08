#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0BF092863AC7E04F_Enum_3_33B16E3E02BB0BB4_9.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_684D98DEC5D1B919.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class TelescopeCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }

#define CLASS_1_0BF092863AC7E04F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAECB00)
#define CLASS_1_0BF092863AC7E04F_METHOD_1_04F0E94853AE45D0_OFFSET UNITYSDK_OFFSET(0xDAED990)
#define CLASS_1_0BF092863AC7E04F_METHOD_1_299D3D33E8E7EC37_OFFSET UNITYSDK_OFFSET(0xDAED120)
#define CLASS_1_0BF092863AC7E04F_METHOD_1_2BE5E8FB547356E3_OFFSET UNITYSDK_OFFSET(0xDAED640)
#define CLASS_1_0BF092863AC7E04F_METHOD_1_5D70DBC2B80C238B_OFFSET UNITYSDK_OFFSET(0xDAEDB70)
#define CLASS_1_0BF092863AC7E04F_METHOD_1_689053CF769DB92A_OFFSET UNITYSDK_OFFSET(0xDAEDED0)
#define CLASS_1_0BF092863AC7E04F_METHOD_1_6D0BF78B4F3D7A49_OFFSET UNITYSDK_OFFSET(0xDAEC9D0)
#define CLASS_1_0BF092863AC7E04F_METHOD_1_7748ED90511EB1C5_OFFSET UNITYSDK_OFFSET(0xDAECBB0)
#define CLASS_1_0BF092863AC7E04F_METHOD_1_9137EBEFE406B4DC_OFFSET UNITYSDK_OFFSET(0xDAED3D0)
#define CLASS_1_0BF092863AC7E04F_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0xDAED7B0)
#define CLASS_1_0BF092863AC7E04F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xDAEE000)
#define CLASS_1_0BF092863AC7E04F__CTOR_OFFSET UNITYSDK_OFFSET(0xDAEC7B0)

inline static constexpr unsigned int Class_1_0BF092863AC7E04F_TypeDefinitionIndex = 74503;

class Class_1_0BF092863AC7E04F : public ::System::Object
{
public:
	::Struct_2_684D98DEC5D1B919 Field_1_1; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_0BF092863AC7E04F_Enum_3_33B16E3E02BB0BB4_9>* Field_1_0; // 0x90
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_3; // 0x98
	::System::Boolean Field_1_2; // 0xA0

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::MoleMole::Cameras::TelescopeCameraConfig* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Cameras::TelescopeCameraConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_7748ED90511EB1C5(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4, ::MoleMole::Cameras::TelescopeCameraConfig* a5)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::MoleMole::Cameras::TelescopeCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_METHOD_1_7748ED90511EB1C5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9137EBEFE406B4DC(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::MoleMole::Cameras::TelescopeCameraConfig*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Cameras::TelescopeCameraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_METHOD_1_9137EBEFE406B4DC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_2BE5E8FB547356E3(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_METHOD_1_2BE5E8FB547356E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_299D3D33E8E7EC37(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::MoleMole::Cameras::TelescopeCameraConfig* a3, ::PipelineCamera::CameraCommandSpawnSubModules*& a4, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Cameras::TelescopeCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_METHOD_1_299D3D33E8E7EC37_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_6D0BF78B4F3D7A49(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4, ::MoleMole::Cameras::TelescopeCameraConfig* a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::MoleMole::Cameras::TelescopeCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_METHOD_1_6D0BF78B4F3D7A49_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_04F0E94853AE45D0(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_METHOD_1_04F0E94853AE45D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5D70DBC2B80C238B(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_METHOD_1_5D70DBC2B80C238B_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_689053CF769DB92A()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_METHOD_1_689053CF769DB92A_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
