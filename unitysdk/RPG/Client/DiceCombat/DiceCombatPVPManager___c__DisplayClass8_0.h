#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatPVPMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A99F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0__ENTERPVPLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xB7AC0D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0__ENTERPVPLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xB7AC200)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPManager___c__DisplayClass8_0_TypeDefinitionIndex = 70714;

	class DiceCombatPVPManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatPVPManager* __4__this; // 0x10
		::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__1; // 0x18
		::RPG::Client::DiceCombat::DiceCombatPVPMode mode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _EnterPVPLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0__ENTERPVPLOBBY_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _EnterPVPLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0__ENTERPVPLOBBY_B__1_OFFSET))(this);
		}
	};
}
