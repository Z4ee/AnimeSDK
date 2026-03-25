#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9FAC3539FD8861A_18;
namespace RPG::Client { class RogueTalentUnlockData; }

#define RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA363670)
#define RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__UPDATESRVDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA363D70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentDataItem___c__DisplayClass5_0_TypeDefinitionIndex = 54987;

	class RogueTalentDataItem___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_1_E9FAC3539FD8861A_18* srvData; // 0x10

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
