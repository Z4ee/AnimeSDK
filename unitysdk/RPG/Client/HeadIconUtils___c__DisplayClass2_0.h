#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HeadIconUtils_SortInfo.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_HEADICONUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBD00FE0)
#define RPG_CLIENT_HEADICONUTILS___C__DISPLAYCLASS2_0__GETSORTEDHEADICONDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0xBD01490)

namespace RPG::Client
{
	inline static constexpr unsigned int HeadIconUtils___c__DisplayClass2_0_TypeDefinitionIndex = 61387;

	class HeadIconUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeadIconUtils_SortInfo>* sortInfoDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedHeadIconDataList_b__0(::RPG::Client::ItemData* a1, ::RPG::Client::ItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemData*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS___C__DISPLAYCLASS2_0__GETSORTEDHEADICONDATALIST_B__0_OFFSET))(this, a1, a2);
		}
	};
}
