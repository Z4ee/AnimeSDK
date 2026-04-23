#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_18;
namespace RPG::Client { class CakeRaceHandbookCatItem; }

#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F07130)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0___SYNCLIST_B__1_OFFSET UNITYSDK_OFFSET(0x9F07260)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHandbookInfo___c__DisplayClass11_0_TypeDefinitionIndex = 58080;

	class CakeRaceHandbookInfo___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_1_D1E0AD3915BCCF29_18* proto; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncList_b__1(::RPG::Client::CakeRaceHandbookCatItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0___SYNCLIST_B__1_OFFSET))(this, x);
		}
	};
}
