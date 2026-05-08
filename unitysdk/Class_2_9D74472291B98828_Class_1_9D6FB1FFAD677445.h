#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9D74472291B98828_CLASS_1_9D6FB1FFAD677445_METHOD_1_0F1D69153CC859E4_OFFSET UNITYSDK_OFFSET(0x1050C610)
#define CLASS_2_9D74472291B98828_CLASS_1_9D6FB1FFAD677445_METHOD_1_68D3C9BCD843A33F_OFFSET UNITYSDK_OFFSET(0x1050C910)
#define CLASS_2_9D74472291B98828_CLASS_1_9D6FB1FFAD677445__CTOR_OFFSET UNITYSDK_OFFSET(0x1050ABA0)

inline static constexpr unsigned int Class_2_9D74472291B98828_Class_1_9D6FB1FFAD677445_TypeDefinitionIndex = 68978;

class Class_2_9D74472291B98828_Class_1_9D6FB1FFAD677445 : public ::System::Object
{
public:
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Field_1_0; // 0x10
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_2; // 0x18
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Field_1_4; // 0x20
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_1; // 0x28
	::System::Single Field_1_5; // 0x30
	::System::Single Field_1_6; // 0x34
	::UnityEngine::LayerMask Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_CLASS_1_9D6FB1FFAD677445__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_0F1D69153CC859E4(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_CLASS_1_9D6FB1FFAD677445_METHOD_1_0F1D69153CC859E4_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_68D3C9BCD843A33F()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_CLASS_1_9D6FB1FFAD677445_METHOD_1_68D3C9BCD843A33F_OFFSET))(this);
	}
};
