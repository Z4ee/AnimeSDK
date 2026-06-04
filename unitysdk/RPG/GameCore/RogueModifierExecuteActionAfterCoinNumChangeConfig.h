#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG_METHOD_3_AF47C450BFE86B38_OFFSET UNITYSDK_OFFSET(0x19B50200)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG_METHOD_3_E0D2BCD22229A4E1_OFFSET UNITYSDK_OFFSET(0x19B5C0A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B501B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterCoinNumChangeConfig_TypeDefinitionIndex = 17092;

	class RogueModifierExecuteActionAfterCoinNumChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0D2BCD22229A4E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterCoinNumChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterCoinNumChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG_METHOD_3_E0D2BCD22229A4E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF47C450BFE86B38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterCoinNumChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterCoinNumChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERCOINNUMCHANGECONFIG_METHOD_3_AF47C450BFE86B38_OFFSET))(a1, a2);
		}
	};
}
