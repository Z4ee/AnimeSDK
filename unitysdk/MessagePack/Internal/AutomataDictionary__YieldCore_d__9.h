#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class AutomataDictionary_AutomataNode; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D34AE60)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_INT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D34B6A0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_INT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D34B5F0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D34B720)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D34B650)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D34B600)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D34AA70)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34AA50)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1D34AD80)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1D34ACA0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AutomataDictionary__YieldCore_d__9_TypeDefinitionIndex = 29679;

	class AutomataDictionary__YieldCore_d__9 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* nexts; // 0x10
		::MessagePack::Internal::AutomataDictionary_AutomataNode* _item_5__3; // 0x18
		::System::Collections::Generic::IEnumerable_1<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* __3__nexts; // 0x20
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* __7__wrap3; // 0x28
		::System::Collections::Generic::IEnumerator_1<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* __7__wrap1; // 0x30
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> __2__current; // 0x38
		::System::Int32 __l__initialThreadId; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9___M__FINALLY2_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Int32___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_INT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Int32___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_INT32___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY__YIELDCORE_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
