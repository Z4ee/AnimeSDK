#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE_METHOD_3_346EF61EE867D197_OFFSET UNITYSDK_OFFSET(0x17083400)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE_METHOD_3_661AA7587039929B_OFFSET UNITYSDK_OFFSET(0x17083300)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x170833F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_SkillExcelValue_TypeDefinitionIndex = 14494;

	class ChenLingBattleValueGetter_SkillExcelValue : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::System::Int32 ValueIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_661AA7587039929B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SkillExcelValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_SkillExcelValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE_METHOD_3_661AA7587039929B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_346EF61EE867D197(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SkillExcelValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_SkillExcelValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SKILLEXCELVALUE_METHOD_3_346EF61EE867D197_OFFSET))(a1, a2);
		}
	};
}
