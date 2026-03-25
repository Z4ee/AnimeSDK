#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PolymerDatabasePropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_MATERIALPROPERTYELEMENT_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9FF3DA0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_MATERIALPROPERTYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF3ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerPropertyLinkMaterial_MaterialPropertyElement_TypeDefinitionIndex = 57545;

	class PolymerPropertyLinkMaterial_MaterialPropertyElement : public ::System::Object
	{
	public:
		::System::Int32 databaseSlotID; // 0x10
		::System::String* propertyName; // 0x18
		::RPG::Client::PolymerDatabasePropertyType propertyType; // 0x20
		::System::Int32 targetUniqueID; // 0x24
		::System::Int32 propertyShaderNameID; // 0x28

		::System::Void _ctor(::RPG::Client::PolymerDatabasePropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PolymerDatabasePropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_MATERIALPROPERTYELEMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_MATERIALPROPERTYELEMENT_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
