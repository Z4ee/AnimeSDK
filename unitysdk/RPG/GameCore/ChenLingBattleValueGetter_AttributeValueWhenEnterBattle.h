#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleAttributeName.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE_METHOD_3_346BFCC0A0EE12B2_OFFSET UNITYSDK_OFFSET(0x196252F0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE_METHOD_3_CDDEBF9778E3A45A_OFFSET UNITYSDK_OFFSET(0x19625290)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x196252E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_AttributeValueWhenEnterBattle_TypeDefinitionIndex = 15029;

	class ChenLingBattleValueGetter_AttributeValueWhenEnterBattle : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::RPG::GameCore::ChenLingBattleAttributeName AttributeName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDDEBF9778E3A45A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValueWhenEnterBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValueWhenEnterBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE_METHOD_3_CDDEBF9778E3A45A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_346BFCC0A0EE12B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValueWhenEnterBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValueWhenEnterBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE_METHOD_3_346BFCC0A0EE12B2_OFFSET))(a1, a2);
		}
	};
}
