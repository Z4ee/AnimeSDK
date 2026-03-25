#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesGachaResultItemData; }

#define RPG_CLIENT_PLANETFESGACHARESULTDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9AB80)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA___C__DISPLAYCLASS5_0___SYNCITEMLIST_B__0_OFFSET UNITYSDK_OFFSET(0x9F9B010)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultData___c__DisplayClass5_0_TypeDefinitionIndex = 54192;

	class PlanetFesGachaResultData___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesGachaResultItemData* itemData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncItemList_b__0(::RPG::Client::PlanetFesGachaResultItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesGachaResultItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA___C__DISPLAYCLASS5_0___SYNCITEMLIST_B__0_OFFSET))(this, x);
		}
	};
}
