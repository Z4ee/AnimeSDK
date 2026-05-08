#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9454BFF647B56E9E_Enum_3_33B16E3E02BB0BB4_11.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_6188FB36C2269853.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Cameras { class TacticalCombatCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define CLASS_1_9454BFF647B56E9E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CD70C0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_1_OFFSET UNITYSDK_OFFSET(0x12CD72F0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_2_OFFSET UNITYSDK_OFFSET(0x12CD7480)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_OFFSET UNITYSDK_OFFSET(0x12CD7160)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_14B699223FD27A67_OFFSET UNITYSDK_OFFSET(0x12CD77B0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_32EE333CAE962CF7_OFFSET UNITYSDK_OFFSET(0x12CD7030)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_5D9921C59C46B45F_OFFSET UNITYSDK_OFFSET(0x12CD81B0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_851460D771A9D961_OFFSET UNITYSDK_OFFSET(0x12CD8340)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_910C2B3CA297B693_OFFSET UNITYSDK_OFFSET(0x12CD7CE0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_1_OFFSET UNITYSDK_OFFSET(0x12CD7B40)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_2_OFFSET UNITYSDK_OFFSET(0x12CD8600)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x12CD7610)
#define CLASS_1_9454BFF647B56E9E__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD6EE0)

inline static constexpr unsigned int Class_1_9454BFF647B56E9E_TypeDefinitionIndex = 74982;

class Class_1_9454BFF647B56E9E : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_9454BFF647B56E9E_Enum_3_33B16E3E02BB0BB4_11>* Field_1_0; // 0x10
	::Struct_2_6188FB36C2269853 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x80

	::System::Void _ctor(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_0DA658C7CDDC6A76(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0DA658C7CDDC6A76_1(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0DA658C7CDDC6A76_2(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_2_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_32EE333CAE962CF7(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_32EE333CAE962CF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_14B699223FD27A67()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_14B699223FD27A67_OFFSET))(this);
	}

	::System::Void Method_1_E05ADF64DE351167_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_910C2B3CA297B693(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_910C2B3CA297B693_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5D9921C59C46B45F(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_5D9921C59C46B45F_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_851460D771A9D961(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_851460D771A9D961_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E05ADF64DE351167_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_2_OFFSET))(this, a1);
	}
};
