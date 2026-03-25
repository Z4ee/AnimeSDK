#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_A64CC8A9B1CC56C5;
class Class_2_1DB6C02CA182EEBA;
namespace RPG::GameCore { class FateBattleManager; }

#define RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA941620)
#define RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0___APPLYFATEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0xA943420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBattleManager___c__DisplayClass32_0_TypeDefinitionIndex = 44934;

	class FateBattleManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::Class_2_1DB6C02CA182EEBA* pInstance; // 0x10
		::RPG::GameCore::FateBattleManager* __4__this; // 0x18
		::Class_1_A64CC8A9B1CC56C5* pFateBuffData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void __ApplyFateBuff_b__0(::RPG::GameCore::StringHash pKey, ::System::Nullable_1<::RPG::GameCore::FixPoint> pOldValue, ::RPG::GameCore::FixPoint fNewValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___C__DISPLAYCLASS32_0___APPLYFATEBUFF_B__0_OFFSET))(this, pKey, pOldValue, fNewValue);
		}
	};
}
