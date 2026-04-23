#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYDICECOMBATGOODSUNLOCKTIPSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18608280)
#define RPG_GAMECORE_ACTIVITYDICECOMBATGOODSUNLOCKTIPSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18608400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatGoodsUnlockTipsRow_TypeDefinitionIndex = 10753;

	class ActivityDiceCombatGoodsUnlockTipsRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockTips; // 0x10
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATGOODSUNLOCKTIPSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATGOODSUNLOCKTIPSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
