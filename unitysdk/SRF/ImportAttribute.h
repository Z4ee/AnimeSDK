#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SRF_IMPORTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18468770)
#define SRF_IMPORTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18468760)

namespace SRF
{
	inline static constexpr unsigned int ImportAttribute_TypeDefinitionIndex = 27650;

	class ImportAttribute : public ::System::Attribute
	{
	public:
		::System::Type* Service; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_IMPORTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* serviceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_IMPORTATTRIBUTE__CTOR_1_OFFSET))(this, serviceType);
		}
	};
}
