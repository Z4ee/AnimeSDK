#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_36BB65AB28C47D14;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define CLASS_1_36BB65AB28C47D14_CLASS_1_CAA78E7065A4C1C0_METHOD_1_50809841FF283F5F_OFFSET UNITYSDK_OFFSET(0x15592D40)
#define CLASS_1_36BB65AB28C47D14_CLASS_1_CAA78E7065A4C1C0_METHOD_1_68D3C9BCD843A33F_OFFSET UNITYSDK_OFFSET(0x15592B60)
#define CLASS_1_36BB65AB28C47D14_CLASS_1_CAA78E7065A4C1C0_METHOD_1_932E3529F419462C_OFFSET UNITYSDK_OFFSET(0x15592CE0)
#define CLASS_1_36BB65AB28C47D14_CLASS_1_CAA78E7065A4C1C0__CTOR_OFFSET UNITYSDK_OFFSET(0x15592B50)

inline static constexpr unsigned int Class_1_36BB65AB28C47D14_Class_1_CAA78E7065A4C1C0_TypeDefinitionIndex = 64528;

class Class_1_36BB65AB28C47D14_Class_1_CAA78E7065A4C1C0 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_7; // 0x10
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Field_1_1; // 0x18
	::Class_1_36BB65AB28C47D14* Field_1_10; // 0x20
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Field_1_5; // 0x28
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_0; // 0x30
	::System::Single Field_1_11; // 0x38
	::UnityEngine::LayerMask Field_1_6; // 0x3C
	::System::Single Field_1_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_CAA78E7065A4C1C0__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_68D3C9BCD843A33F()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_CAA78E7065A4C1C0_METHOD_1_68D3C9BCD843A33F_OFFSET))(this);
	}

	::System::Void Method_1_932E3529F419462C(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_CAA78E7065A4C1C0_METHOD_1_932E3529F419462C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_50809841FF283F5F(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_CAA78E7065A4C1C0_METHOD_1_50809841FF283F5F_OFFSET))(this, a1);
	}
};
