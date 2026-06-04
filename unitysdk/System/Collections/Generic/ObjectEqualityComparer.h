#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x185AE960)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x185AE930)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x185AE9A0)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x185AE920)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ObjectEqualityComparer_TypeDefinitionIndex = 1532;

	class ObjectEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::ObjectEqualityComparer** StaticGet_Default()
		{
			return (::System::Collections::Generic::ObjectEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(ObjectEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x4080);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 System_Collections_IEqualityComparer_GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::Boolean System_Collections_IEqualityComparer_Equals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}
	};
}
