#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1DD6AC150642D284;
namespace RPG::Client::ActivityMarble { class MarblePVPManagerBase; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC53FA40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS7_0__ENTERPVPLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xC544D30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS7_0__ENTERPVPLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xC544E20)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPManagerBase___c__DisplayClass7_0_TypeDefinitionIndex = 76013;

	class MarblePVPManagerBase___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__1; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPManagerBase* __4__this; // 0x18
		::Class_1_1DD6AC150642D284* roomExtInfo; // 0x20
		::System::Boolean openUI; // 0x28
		::RPG::Client::ActivityMarble::MarblePVPMode mode; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _EnterPVPLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_0F1B992870941C13_1> a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_0F1B992870941C13_1>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS7_0__ENTERPVPLOBBY_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _EnterPVPLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS7_0__ENTERPVPLOBBY_B__1_OFFSET))(this);
		}
	};
}
