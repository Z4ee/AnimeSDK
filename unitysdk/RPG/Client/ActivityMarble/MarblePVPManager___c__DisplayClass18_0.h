#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B005A18003A04C3;
namespace RPG::Client::ActivityMarble { class MarblePVPManager; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8B0C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS18_0__STARTMATCH_B__0_OFFSET UNITYSDK_OFFSET(0x19A8E760)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPManager___c__DisplayClass18_0_TypeDefinitionIndex = 71291;

	class MarblePVPManager___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::Class_1_7B005A18003A04C3* extInfo; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartMatch_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS18_0__STARTMATCH_B__0_OFFSET))(this);
		}
	};
}
