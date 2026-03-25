#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x947E580)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x947E5C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__ENTERPVPLOBBY_B__8_0_OFFSET UNITYSDK_OFFSET(0x947E5D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C___JOINLOBBYINTERNAL_B__27_1_OFFSET UNITYSDK_OFFSET(0x947E5E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C___ONGIVEUP_B__31_0_OFFSET UNITYSDK_OFFSET(0x947E650)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPManager___c_TypeDefinitionIndex = 61974;

	class DiceCombatPVPManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BaseLobby*, ::RPG::Client::BaseLobby*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::BaseLobby*, ::RPG::Client::BaseLobby*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatPVPManager___c_TypeDefinitionIndex)->GetStaticField(0x44BA0);
		}
		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__31_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatPVPManager___c_TypeDefinitionIndex)->GetStaticField(0x44BA8);
		}
		static ::RPG::Client::DiceCombat::DiceCombatPVPManager___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatPVPManager___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatPVPManager___c_TypeDefinitionIndex)->GetStaticField(0x44BB0);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__27_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatPVPManager___c_TypeDefinitionIndex)->GetStaticField(0x44BB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::BaseLobby* _EnterPVPLobby_b__8_0(::RPG::Client::BaseLobby* lobby)
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__ENTERPVPLOBBY_B__8_0_OFFSET))(this, lobby);
		}

		::System::Void __JoinLobbyInternal_b__27_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C___JOINLOBBYINTERNAL_B__27_1_OFFSET))(this, ex);
		}

		::RPG::Client::Promises::IPromise* __OnGiveUp_b__31_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C___ONGIVEUP_B__31_0_OFFSET))(this);
		}
	};
}
