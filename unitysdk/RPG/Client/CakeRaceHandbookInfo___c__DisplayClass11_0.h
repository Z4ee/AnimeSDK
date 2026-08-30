#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_166;
namespace RPG::Client { class CakeRaceHandbookCatItem; }

#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64D8C0)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0___SYNCLIST_B__1_OFFSET UNITYSDK_OFFSET(0x1C64D9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHandbookInfo___c__DisplayClass11_0_TypeDefinitionIndex = 63115;

	class CakeRaceHandbookInfo___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_166* proto; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncList_b__1(::RPG::Client::CakeRaceHandbookCatItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0___SYNCLIST_B__1_OFFSET))(this, a1);
		}
	};
}
