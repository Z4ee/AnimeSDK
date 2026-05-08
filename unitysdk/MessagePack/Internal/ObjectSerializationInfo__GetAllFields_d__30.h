#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class FieldInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A8F97F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_FIELDINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A8F9D30)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_FIELDINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A8F9CC0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A8F9DB0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A8F9D20)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A8F9CD0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8F9620)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F9600)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1A8F9710)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo__GetAllFields_d__30_TypeDefinitionIndex = 27837;

	class ObjectSerializationInfo__GetAllFields_d__30 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Reflection::FieldInfo*>* __7__wrap1; // 0x10
		::System::Type* __3__type; // 0x18
		::System::Type* type; // 0x20
		::System::Reflection::FieldInfo* __2__current; // 0x28
		::Il2CppArray<::System::Reflection::FieldInfo*>* __7__wrap2; // 0x30
		::System::Int32 __7__wrap3; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Int32 __l__initialThreadId; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30___M__FINALLY1_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* System_Collections_Generic_IEnumerator_System_Reflection_FieldInfo__get_Current()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_FIELDINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Reflection::FieldInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_FieldInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_FIELDINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLFIELDS_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
