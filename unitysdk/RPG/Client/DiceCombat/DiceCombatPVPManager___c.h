#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7ABCE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB7ABD20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C___DOCREATELOBBY_B__9_0_OFFSET UNITYSDK_OFFSET(0xB7ABD30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C___JOINLOBBYINTERNAL_B__28_1_OFFSET UNITYSDK_OFFSET(0xB7ABD40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C___ONGIVEUP_B__32_0_OFFSET UNITYSDK_OFFSET(0xB7ABDB0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPManager___c_TypeDefinitionIndex = 70711;

	class DiceCombatPVPManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DiceCombat::DiceCombatPVPManager___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatPVPManager___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatPVPManager___c_TypeDefinitionIndex)->GetStaticField(0x4FF0);
		}
		static ::System::Func_2<::RPG::Client::BaseLobby*, ::RPG::Client::BaseLobby*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::BaseLobby*, ::RPG::Client::BaseLobby*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatPVPManager___c_TypeDefinitionIndex)->GetStaticField(0x4FF8);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__28_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatPVPManager___c_TypeDefinitionIndex)->GetStaticField(0x5000);
		}
		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__32_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatPVPManager___c_TypeDefinitionIndex)->GetStaticField(0x5008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::BaseLobby* __DoCreateLobby_b__9_0(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C___DOCREATELOBBY_B__9_0_OFFSET))(this, a1);
		}

		::System::Void __JoinLobbyInternal_b__28_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C___JOINLOBBYINTERNAL_B__28_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __OnGiveUp_b__32_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C___ONGIVEUP_B__32_0_OFFSET))(this);
		}
	};
}
