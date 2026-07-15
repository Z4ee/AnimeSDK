#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG_METHOD_3_AF47C450BFE86B38_OFFSET UNITYSDK_OFFSET(0x1CFBFA10)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG_METHOD_3_B11A6D91EF7F92FC_OFFSET UNITYSDK_OFFSET(0x1CFBF9C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBFA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterCoinNumChangeConfig_TypeDefinitionIndex = 17254;

	class RogueModifierExecuteActionAfterCoinNumChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B11A6D91EF7F92FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterCoinNumChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterCoinNumChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG_METHOD_3_B11A6D91EF7F92FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF47C450BFE86B38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterCoinNumChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterCoinNumChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG_METHOD_3_AF47C450BFE86B38_OFFSET))(a1, a2);
		}
	};
}
