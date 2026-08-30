#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_111;
namespace RPG::Client { class RogueTalentUnlockData; }

#define RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDF22F00)
#define RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__UPDATESRVDATA_B__0_OFFSET UNITYSDK_OFFSET(0xDF23840)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentDataItem___c__DisplayClass5_0_TypeDefinitionIndex = 67471;

	class RogueTalentDataItem___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_1_21C7581DFE99F091_111* srvData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateSrvData_b__0(::RPG::Client::RogueTalentUnlockData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTalentUnlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__UPDATESRVDATA_B__0_OFFSET))(this, a1);
		}
	};
}
