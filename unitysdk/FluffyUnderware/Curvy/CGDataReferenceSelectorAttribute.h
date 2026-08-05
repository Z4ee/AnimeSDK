#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTPropertyAttribute.h"

namespace System { class Type; }

#define FLUFFYUNDERWARE_CURVY_CGDATAREFERENCESELECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE58000)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CGDataReferenceSelectorAttribute_TypeDefinitionIndex = 39640;

	class CGDataReferenceSelectorAttribute : public ::FluffyUnderware::DevTools::DTPropertyAttribute
	{
	public:
		::System::Type* DataType; // 0x30

		::System::Void _ctor(::System::Type* dataType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CGDATAREFERENCESELECTORATTRIBUTE__CTOR_OFFSET))(this, dataType);
		}
	};
}
