#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG_METHOD_3_461A2B46BC6BA63D_OFFSET UNITYSDK_OFFSET(0x17634490)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG_METHOD_3_DA383C2EBB9BBCF4_OFFSET UNITYSDK_OFFSET(0x17634560)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17634510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyHexEquipmentCountConfig_TypeDefinitionIndex = 16306;

	class RogueModifierModifyHexEquipmentCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_461A2B46BC6BA63D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyHexEquipmentCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyHexEquipmentCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG_METHOD_3_461A2B46BC6BA63D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA383C2EBB9BBCF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyHexEquipmentCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyHexEquipmentCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYHEXEQUIPMENTCOUNTCONFIG_METHOD_3_DA383C2EBB9BBCF4_OFFSET))(a1, a2);
		}
	};
}
