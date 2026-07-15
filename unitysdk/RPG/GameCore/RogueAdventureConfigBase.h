#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTURECONFIGBASE_METHOD_2_18AAF0612A135261_OFFSET UNITYSDK_OFFSET(0x1C4A0320)
#define RPG_GAMECORE_ROGUEADVENTURECONFIGBASE_METHOD_2_7149A8EC2AB64A88_OFFSET UNITYSDK_OFFSET(0x1C4A0110)
#define RPG_GAMECORE_ROGUEADVENTURECONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A0100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureConfigBase_TypeDefinitionIndex = 17163;

	class RogueAdventureConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7149A8EC2AB64A88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECONFIGBASE_METHOD_2_7149A8EC2AB64A88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_18AAF0612A135261(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECONFIGBASE_METHOD_2_18AAF0612A135261_OFFSET))(a1, a2);
		}
	};
}
