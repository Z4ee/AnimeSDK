#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTPropertyAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_CGRESOURCEMANAGERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0210C0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CGResourceManagerAttribute_TypeDefinitionIndex = 38977;

	class CGResourceManagerAttribute : public ::FluffyUnderware::DevTools::DTPropertyAttribute
	{
	public:
		::System::String* ResourceName; // 0x30
		::System::Boolean ReadOnly; // 0x38

		::System::Void _ctor(::System::String* resourceName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CGRESOURCEMANAGERATTRIBUTE__CTOR_OFFSET))(this, resourceName);
		}
	};
}
