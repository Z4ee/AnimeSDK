#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Variable; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D805D30)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NODECANVAS_FRAMEWORK_VARIABLE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D806460)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NODECANVAS_FRAMEWORK_VARIABLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D8063F0)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8064E0)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D806450)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D806400)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D805B20)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x1D805B00)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1D805C40)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1D805D20)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int IBlackboardExtensions__GetVariables_d__14_TypeDefinitionIndex = 29466;

	class IBlackboardExtensions__GetVariables_d__14 : public ::System::Object
	{
	public:
		::System::Type* __3__ofType; // 0x10
		::System::Collections::Generic::IEnumerator_1<::NodeCanvas::Framework::Variable*>* __7__wrap1; // 0x18
		::NodeCanvas::Framework::IBlackboard* __3__blackboard; // 0x20
		::NodeCanvas::Framework::Variable* __2__current; // 0x28
		::System::Type* ofType; // 0x30
		::NodeCanvas::Framework::IBlackboard* blackboard; // 0x38
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::NodeCanvas::Framework::Variable*> __7__wrap2; // 0x40
		::System::Int32 __1__state; // 0x68
		::System::Int32 __l__initialThreadId; // 0x6C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14___M__FINALLY2_OFFSET))(this);
		}

		::NodeCanvas::Framework::Variable* System_Collections_Generic_IEnumerator_NodeCanvas_Framework_Variable__get_Current()
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NODECANVAS_FRAMEWORK_VARIABLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NodeCanvas::Framework::Variable*>* System_Collections_Generic_IEnumerable_NodeCanvas_Framework_Variable__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NodeCanvas::Framework::Variable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NODECANVAS_FRAMEWORK_VARIABLE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS__GETVARIABLES_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
