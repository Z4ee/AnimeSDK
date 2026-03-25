#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class TextInfo; }

#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x161C5890)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x161C5770)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161C56F0)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x161C5650)

namespace System::Collections
{
	inline static constexpr unsigned int CaseInsensitiveHashCodeProvider_TypeDefinitionIndex = 1455;

	class CaseInsensitiveHashCodeProvider : public ::System::Object
	{
	public:
		::System::Globalization::TextInfo* m_text; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER__CTOR_1_OFFSET))(this, culture);
		}

		static ::System::Collections::CaseInsensitiveHashCodeProvider* get_Default()
		{
			return ((::System::Collections::CaseInsensitiveHashCodeProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GET_DEFAULT_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
