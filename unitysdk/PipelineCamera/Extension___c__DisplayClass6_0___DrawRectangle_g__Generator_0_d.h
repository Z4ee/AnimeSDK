#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace PipelineCamera { class Extension___c__DisplayClass6_0; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E915D50)
#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E915E70)
#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E915DE0)
#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E915EF0)
#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E915E40)
#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E915DF0)
#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E915D40)
#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E915D20)

namespace PipelineCamera
{
	inline static constexpr unsigned int Extension___c__DisplayClass6_0___DrawRectangle_g__Generator_0_d_TypeDefinitionIndex = 38231;

	class Extension___c__DisplayClass6_0___DrawRectangle_g__Generator_0_d : public ::System::Object
	{
	public:
		::PipelineCamera::Extension___c__DisplayClass6_0* __4__this; // 0x10
		::System::Int32 __3__startIndex; // 0x18
		::System::Int32 startIndex; // 0x1C
		::UnityEngine::Vector2 __2__current; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::Vector2 System_Collections_Generic_IEnumerator_UnityEngine_Vector2__get_Current()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2>* System_Collections_Generic_IEnumerable_UnityEngine_Vector2__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0___DRAWRECTANGLE_G__GENERATOR_0_D_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
