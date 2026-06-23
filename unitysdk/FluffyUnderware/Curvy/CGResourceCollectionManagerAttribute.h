#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CGResourceManagerAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_CGRESOURCECOLLECTIONMANAGERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E656360)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CGResourceCollectionManagerAttribute_TypeDefinitionIndex = 39039;

	class CGResourceCollectionManagerAttribute : public ::FluffyUnderware::Curvy::CGResourceManagerAttribute
	{
	public:
		::System::Boolean ShowCount; // 0x40

		::System::Void _ctor(::System::String* resourceName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CGRESOURCECOLLECTIONMANAGERATTRIBUTE__CTOR_OFFSET))(this, resourceName);
		}
	};
}
