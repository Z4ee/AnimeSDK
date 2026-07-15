#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SMELLPROPCONFIG_METHOD_2_FB7ED5B86124F5DB_OFFSET UNITYSDK_OFFSET(0x1BE52D60)
#define RPG_GAMECORE_SMELLPROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE52EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SmellPropConfig_TypeDefinitionIndex = 19728;

	class SmellPropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x18
		::RPG::GameCore::DynamicString* PropKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SMELLPROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FB7ED5B86124F5DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SmellPropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SmellPropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SMELLPROPCONFIG_METHOD_2_FB7ED5B86124F5DB_OFFSET))(a1, a2);
		}
	};
}
