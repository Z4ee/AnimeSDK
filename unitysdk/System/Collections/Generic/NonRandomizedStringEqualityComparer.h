#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

namespace System { class String; }

#define SYSTEM_COLLECTIONS_GENERIC_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x177F3E60)
#define SYSTEM_COLLECTIONS_GENERIC_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177F3E90)
#define SYSTEM_COLLECTIONS_GENERIC_NONRANDOMIZEDSTRINGEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x177F3F20)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int NonRandomizedStringEqualityComparer_TypeDefinitionIndex = 1533;

	class NonRandomizedStringEqualityComparer : public ::System::Collections::Generic::EqualityComparer_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_NONRANDOMIZEDSTRINGEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::String* x, ::System::String* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::String* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
