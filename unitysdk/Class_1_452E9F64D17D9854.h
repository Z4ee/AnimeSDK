#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_452E9F64D17D9854_Enum_3_33B16E3E02BB0BB4_3.h"
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

#define CLASS_1_452E9F64D17D9854_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13512F10)
#define CLASS_1_452E9F64D17D9854_METHOD_1_29F480D0F71439E3_OFFSET UNITYSDK_OFFSET(0x13512E80)
#define CLASS_1_452E9F64D17D9854_METHOD_1_436E91B5CA9835BA_OFFSET UNITYSDK_OFFSET(0x13513F90)
#define CLASS_1_452E9F64D17D9854_METHOD_1_745DB05AECC2762C_OFFSET UNITYSDK_OFFSET(0x13514070)
#define CLASS_1_452E9F64D17D9854_METHOD_1_78C246272EC0D5F2_OFFSET UNITYSDK_OFFSET(0x135139B0)
#define CLASS_1_452E9F64D17D9854_METHOD_1_E58793C6E8F0ABD9_OFFSET UNITYSDK_OFFSET(0x13513E40)
#define CLASS_1_452E9F64D17D9854_METHOD_1_E6F971AFF07A371C_OFFSET UNITYSDK_OFFSET(0x13512FB0)
#define CLASS_1_452E9F64D17D9854_METHOD_1_EDB6E80F47E2B12A_OFFSET UNITYSDK_OFFSET(0x13513220)
#define CLASS_1_452E9F64D17D9854__CTOR_OFFSET UNITYSDK_OFFSET(0x13512D20)

inline static constexpr unsigned int Class_1_452E9F64D17D9854_TypeDefinitionIndex = 61000;

class Class_1_452E9F64D17D9854 : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_452E9F64D17D9854_Enum_3_33B16E3E02BB0BB4_3>* Field_1_0; // 0x10
	::MoleMole::Cameras::TopViewCameraConfig* Field_1_3; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x21
	::UnityEngine::Vector3 Field_1_4; // 0x24

	::System::Void _ctor(::MoleMole::Cameras::TopViewCameraConfig* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_E6F971AFF07A371C(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854_METHOD_1_E6F971AFF07A371C_OFFSET))(this, a1);
	}

	::System::Void Method_1_78C246272EC0D5F2(::MoleMole::Cameras::TopViewCameraConfig* a1, ::System::Boolean a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854_METHOD_1_78C246272EC0D5F2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E58793C6E8F0ABD9(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::TopViewCameraConfig*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::TopViewCameraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854_METHOD_1_E58793C6E8F0ABD9_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_EDB6E80F47E2B12A(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854_METHOD_1_EDB6E80F47E2B12A_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_29F480D0F71439E3(::MoleMole::Cameras::TopViewCameraConfig* a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854_METHOD_1_29F480D0F71439E3_OFFSET))(this, a1, a2);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_436E91B5CA9835BA(::System::Boolean a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854_METHOD_1_436E91B5CA9835BA_OFFSET))(a1, a2, a3);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_745DB05AECC2762C(::MoleMole::Cameras::TopViewCameraConfig*& a1, ::System::Boolean a2)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854_METHOD_1_745DB05AECC2762C_OFFSET))(this, a1, a2);
	}
};
