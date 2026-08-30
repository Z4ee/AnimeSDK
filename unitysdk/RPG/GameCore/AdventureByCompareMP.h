#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_1EC71A85B2ED8224_OFFSET UNITYSDK_OFFSET(0x1CBA9AD0)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_6EA6B6C15F4E0719_OFFSET UNITYSDK_OFFSET(0x1CBA9B10)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_9467148752ADC156_OFFSET UNITYSDK_OFFSET(0x1CBA9D10)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_9A0B8922AC6851B9_OFFSET UNITYSDK_OFFSET(0x1CBA9CE0)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA9B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCompareMP_TypeDefinitionIndex = 24005;

	class AdventureByCompareMP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Single CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1EC71A85B2ED8224(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareMP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_1EC71A85B2ED8224_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6EA6B6C15F4E0719(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_6EA6B6C15F4E0719_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A0B8922AC6851B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_9A0B8922AC6851B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9467148752ADC156(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_9467148752ADC156_OFFSET))(a1, a2);
		}
	};
}
