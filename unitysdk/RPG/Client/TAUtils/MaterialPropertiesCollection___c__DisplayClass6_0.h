#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TAUtils { class MaterialPropertiesCollection_Property; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19756590)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION___C__DISPLAYCLASS6_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x19759230)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection___c__DisplayClass6_0_TypeDefinitionIndex = 70223;

	class MaterialPropertiesCollection___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Int32 propertyID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::RPG::Client::TAUtils::MaterialPropertiesCollection_Property* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION___C__DISPLAYCLASS6_0__REMOVE_B__0_OFFSET))(this, a1);
		}
	};
}
