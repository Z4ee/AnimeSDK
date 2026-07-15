#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class TextInfo; }

#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AD3CB00)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1AD3CA40)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AD3C960)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3C860)

namespace System::Collections
{
	inline static constexpr unsigned int CaseInsensitiveHashCodeProvider_TypeDefinitionIndex = 1459;

	class CaseInsensitiveHashCodeProvider : public ::System::Object
	{
	public:
		::System::Globalization::TextInfo* m_text; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Collections::CaseInsensitiveHashCodeProvider* get_Default()
		{
			return ((::System::Collections::CaseInsensitiveHashCodeProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GET_DEFAULT_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
