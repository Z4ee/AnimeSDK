#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F3CC150E5334846F_Enum_3_C780BFBFED223F30_5.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_2193452B3479DA84.h"
#include "unitysdk/Struct_2_7D08D6F1491E6873.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace PipelineCamera::SubModule { class LerpToTargetInCore; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_F3CC150E5334846F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9975D0)
#define CLASS_1_F3CC150E5334846F_METHOD_1_0BA69C814197CD6B_OFFSET UNITYSDK_OFFSET(0xC998550)
#define CLASS_1_F3CC150E5334846F_METHOD_1_19F1BB11890A12EF_OFFSET UNITYSDK_OFFSET(0xC9974C0)
#define CLASS_1_F3CC150E5334846F_METHOD_1_1E164BDC86207046_OFFSET UNITYSDK_OFFSET(0xC998770)
#define CLASS_1_F3CC150E5334846F_METHOD_1_436E91B5CA9835BA_OFFSET UNITYSDK_OFFSET(0xC998FB0)
#define CLASS_1_F3CC150E5334846F_METHOD_1_7CBAE0C0459DC29C_OFFSET UNITYSDK_OFFSET(0xC997670)
#define CLASS_1_F3CC150E5334846F_METHOD_1_C33E19902632945C_OFFSET UNITYSDK_OFFSET(0xC998F60)
#define CLASS_1_F3CC150E5334846F_METHOD_1_E8CD6026B7EF9225_OFFSET UNITYSDK_OFFSET(0xC999090)
#define CLASS_1_F3CC150E5334846F_METHOD_1_F58584308D5E3B04_OFFSET UNITYSDK_OFFSET(0xC997C70)
#define CLASS_1_F3CC150E5334846F__CTOR_OFFSET UNITYSDK_OFFSET(0xC9972A0)

inline static constexpr unsigned int Class_1_F3CC150E5334846F_TypeDefinitionIndex = 76857;

class Class_1_F3CC150E5334846F : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_F3CC150E5334846F_Enum_3_C780BFBFED223F30_5>* Field_1_0; // 0x10
	::PipelineCamera::SubModule::LerpToTargetInCore* Field_1_1; // 0x18
	::PipelineCamera::TimeBasedAlphaGenerator* Field_1_2; // 0x20
	::Struct_2_2193452B3479DA84 Field_1_3; // 0x28
	::PipelineCamera::WorldBasicCameraData Field_1_4; // 0x120
	::System::Single Field_1_5; // 0x14C

	::System::Void _ctor(::Struct_2_7D08D6F1491E6873& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7D08D6F1491E6873&))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7CBAE0C0459DC29C(::Struct_2_7D08D6F1491E6873& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7D08D6F1491E6873&))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_METHOD_1_7CBAE0C0459DC29C_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_19F1BB11890A12EF(::Struct_2_7D08D6F1491E6873 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Struct_2_7D08D6F1491E6873))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_METHOD_1_19F1BB11890A12EF_OFFSET))(this, a1);
	}

	static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Method_1_0BA69C814197CD6B(::Struct_2_7D08D6F1491E6873& a1, ::Nap::NapECS::EcsWorld* a2)
	{
		return ((::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>*(*)(::Struct_2_7D08D6F1491E6873&, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_METHOD_1_0BA69C814197CD6B_OFFSET))(a1, a2);
	}

	::System::Void Method_1_1E164BDC86207046(::Struct_2_7D08D6F1491E6873& a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7D08D6F1491E6873&, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_METHOD_1_1E164BDC86207046_OFFSET))(this, a1, a2, a3);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_C33E19902632945C()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_METHOD_1_C33E19902632945C_OFFSET))(this);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_436E91B5CA9835BA(::System::Boolean a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_METHOD_1_436E91B5CA9835BA_OFFSET))(a1, a2, a3);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_F58584308D5E3B04(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_METHOD_1_F58584308D5E3B04_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_E8CD6026B7EF9225(::Struct_2_7D08D6F1491E6873& a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::Struct_2_7D08D6F1491E6873&))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_METHOD_1_E8CD6026B7EF9225_OFFSET))(this, a1);
	}
};
