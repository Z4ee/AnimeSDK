#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class MemberInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C3F7340)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_MEMBERINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C3F7580)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_MEMBERINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C3F7510)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C3F7600)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C3F7570)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C3F7520)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3F7330)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F7310)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int TypeExtensions__GetAllFieldsAndProperties_d__55_TypeDefinitionIndex = 7495;

	class TypeExtensions__GetAllFieldsAndProperties_d__55 : public ::System::Object
	{
	public:
		::System::Type* __3__type; // 0x10
		::System::Type* _currentType_5__2; // 0x18
		::Il2CppArray<::System::Reflection::MemberInfo*>* __7__wrap3; // 0x20
		::System::Type* type; // 0x28
		::System::Reflection::MemberInfo* __2__current; // 0x30
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __7__wrap4; // 0x3C
		::System::Reflection::BindingFlags _flags_5__3; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_MOVENEXT_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* System_Collections_Generic_IEnumerator_System_Reflection_MemberInfo__get_Current()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_MEMBERINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_MemberInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_MEMBERINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLFIELDSANDPROPERTIES_D__55_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
