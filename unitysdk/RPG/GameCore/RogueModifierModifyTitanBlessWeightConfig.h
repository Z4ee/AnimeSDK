#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSWEIGHTCONFIG_METHOD_3_9A82260FE438C448_OFFSET UNITYSDK_OFFSET(0x17636410)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSWEIGHTCONFIG_METHOD_3_B6C5B9B859852D21_OFFSET UNITYSDK_OFFSET(0x176364E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17636490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTitanBlessWeightConfig_TypeDefinitionIndex = 16302;

	class RogueModifierModifyTitanBlessWeightConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9A82260FE438C448(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTitanBlessWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTitanBlessWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSWEIGHTCONFIG_METHOD_3_9A82260FE438C448_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6C5B9B859852D21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTitanBlessWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTitanBlessWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSWEIGHTCONFIG_METHOD_3_B6C5B9B859852D21_OFFSET))(a1, a2);
		}
	};
}
