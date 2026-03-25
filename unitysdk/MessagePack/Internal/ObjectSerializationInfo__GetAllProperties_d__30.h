#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class PropertyInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15D60270)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_PROPERTYINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15D60770)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_PROPERTYINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15D60700)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15D607F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15D60760)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15D60710)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D60100)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x15D5F110)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15D601C0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo__GetAllProperties_d__30_TypeDefinitionIndex = 9195;

	class ObjectSerializationInfo__GetAllProperties_d__30 : public ::System::Object
	{
	public:
		::System::Type* __3__type; // 0x10
		::System::Reflection::PropertyInfo* __2__current; // 0x18
		::System::Type* type; // 0x20
		::Il2CppArray<::System::Reflection::PropertyInfo*>* __7__wrap2; // 0x28
		::System::Collections::Generic::IEnumerator_1<::System::Reflection::PropertyInfo*>* __7__wrap1; // 0x30
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Int32 __7__wrap3; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30___M__FINALLY1_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* System_Collections_Generic_IEnumerator_System_Reflection_PropertyInfo__get_Current()
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_PROPERTYINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Reflection::PropertyInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_PropertyInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Reflection::PropertyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_PROPERTYINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__GETALLPROPERTIES_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
