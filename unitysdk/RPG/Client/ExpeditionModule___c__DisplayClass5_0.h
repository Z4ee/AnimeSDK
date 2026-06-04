#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionGroupData; }
namespace RPG::Client { class ExpeditionHarvestData; }
namespace RPG::Client { class ExpeditionModule; }

#define RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB961CD0)
#define RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS5_0__GETUNLOCKEDGROUPDATAS_B__1_OFFSET UNITYSDK_OFFSET(0xB961F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionModule___c__DisplayClass5_0_TypeDefinitionIndex = 59765;

	class ExpeditionModule___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::ExpeditionModule* __4__this; // 0x10
		::RPG::Client::ExpeditionGroupData* group; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetUnlockedGroupDatas_b__1(::RPG::Client::ExpeditionHarvestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionHarvestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS5_0__GETUNLOCKEDGROUPDATAS_B__1_OFFSET))(this, a1);
		}
	};
}
