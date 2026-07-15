#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE_METHOD_3_55349FDEF4ED3656_OFFSET UNITYSDK_OFFSET(0x1C37FF20)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE_METHOD_3_AF4F2A87806231DA_OFFSET UNITYSDK_OFFSET(0x1C380040)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C380030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_Pure_TypeDefinitionIndex = 15190;

	class ChenLingBattleValueGetter_Pure : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55349FDEF4ED3656(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_Pure*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_Pure*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE_METHOD_3_55349FDEF4ED3656_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF4F2A87806231DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_Pure* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_Pure*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_PURE_METHOD_3_AF4F2A87806231DA_OFFSET))(a1, a2);
		}
	};
}
