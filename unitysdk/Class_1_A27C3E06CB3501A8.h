#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A27C3E06CB3501A8_Enum_3_33B16E3E02BB0BB4_7.h"
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

#define CLASS_1_A27C3E06CB3501A8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FFF3A0)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_914F14D9D3E24DA9_OFFSET UNITYSDK_OFFSET(0x17000100)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_A0BB8F026CA1E571_OFFSET UNITYSDK_OFFSET(0x16FFF320)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_A68304C01F467092_OFFSET UNITYSDK_OFFSET(0x16FFFA40)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x16FFF2A0)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_B26D7B67C4C84C49_OFFSET UNITYSDK_OFFSET(0x16FFFE80)
#define CLASS_1_A27C3E06CB3501A8_METHOD_1_CDA35E867BCE9ED3_OFFSET UNITYSDK_OFFSET(0x16FFF440)
#define CLASS_1_A27C3E06CB3501A8__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFF0F0)

inline static constexpr unsigned int Class_1_A27C3E06CB3501A8_TypeDefinitionIndex = 65536;

class Class_1_A27C3E06CB3501A8 : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_A27C3E06CB3501A8_Enum_3_33B16E3E02BB0BB4_7>* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24
	::UnityEngine::Quaternion Field_1_4; // 0x30

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_CDA35E867BCE9ED3(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_CDA35E867BCE9ED3_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_A68304C01F467092(::MoleMole::Battle::Entity*& a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_A68304C01F467092_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B26D7B67C4C84C49(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_B26D7B67C4C84C49_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_914F14D9D3E24DA9(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Battle::Entity*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_914F14D9D3E24DA9_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_A0BB8F026CA1E571(::MoleMole::Battle::Entity* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_METHOD_1_A0BB8F026CA1E571_OFFSET))(this, a1);
	}
};
