#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ActivityMarble { class MarblePVPManager; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA37D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS7_0__ENTERPVPLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x1AFA8BC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS7_0__ENTERPVPLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x1AFA8CC0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPManager___c__DisplayClass7_0_TypeDefinitionIndex = 74600;

	class MarblePVPManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__1; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPManager* __4__this; // 0x18
		::System::Boolean openUI; // 0x20
		::RPG::Client::ActivityMarble::MarblePVPMode mode; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _EnterPVPLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS7_0__ENTERPVPLOBBY_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _EnterPVPLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGER___C__DISPLAYCLASS7_0__ENTERPVPLOBBY_B__1_OFFSET))(this);
		}
	};
}
