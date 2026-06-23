#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D394130)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NODECANVAS_FRAMEWORK_IBLACKBOARD__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D394380)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NODECANVAS_FRAMEWORK_IBLACKBOARD__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D394310)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D394400)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D394370)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D394320)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D394120)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D394100)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int IBlackboardExtensions__GetAllParents_d__1_TypeDefinitionIndex = 29467;

	class IBlackboardExtensions__GetAllParents_d__1 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::IBlackboard* _current_5__2; // 0x10
		::NodeCanvas::Framework::IBlackboard* blackboard; // 0x18
		::NodeCanvas::Framework::IBlackboard* __3__blackboard; // 0x20
		::NodeCanvas::Framework::IBlackboard* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34
		::System::Boolean includeSelf; // 0x38
		::System::Boolean __3__includeSelf; // 0x39

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_MOVENEXT_OFFSET))(this);
		}

		::NodeCanvas::Framework::IBlackboard* System_Collections_Generic_IEnumerator_NodeCanvas_Framework_IBlackboard__get_Current()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NODECANVAS_FRAMEWORK_IBLACKBOARD__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NodeCanvas::Framework::IBlackboard*>* System_Collections_Generic_IEnumerable_NodeCanvas_Framework_IBlackboard__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NodeCanvas::Framework::IBlackboard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NODECANVAS_FRAMEWORK_IBLACKBOARD__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETALLPARENTS_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
