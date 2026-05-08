#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_F3CC150E5334846F;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F3CC150E5334846F_CLASS_1_78531886E1B6A72D_METHOD_1_68D3C9BCD843A33F_OFFSET UNITYSDK_OFFSET(0x11F3DF40)
#define CLASS_1_F3CC150E5334846F_CLASS_1_78531886E1B6A72D_METHOD_1_B61E8FF919DD9EAB_OFFSET UNITYSDK_OFFSET(0x11F3E0C0)
#define CLASS_1_F3CC150E5334846F_CLASS_1_78531886E1B6A72D__CTOR_OFFSET UNITYSDK_OFFSET(0x11F3DF30)

inline static constexpr unsigned int Class_1_F3CC150E5334846F_Class_1_78531886E1B6A72D_TypeDefinitionIndex = 53741;

class Class_1_F3CC150E5334846F_Class_1_78531886E1B6A72D : public ::System::Object
{
public:
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Field_1_2; // 0x10
	::Class_1_F3CC150E5334846F* Field_1_0; // 0x18
	::System::Single Field_1_3; // 0x20
	::UnityEngine::LayerMask Field_1_1; // 0x24
	::System::Single Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_CLASS_1_78531886E1B6A72D__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_68D3C9BCD843A33F()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_CLASS_1_78531886E1B6A72D_METHOD_1_68D3C9BCD843A33F_OFFSET))(this);
	}

	::System::Void Method_1_B61E8FF919DD9EAB(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_CLASS_1_78531886E1B6A72D_METHOD_1_B61E8FF919DD9EAB_OFFSET))(this, a1);
	}
};
