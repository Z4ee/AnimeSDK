#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D668B684F0C08C69_Enum_3_33B16E3E02BB0BB4_8.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class TopViewCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_D668B684F0C08C69_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B73DF0)
#define CLASS_1_D668B684F0C08C69_METHOD_1_0D1FC58E458E3B37_OFFSET UNITYSDK_OFFSET(0x13B73FE0)
#define CLASS_1_D668B684F0C08C69_METHOD_1_145D634D6EA87E33_OFFSET UNITYSDK_OFFSET(0x13B74480)
#define CLASS_1_D668B684F0C08C69_METHOD_1_29F480D0F71439E3_OFFSET UNITYSDK_OFFSET(0x13B73D60)
#define CLASS_1_D668B684F0C08C69_METHOD_1_436E91B5CA9835BA_OFFSET UNITYSDK_OFFSET(0x13B74B10)
#define CLASS_1_D668B684F0C08C69_METHOD_1_745DB05AECC2762C_OFFSET UNITYSDK_OFFSET(0x13B74BF0)
#define CLASS_1_D668B684F0C08C69_METHOD_1_E58793C6E8F0ABD9_OFFSET UNITYSDK_OFFSET(0x13B73E90)
#define CLASS_1_D668B684F0C08C69_METHOD_1_E6F971AFF07A371C_OFFSET UNITYSDK_OFFSET(0x13B75050)
#define CLASS_1_D668B684F0C08C69__CTOR_OFFSET UNITYSDK_OFFSET(0x13B73C00)

inline static constexpr unsigned int Class_1_D668B684F0C08C69_TypeDefinitionIndex = 63126;

class Class_1_D668B684F0C08C69 : public ::System::Object
{
public:
	::MoleMole::Cameras::TopViewCameraConfig* Field_1_6; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_D668B684F0C08C69_Enum_3_33B16E3E02BB0BB4_8>* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_5; // 0x20
	::System::Boolean Field_1_7; // 0x2C
	::System::Boolean Field_1_0; // 0x2D

	::System::Void _ctor(::MoleMole::Cameras::TopViewCameraConfig* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E58793C6E8F0ABD9(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::TopViewCameraConfig*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::TopViewCameraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69_METHOD_1_E58793C6E8F0ABD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D1FC58E458E3B37(::MoleMole::Cameras::TopViewCameraConfig* a1, ::System::Boolean a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69_METHOD_1_0D1FC58E458E3B37_OFFSET))(this, a1, a2, a3, a4);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_145D634D6EA87E33(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69_METHOD_1_145D634D6EA87E33_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_29F480D0F71439E3(::MoleMole::Cameras::TopViewCameraConfig* a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69_METHOD_1_29F480D0F71439E3_OFFSET))(this, a1, a2);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_436E91B5CA9835BA(::System::Boolean a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69_METHOD_1_436E91B5CA9835BA_OFFSET))(a1, a2, a3);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_745DB05AECC2762C(::MoleMole::Cameras::TopViewCameraConfig*& a1, ::System::Boolean a2)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69_METHOD_1_745DB05AECC2762C_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_E6F971AFF07A371C(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69_METHOD_1_E6F971AFF07A371C_OFFSET))(this, a1);
	}
};
