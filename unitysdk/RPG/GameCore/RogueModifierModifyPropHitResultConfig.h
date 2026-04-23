#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG_METHOD_3_094AF1BA44DC474D_OFFSET UNITYSDK_OFFSET(0x18D41EB0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG_METHOD_3_F532A9417739EDD4_OFFSET UNITYSDK_OFFSET(0x18D41DE0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D41E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPropHitResultConfig_TypeDefinitionIndex = 17062;

	class RogueModifierModifyPropHitResultConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F532A9417739EDD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPropHitResultConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPropHitResultConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG_METHOD_3_F532A9417739EDD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_094AF1BA44DC474D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPropHitResultConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPropHitResultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPROPHITRESULTCONFIG_METHOD_3_094AF1BA44DC474D_OFFSET))(a1, a2);
		}
	};
}
