#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE63170)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE63140)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE631B0)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE63130)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ObjectEqualityComparer_TypeDefinitionIndex = 1529;

	class ObjectEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::ObjectEqualityComparer** StaticGet_Default()
		{
			return (::System::Collections::Generic::ObjectEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(ObjectEqualityComparer_TypeDefinitionIndex)->GetStaticField(0xE70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}

		::System::Boolean System_Collections_IEqualityComparer_Equals(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}
	};
}
