#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DiceCombatCampaignConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD30B00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA___C__DISPLAYCLASS2_0__GETPROGRESSSTAGEINFOLIST_B__0_OFFSET UNITYSDK_OFFSET(0xCD31140)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatProgressData___c__DisplayClass2_0_TypeDefinitionIndex = 75603;

	class DiceCombatProgressData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* bossProgressList; // 0x10
		::System::Func_2<::RPG::GameCore::DiceCombatCampaignConfigRow*, ::System::Boolean>* __9__0; // 0x18
		::System::Int32 i; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetProgressStageInfoList_b__0(::RPG::GameCore::DiceCombatCampaignConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatCampaignConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA___C__DISPLAYCLASS2_0__GETPROGRESSSTAGEINFOLIST_B__0_OFFSET))(this, a1);
		}
	};
}
