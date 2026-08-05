#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D67BB30)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1D67BA80)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D67BA00)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D67B9C0)

namespace System::Collections
{
	inline static constexpr unsigned int CaseInsensitiveComparer_TypeDefinitionIndex = 1452;

	class CaseInsensitiveComparer : public ::System::Object
	{
	public:
		::System::Globalization::CompareInfo* m_compareInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER__CTOR_1_OFFSET))(this, culture);
		}

		static ::System::Collections::CaseInsensitiveComparer* get_Default()
		{
			return ((::System::Collections::CaseInsensitiveComparer*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_GET_DEFAULT_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_COMPARE_OFFSET))(this, a, b);
		}
	};
}
