#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera { class CameraDebugDrawItems3D___c__DisplayClass10_0; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B118590)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR3__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B118D20)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR3__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B118C80)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B118DA0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B118CF0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B118CA0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1183C0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1183A0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1B1184B0)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawItems3D___c__DisplayClass10_0___DrawCircle_g__GetEnumerable_0_d_TypeDefinitionIndex = 36018;

	class CameraDebugDrawItems3D___c__DisplayClass10_0___DrawCircle_g__GetEnumerable_0_d : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* __7__wrap2; // 0x10
		::PipelineCamera::CameraDebugDrawItems3D___c__DisplayClass10_0* __4__this; // 0x18
		::System::Nullable_1<::UnityEngine::Vector3> _first_5__2; // 0x20
		::UnityEngine::Vector3 __2__current; // 0x30
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D___M__FINALLY1_OFFSET))(this);
		}

		::UnityEngine::Vector3 System_Collections_Generic_IEnumerator_UnityEngine_Vector3__get_Current()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR3__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3>* System_Collections_Generic_IEnumerable_UnityEngine_Vector3__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR3__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0___DRAWCIRCLE_G__GETENUMERABLE_0_D_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
