#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A278AA6264F2673F_Enum_3_33B16E3E02BB0BB4.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/MoleMole/Cameras/FirstPersonCameraDefaultSetting.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_EBB8F49C837ECBC8.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }

#define CLASS_1_A278AA6264F2673F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF1F2C30)
#define CLASS_1_A278AA6264F2673F_METHOD_1_0CACC767E855DBAE_OFFSET UNITYSDK_OFFSET(0xF1F3610)
#define CLASS_1_A278AA6264F2673F_METHOD_1_4E84FD21E7EECC5B_OFFSET UNITYSDK_OFFSET(0xF1F41D0)
#define CLASS_1_A278AA6264F2673F_METHOD_1_4EB3BA381499DA66_OFFSET UNITYSDK_OFFSET(0xF1F42D0)
#define CLASS_1_A278AA6264F2673F_METHOD_1_6775604F93DD7110_OFFSET UNITYSDK_OFFSET(0xF1F3460)
#define CLASS_1_A278AA6264F2673F_METHOD_1_6FB1B50B8A21D7AD_OFFSET UNITYSDK_OFFSET(0xF1F2BA0)
#define CLASS_1_A278AA6264F2673F_METHOD_1_700D287A85A1E345_OFFSET UNITYSDK_OFFSET(0xF1F34D0)
#define CLASS_1_A278AA6264F2673F_METHOD_1_80B50200BF366CCC_OFFSET UNITYSDK_OFFSET(0xF1F2F50)
#define CLASS_1_A278AA6264F2673F_METHOD_1_D4F11AD3773D5DAB_OFFSET UNITYSDK_OFFSET(0xF1F2CE0)
#define CLASS_1_A278AA6264F2673F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xF1F3600)
#define CLASS_1_A278AA6264F2673F__CTOR_OFFSET UNITYSDK_OFFSET(0xF1F2A30)

inline static constexpr unsigned int Class_1_A278AA6264F2673F_TypeDefinitionIndex = 41545;

class Class_1_A278AA6264F2673F : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_A278AA6264F2673F_Enum_3_33B16E3E02BB0BB4>* Field_1_0; // 0x10
	::Struct_2_EBB8F49C837ECBC8 Field_1_7; // 0x18
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_5; // 0x98
	::System::Boolean Field_1_6; // 0xA0
	::System::Single Field_1_11; // 0xA4
	::MoleMole::Cameras::FirstPersonCameraDefaultSetting Field_1_4; // 0xA8
	::System::Nullable_1<::Foundation::Unreal::Interval_1<::System::Single>> Field_1_10; // 0xB0

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::MoleMole::Cameras::FirstPersonCameraConfig*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Cameras::FirstPersonCameraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D4F11AD3773D5DAB(::System::UInt32 a1, ::MoleMole::Cameras::FirstPersonCameraConfig* a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Cameras::FirstPersonCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F_METHOD_1_D4F11AD3773D5DAB_OFFSET))(this, a1, a2, a3, a4);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_6FB1B50B8A21D7AD(::MoleMole::Battle::Entity* a1, ::MoleMole::Cameras::FirstPersonCameraConfig* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Cameras::FirstPersonCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F_METHOD_1_6FB1B50B8A21D7AD_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_80B50200BF366CCC(::MoleMole::Battle::Entity* a1, ::MoleMole::Cameras::FirstPersonCameraConfig*& a2)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Cameras::FirstPersonCameraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F_METHOD_1_80B50200BF366CCC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6775604F93DD7110(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F_METHOD_1_6775604F93DD7110_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_700D287A85A1E345()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F_METHOD_1_700D287A85A1E345_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_0CACC767E855DBAE(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::System::UInt32 a2, ::MoleMole::Cameras::FirstPersonCameraConfig*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::System::UInt32, ::MoleMole::Cameras::FirstPersonCameraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F_METHOD_1_0CACC767E855DBAE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_4E84FD21E7EECC5B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F_METHOD_1_4E84FD21E7EECC5B_OFFSET))(this);
	}

	::System::Boolean Method_1_4EB3BA381499DA66(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A278AA6264F2673F_METHOD_1_4EB3BA381499DA66_OFFSET))(this, a1, a2);
	}
};
