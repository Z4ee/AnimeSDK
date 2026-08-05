#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9454BFF647B56E9E_Enum_3_33B16E3E02BB0BB4_2.h"
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

#define CLASS_1_9454BFF647B56E9E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF40920)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_14B699223FD27A67_OFFSET UNITYSDK_OFFSET(0x1AF40EA0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_32EE333CAE962CF7_OFFSET UNITYSDK_OFFSET(0x1AF40880)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_851460D771A9D961_OFFSET UNITYSDK_OFFSET(0x1AF41890)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_910C2B3CA297B693_OFFSET UNITYSDK_OFFSET(0x1AF409C0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_B12B4E4A39A083D2_1_OFFSET UNITYSDK_OFFSET(0x1AF41560)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_B12B4E4A39A083D2_2_OFFSET UNITYSDK_OFFSET(0x1AF41CF0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x1AF413C0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_FCD65F1D31C688F9_1_OFFSET UNITYSDK_OFFSET(0x1AF41700)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_FCD65F1D31C688F9_2_OFFSET UNITYSDK_OFFSET(0x1AF41E90)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_FCD65F1D31C688F9_OFFSET UNITYSDK_OFFSET(0x1AF41230)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_FF639A4CF295D530_OFFSET UNITYSDK_OFFSET(0x1AF41B60)
#define CLASS_1_9454BFF647B56E9E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF40720)

inline static constexpr unsigned int Class_1_9454BFF647B56E9E_TypeDefinitionIndex = 50041;

class Class_1_9454BFF647B56E9E : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_9454BFF647B56E9E_Enum_3_33B16E3E02BB0BB4_2>* Field_1_0; // 0x10
	::Struct_2_6188FB36C2269853 Field_1_7; // 0x18
	::System::Boolean Field_1_6; // 0x80

	::System::Void _ctor(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_910C2B3CA297B693(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_910C2B3CA297B693_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_FCD65F1D31C688F9(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_FCD65F1D31C688F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B12B4E4A39A083D2_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_B12B4E4A39A083D2_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FCD65F1D31C688F9_1(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_FCD65F1D31C688F9_1_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_851460D771A9D961(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_851460D771A9D961_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FF639A4CF295D530(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_FF639A4CF295D530_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_32EE333CAE962CF7(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_32EE333CAE962CF7_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_14B699223FD27A67()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_14B699223FD27A67_OFFSET))(this);
	}

	::System::Void Method_1_B12B4E4A39A083D2_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_B12B4E4A39A083D2_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FCD65F1D31C688F9_2(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_FCD65F1D31C688F9_2_OFFSET))(this, a1);
	}
};
