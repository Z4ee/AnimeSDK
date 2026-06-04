#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH_METHOD_3_21F860E34BDA1993_OFFSET UNITYSDK_OFFSET(0x196355F0)
#define RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH_METHOD_3_8DC9719876A59831_OFFSET UNITYSDK_OFFSET(0x19633B40)
#define RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19633B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleCheckWorkFinish_TypeDefinitionIndex = 15099;

	class ChimeraBattleCheckWorkFinish : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraAbilityProgressBase* OnFinish; // 0x18
		::RPG::GameCore::ChimeraAbilityProgressBase* OnNotFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21F860E34BDA1993(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleCheckWorkFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleCheckWorkFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH_METHOD_3_21F860E34BDA1993_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8DC9719876A59831(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleCheckWorkFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleCheckWorkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH_METHOD_3_8DC9719876A59831_OFFSET))(a1, a2);
		}
	};
}
