#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionGroupData; }
namespace RPG::Client { class ExpeditionModule; }

#define RPG_CLIENT_EXPEDITIONGROUPDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196CC030)
#define RPG_CLIENT_EXPEDITIONGROUPDATA___C__DISPLAYCLASS1_0__GETINPROGRESSHARVESTCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x196CC040)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionGroupData___c__DisplayClass1_0_TypeDefinitionIndex = 61044;

	class ExpeditionGroupData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::ExpeditionModule* module; // 0x10
		::RPG::Client::ExpeditionGroupData* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONGROUPDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetInProgressHarvestCount_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONGROUPDATA___C__DISPLAYCLASS1_0__GETINPROGRESSHARVESTCOUNT_B__0_OFFSET))(this, a1);
		}
	};
}
