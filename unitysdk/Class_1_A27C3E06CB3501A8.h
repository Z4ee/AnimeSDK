#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A27C3E06CB3501A8_Enum_3_33B16E3E02BB0BB4_14.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }

#define CLASS_1_A27C3E06CB3501A8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B1B430)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_914F14D9D3E24DA9_OFFSET UNITYSDK_OFFSET(0x18B1B4D0)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_A0BB8F026CA1E571_OFFSET UNITYSDK_OFFSET(0x18B1B3B0)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_A68304C01F467092_OFFSET UNITYSDK_OFFSET(0x18B1BE50)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x18B1B330)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_B26D7B67C4C84C49_OFFSET UNITYSDK_OFFSET(0x18B1B600)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_CDA35E867BCE9ED3_OFFSET UNITYSDK_OFFSET(0x18B1B880)
#define CLASS_1_A27C3E06CB3501A8__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1B180)

inline static constexpr unsigned int Class_1_A27C3E06CB3501A8_TypeDefinitionIndex = 80895;

class Class_1_A27C3E06CB3501A8 : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_A27C3E06CB3501A8_Enum_3_33B16E3E02BB0BB4_14>* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::UnityEngine::Quaternion Field_1_4; // 0x24
	::UnityEngine::Vector3 Field_1_5; // 0x34

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_914F14D9D3E24DA9(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Battle::Entity*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_914F14D9D3E24DA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B26D7B67C4C84C49(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_B26D7B67C4C84C49_OFFSET))(this, a1, a2, a3, a4);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_CDA35E867BCE9ED3(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_CDA35E867BCE9ED3_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_A0BB8F026CA1E571(::MoleMole::Battle::Entity* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_A0BB8F026CA1E571_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_A68304C01F467092(::MoleMole::Battle::Entity*& a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_A68304C01F467092_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_AA6AC38756233BD0_OFFSET))(this, a1);
	}
};
