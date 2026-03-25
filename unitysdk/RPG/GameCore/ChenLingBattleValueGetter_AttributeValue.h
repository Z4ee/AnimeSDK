#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleAttributeName.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE_METHOD_3_D9DEB8FA63E3840E_OFFSET UNITYSDK_OFFSET(0x17082CE0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE_METHOD_3_E3B8E314AD5922D6_OFFSET UNITYSDK_OFFSET(0x17082C80)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17082CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_AttributeValue_TypeDefinitionIndex = 14495;

	class ChenLingBattleValueGetter_AttributeValue : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::RPG::GameCore::ChenLingBattleAttributeName AttributeName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E3B8E314AD5922D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE_METHOD_3_E3B8E314AD5922D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D9DEB8FA63E3840E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUE_METHOD_3_D9DEB8FA63E3840E_OFFSET))(a1, a2);
		}
	};
}
