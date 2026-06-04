#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_COLLECTIONS_GENERIC_COMPARERHELPERS_CREATEDEFAULTCOMPARER_OFFSET UNITYSDK_OFFSET(0x185AE160)
#define SYSTEM_COLLECTIONS_GENERIC_COMPARERHELPERS_CREATEDEFAULTEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x185ADC80)
#define SYSTEM_COLLECTIONS_GENERIC_COMPARERHELPERS_HASICOMPARABLE_OFFSET UNITYSDK_OFFSET(0x185AE030)
#define SYSTEM_COLLECTIONS_GENERIC_COMPARERHELPERS_HASIEQUATABLE_OFFSET UNITYSDK_OFFSET(0x185ADB60)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ComparerHelpers_TypeDefinitionIndex = 1760;

	class ComparerHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean HasIEquatable(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARERHELPERS_HASIEQUATABLE_OFFSET))(a1);
		}

		static ::System::Object* CreateDefaultEqualityComparer(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARERHELPERS_CREATEDEFAULTEQUALITYCOMPARER_OFFSET))(a1);
		}

		static ::System::Boolean HasIComparable(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARERHELPERS_HASICOMPARABLE_OFFSET))(a1);
		}

		static ::System::Object* CreateDefaultComparer(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARERHELPERS_CREATEDEFAULTCOMPARER_OFFSET))(a1);
		}
	};
}
