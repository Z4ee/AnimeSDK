#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class AutomataDictionary_AutomataNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D7BE030)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D7BE130)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7BE0C0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D7BE1B0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7BE120)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D7BE0D0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7BE020)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BE000)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AutomataDictionary_AutomataNode__YieldChildren_d__14_TypeDefinitionIndex = 29676;

	class AutomataDictionary_AutomataNode__YieldChildren_d__14 : public ::System::Object
	{
	public:
		::MessagePack::Internal::AutomataDictionary_AutomataNode* __2__current; // 0x10
		::MessagePack::Internal::AutomataDictionary_AutomataNode* __4__this; // 0x18
		::System::Int32 _i_5__2; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Int32 __l__initialThreadId; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_MOVENEXT_OFFSET))(this);
		}

		::MessagePack::Internal::AutomataDictionary_AutomataNode* System_Collections_Generic_IEnumerator_MessagePack_Internal_AutomataDictionary_AutomataNode__get_Current()
		{
			return ((::MessagePack::Internal::AutomataDictionary_AutomataNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* System_Collections_Generic_IEnumerable_MessagePack_Internal_AutomataDictionary_AutomataNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MessagePack::Internal::AutomataDictionary_AutomataNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__YIELDCHILDREN_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
