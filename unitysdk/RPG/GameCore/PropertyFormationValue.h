#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROPERTYFORMATIONVALUE_METHOD_2_C5134D4F75D7D61B_OFFSET UNITYSDK_OFFSET(0x1D376740)
#define RPG_GAMECORE_PROPERTYFORMATIONVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D376880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropertyFormationValue_TypeDefinitionIndex = 15354;

	class PropertyFormationValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ValueName; // 0x10
		::RPG::GameCore::AbilityProperty Property; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPERTYFORMATIONVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C5134D4F75D7D61B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropertyFormationValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropertyFormationValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPERTYFORMATIONVALUE_METHOD_2_C5134D4F75D7D61B_OFFSET))(a1, a2);
		}
	};
}
