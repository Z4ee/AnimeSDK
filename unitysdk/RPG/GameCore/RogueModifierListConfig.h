#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueModifierConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERLISTCONFIG_METHOD_2_482B4F01EAE68455_OFFSET UNITYSDK_OFFSET(0x19B5E6A0)
#define RPG_GAMECORE_ROGUEMODIFIERLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B5E730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierListConfig_TypeDefinitionIndex = 17042;

	class RogueModifierListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueModifierConfig*>* ModifierList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_482B4F01EAE68455(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLISTCONFIG_METHOD_2_482B4F01EAE68455_OFFSET))(a1, a2);
		}
	};
}
