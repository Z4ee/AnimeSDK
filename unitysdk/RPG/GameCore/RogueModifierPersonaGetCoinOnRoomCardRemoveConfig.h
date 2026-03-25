#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_METHOD_3_2EBFAE99DADC44BF_OFFSET UNITYSDK_OFFSET(0x176372E0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_METHOD_3_5EA60D473F749A46_OFFSET UNITYSDK_OFFSET(0x17637210)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17637290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaGetCoinOnRoomCardRemoveConfig_TypeDefinitionIndex = 16409;

	class RogueModifierPersonaGetCoinOnRoomCardRemoveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5EA60D473F749A46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_METHOD_3_5EA60D473F749A46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EBFAE99DADC44BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaGetCoinOnRoomCardRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGETCOINONROOMCARDREMOVECONFIG_METHOD_3_2EBFAE99DADC44BF_OFFSET))(a1, a2);
		}
	};
}
