#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6BD41257D23618B4_21;
namespace RPG::Client { class RogueTalentUnlockData; }

#define RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB09A050)
#define RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__UPDATESRVDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB09A940)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentDataItem___c__DisplayClass5_0_TypeDefinitionIndex = 62175;

	class RogueTalentDataItem___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_1_6BD41257D23618B4_21* srvData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateSrvData_b__0(::RPG::Client::RogueTalentUnlockData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTalentUnlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__UPDATESRVDATA_B__0_OFFSET))(this, x);
		}
	};
}
