#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define R3_COMPOSITEDISPOSABLE_ADD_OFFSET UNITYSDK_OFFSET(0x1BF15580)
#define R3_COMPOSITEDISPOSABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BF15C30)
#define R3_COMPOSITEDISPOSABLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1BF162C0)
#define R3_COMPOSITEDISPOSABLE_COPYTO_OFFSET UNITYSDK_OFFSET(0x1BF163D0)
#define R3_COMPOSITEDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF166F0)
#define R3_COMPOSITEDISPOSABLE_ENUMERATEANDCLEAR_OFFSET UNITYSDK_OFFSET(0x1BF16C90)
#define R3_COMPOSITEDISPOSABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BF16A70)
#define R3_COMPOSITEDISPOSABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BF154C0)
#define R3_COMPOSITEDISPOSABLE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1BF15570)
#define R3_COMPOSITEDISPOSABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1BF15810)
#define R3_COMPOSITEDISPOSABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BF16CF0)
#define R3_COMPOSITEDISPOSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF15460)

namespace R3
{
	inline static constexpr unsigned int CompositeDisposable_TypeDefinitionIndex = 35226;

	class CompositeDisposable : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::IDisposable*>* list; // 0x10
		::System::Object* gate; // 0x18
		::System::Int32 count; // 0x20
		::System::Boolean isDisposed; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add(::System::IDisposable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_ADD_OFFSET))(this, a1);
		}

		::System::Boolean Remove(::System::IDisposable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_REMOVE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::IDisposable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::System::IDisposable*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::IDisposable*>*, ::System::Int32))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::IDisposable*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::IDisposable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>* EnumerateAndClear(::Il2CppArray<::System::IDisposable*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>*(*)(::Il2CppArray<::System::IDisposable*>*))((::PBYTE)hIl2Cpp + R3_COMPOSITEDISPOSABLE_ENUMERATEANDCLEAR_OFFSET))(a1);
		}
	};
}
