#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_METHOD_2_8FE6DA6BE66A4BD7_OFFSET UNITYSDK_OFFSET(0x16FC5640)
#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_METHOD_2_D8F7CEB9B788FDE6_OFFSET UNITYSDK_OFFSET(0x16FC5C20)
#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC5C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleValueGetter_TypeDefinitionIndex = 14492;

	class BaseChenLingBattleValueGetter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8FE6DA6BE66A4BD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_METHOD_2_8FE6DA6BE66A4BD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D8F7CEB9B788FDE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_METHOD_2_D8F7CEB9B788FDE6_OFFSET))(a1, a2);
		}
	};
}
