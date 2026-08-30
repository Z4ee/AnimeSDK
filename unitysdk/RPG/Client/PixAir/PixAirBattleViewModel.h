#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::PixAir { class PixAirEquipOverviewViewModel; }
namespace RPG::Client::PixAir { class PixAirGhostManager; }
namespace RPG::Client::PixAir { class PixAirPlaneStatusViewModel; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xDAECCC0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_ENEMYEQUIPOVERVIEWVM_OFFSET UNITYSDK_OFFSET(0xDAED1C0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_ENEMYPLANESTATUSVM_OFFSET UNITYSDK_OFFSET(0xDAED180)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_EXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xDAED140)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_PLAYEREQUIPOVERVIEWVM_OFFSET UNITYSDK_OFFSET(0xDAED1A0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_PLAYERPLANESTATUSVM_OFFSET UNITYSDK_OFFSET(0xDAED160)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_ENEMYEQUIPOVERVIEWVM_OFFSET UNITYSDK_OFFSET(0xDAED1D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_ENEMYPLANESTATUSVM_OFFSET UNITYSDK_OFFSET(0xDAED190)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_EXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xDAED150)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_PLAYEREQUIPOVERVIEWVM_OFFSET UNITYSDK_OFFSET(0xDAED1B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_PLAYERPLANESTATUSVM_OFFSET UNITYSDK_OFFSET(0xDAED170)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDAECD80)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xDAECDA0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL__ONEXIT_OFFSET UNITYSDK_OFFSET(0xDAED030)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleViewModel_TypeDefinitionIndex = 78779;

	class PixAirBattleViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::PixAir::PixAirPlaneStatusViewModel* _PlayerPlaneStatusVM_k__BackingField; // 0x20
		::Sofa::Core::SimpleCommand* _ExitCommand_k__BackingField; // 0x28
		::RPG::Client::PixAir::PixAirGhostManager* _GhostManager; // 0x30
		::RPG::Client::PixAir::PixAirPlaneStatusViewModel* _EnemyPlaneStatusVM_k__BackingField; // 0x38
		::RPG::Client::PixAir::PixAirEquipOverviewViewModel* _PlayerEquipOverviewVM_k__BackingField; // 0x40
		::RPG::Client::PixAir::PixAirEquipOverviewViewModel* _EnemyEquipOverviewVM_k__BackingField; // 0x48
		::Class_1_5F4D64A4B97E38F9* _UIMessenger; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirBattleViewModel* Create(::RPG::Client::PixAir::PixAirGhostManager* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::RPG::Client::PixAir::PixAirBattleViewModel*(*)(::RPG::Client::PixAir::PixAirGhostManager*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL__ONEXIT_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_ExitCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_EXITCOMMAND_OFFSET))(this);
		}

		::System::Void set_ExitCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_EXITCOMMAND_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirPlaneStatusViewModel* get_PlayerPlaneStatusVM()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneStatusViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_PLAYERPLANESTATUSVM_OFFSET))(this);
		}

		::System::Void set_PlayerPlaneStatusVM(::RPG::Client::PixAir::PixAirPlaneStatusViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirPlaneStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_PLAYERPLANESTATUSVM_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirPlaneStatusViewModel* get_EnemyPlaneStatusVM()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneStatusViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_ENEMYPLANESTATUSVM_OFFSET))(this);
		}

		::System::Void set_EnemyPlaneStatusVM(::RPG::Client::PixAir::PixAirPlaneStatusViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirPlaneStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_ENEMYPLANESTATUSVM_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipOverviewViewModel* get_PlayerEquipOverviewVM()
		{
			return ((::RPG::Client::PixAir::PixAirEquipOverviewViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_PLAYEREQUIPOVERVIEWVM_OFFSET))(this);
		}

		::System::Void set_PlayerEquipOverviewVM(::RPG::Client::PixAir::PixAirEquipOverviewViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipOverviewViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_PLAYEREQUIPOVERVIEWVM_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipOverviewViewModel* get_EnemyEquipOverviewVM()
		{
			return ((::RPG::Client::PixAir::PixAirEquipOverviewViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_ENEMYEQUIPOVERVIEWVM_OFFSET))(this);
		}

		::System::Void set_EnemyEquipOverviewVM(::RPG::Client::PixAir::PixAirEquipOverviewViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipOverviewViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_ENEMYEQUIPOVERVIEWVM_OFFSET))(this, a1);
		}
	};
}
