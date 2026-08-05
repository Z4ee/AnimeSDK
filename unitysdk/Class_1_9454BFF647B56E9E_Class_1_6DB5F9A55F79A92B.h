#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9454BFF647B56E9E_CLASS_1_6DB5F9A55F79A92B_METHOD_1_68D3C9BCD843A33F_OFFSET UNITYSDK_OFFSET(0x125276A0)
#define CLASS_1_9454BFF647B56E9E_CLASS_1_6DB5F9A55F79A92B__CTOR_OFFSET UNITYSDK_OFFSET(0x12527690)

inline static constexpr unsigned int Class_1_9454BFF647B56E9E_Class_1_6DB5F9A55F79A92B_TypeDefinitionIndex = 50046;

class Class_1_9454BFF647B56E9E_Class_1_6DB5F9A55F79A92B : public ::System::Object
{
public:
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Field_1_0; // 0x10
	::System::Single Field_1_6; // 0x18
	::UnityEngine::LayerMask Field_1_1; // 0x1C
	::System::Single Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_CLASS_1_6DB5F9A55F79A92B__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_68D3C9BCD843A33F()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_CLASS_1_6DB5F9A55F79A92B_METHOD_1_68D3C9BCD843A33F_OFFSET))(this);
	}
};
