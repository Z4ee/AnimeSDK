#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleConditionType.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleTitelType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLEFUNTITLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DB950)
#define RPG_GAMECORE_EXPEDITIONBATTLEFUNTITLECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DBC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleFunTitleConfigRow_TypeDefinitionIndex = 11436;

	class ExpeditionBattleFunTitleConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID FunTitleName; // 0x10
		::System::UInt32 ConditionParam; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::GameCore::ExpeditionBattleTitelType Type; // 0x28
		::RPG::GameCore::ExpeditionBattleConditionType ConditionParamType; // 0x2C
		::RPG::Client::TextID FunTitleDesc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFUNTITLECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFUNTITLECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
