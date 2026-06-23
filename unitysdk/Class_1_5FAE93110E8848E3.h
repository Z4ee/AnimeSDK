#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FAE93110E8848E3_Enum_3_33B16E3E02BB0BB4.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_5FAE93110E8848E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12DC7850)
#define CLASS_1_5FAE93110E8848E3_METHOD_1_436E91B5CA9835BA_OFFSET UNITYSDK_OFFSET(0x12DC78F0)
#define CLASS_1_5FAE93110E8848E3_METHOD_1_4C513551633BABF7_OFFSET UNITYSDK_OFFSET(0x12DC77C0)
#define CLASS_1_5FAE93110E8848E3_METHOD_1_73447A9EE7C12559_OFFSET UNITYSDK_OFFSET(0x12DC7EB0)
#define CLASS_1_5FAE93110E8848E3_METHOD_1_A6AABC82C38617F8_OFFSET UNITYSDK_OFFSET(0x12DC80D0)
#define CLASS_1_5FAE93110E8848E3_METHOD_1_C668CA64A755C44E_OFFSET UNITYSDK_OFFSET(0x12DC7E60)
#define CLASS_1_5FAE93110E8848E3_METHOD_1_F6C45460809E2F96_OFFSET UNITYSDK_OFFSET(0x12DC79D0)
#define CLASS_1_5FAE93110E8848E3__CTOR_OFFSET UNITYSDK_OFFSET(0x12DC7660)

inline static constexpr unsigned int Class_1_5FAE93110E8848E3_TypeDefinitionIndex = 40555;

class Class_1_5FAE93110E8848E3 : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_5FAE93110E8848E3_Enum_3_33B16E3E02BB0BB4>* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x19

	::System::Void _ctor(::MoleMole::Cameras::FixedCameraConfig* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_DISPOSE_OFFSET))(this);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_436E91B5CA9835BA(::System::Boolean a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_METHOD_1_436E91B5CA9835BA_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_F6C45460809E2F96(::MoleMole::Cameras::FixedCameraConfig* a1, ::System::Boolean a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_METHOD_1_F6C45460809E2F96_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_5FAE93110E8848E3* Method_1_C668CA64A755C44E(::System::Boolean a1)
	{
		return ((::Class_1_5FAE93110E8848E3*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_METHOD_1_C668CA64A755C44E_OFFSET))(this, a1);
	}

	::System::Void Method_1_73447A9EE7C12559(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::FixedCameraConfig*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::FixedCameraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_METHOD_1_73447A9EE7C12559_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_4C513551633BABF7(::MoleMole::Cameras::FixedCameraConfig* a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_METHOD_1_4C513551633BABF7_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_A6AABC82C38617F8(::MoleMole::Cameras::FixedCameraConfig*& a1, ::System::Boolean a2)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_METHOD_1_A6AABC82C38617F8_OFFSET))(this, a1, a2);
	}
};
