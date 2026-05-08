#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B8A5AC0)
#define PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B8A5C00)
#define PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B8A5B70)
#define PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B8A5C80)
#define PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B8A5BD0)
#define PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B8A5B80)
#define PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8A5AB0)
#define PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A5A90)

namespace PipelineCamera
{
	inline static constexpr unsigned int Extension___GetEllipseDirections_g__GenerateList_8_1_d_TypeDefinitionIndex = 35968;

	class Extension___GetEllipseDirections_g__GenerateList_8_1_d : public ::System::Object
	{
	public:
		::System::Int32 __l__initialThreadId; // 0x10
		::System::Int32 __3__segment; // 0x14
		::System::Single _current_5__3; // 0x18
		::System::Int32 segment; // 0x1C
		::System::Int32 __1__state; // 0x20
		::UnityEngine::Vector2 __2__current; // 0x24
		::System::Int32 _i_5__4; // 0x2C
		::System::Single _step_5__2; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::Vector2 System_Collections_Generic_IEnumerator_UnityEngine_Vector2__get_Current()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2>* System_Collections_Generic_IEnumerable_UnityEngine_Vector2__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_D_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
