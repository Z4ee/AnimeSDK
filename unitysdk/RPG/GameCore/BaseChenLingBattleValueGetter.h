#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_METHOD_2_D5B80FAB7297D182_OFFSET UNITYSDK_OFFSET(0x1A3DE3C0)
#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_METHOD_2_D8F7CEB9B788FDE6_OFFSET UNITYSDK_OFFSET(0x1A3DE7D0)
#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3DE830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleValueGetter_TypeDefinitionIndex = 15189;

	class BaseChenLingBattleValueGetter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D5B80FAB7297D182(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_METHOD_2_D5B80FAB7297D182_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D8F7CEB9B788FDE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_METHOD_2_D8F7CEB9B788FDE6_OFFSET))(a1, a2);
		}
	};
}
