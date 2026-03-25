#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_18;
namespace RPG::Client { class CakeRaceHandbookCatItem; }

#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9243B70)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0___SYNCLIST_B__1_OFFSET UNITYSDK_OFFSET(0x9243CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHandbookInfo___c__DisplayClass11_0_TypeDefinitionIndex = 51160;

	class CakeRaceHandbookInfo___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_1_120319518E6F6581_18* proto; // 0x10

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
