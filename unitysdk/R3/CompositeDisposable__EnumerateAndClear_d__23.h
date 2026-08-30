#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BF17030)
#define R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IDISPOSABLE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BF171B0)
#define R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IDISPOSABLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BF17140)
#define R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BF17230)
#define R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BF171A0)
#define R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BF17150)
#define R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF16F30)
#define R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF16F10)
#define R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1BF16F70)

namespace R3
{
	inline static constexpr unsigned int CompositeDisposable__EnumerateAndClear_d__23_TypeDefinitionIndex = 35227;

	class CompositeDisposable__EnumerateAndClear_d__23 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::IDisposable*>* disposables; // 0x10
		::Il2CppArray<::System::IDisposable*>* __3__disposables; // 0x18
		::Il2CppArray<::System::IDisposable*>* __7__wrap1; // 0x20
		::System::IDisposable* __2__current; // 0x28
		::System::Int32 __7__wrap2; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23___M__FINALLY1_OFFSET))(this);
		}

		::System::IDisposable* System_Collections_Generic_IEnumerator_System_IDisposable__get_Current()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IDISPOSABLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::IDisposable*>* System_Collections_Generic_IEnumerable_System_IDisposable__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::IDisposable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IDISPOSABLE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE__ENUMERATEANDCLEAR_D__23_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
