#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_1294FEF8E985635C;
namespace RPG::Client::PixAir { class PixAirEquipOverviewViewModel; }
namespace RPG::Client::PixAir { class PixAirGhostManager; }
namespace RPG::Client::PixAir { class PixAirPlaneStatusViewModel; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xDB2BF00)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_ENEMYEQUIPOVERVIEWVM_OFFSET UNITYSDK_OFFSET(0xDB2C400)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_ENEMYPLANESTATUSVM_OFFSET UNITYSDK_OFFSET(0xDB2C3C0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_EXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xDB2C380)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_PLAYEREQUIPOVERVIEWVM_OFFSET UNITYSDK_OFFSET(0xDB2C3E0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_GET_PLAYERPLANESTATUSVM_OFFSET UNITYSDK_OFFSET(0xDB2C3A0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_ENEMYEQUIPOVERVIEWVM_OFFSET UNITYSDK_OFFSET(0xDB2C410)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_ENEMYPLANESTATUSVM_OFFSET UNITYSDK_OFFSET(0xDB2C3D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_EXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xDB2C390)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_PLAYEREQUIPOVERVIEWVM_OFFSET UNITYSDK_OFFSET(0xDB2C3F0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_SET_PLAYERPLANESTATUSVM_OFFSET UNITYSDK_OFFSET(0xDB2C3B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDB2BFC0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xDB2BFE0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL__ONEXIT_OFFSET UNITYSDK_OFFSET(0xDB2C270)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleViewModel_TypeDefinitionIndex = 79259;

	class PixAirBattleViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::PixAir::PixAirEquipOverviewViewModel* _PlayerEquipOverviewVM_k__BackingField; // 0x20
		::RPG::Client::PixAir::PixAirPlaneStatusViewModel* _EnemyPlaneStatusVM_k__BackingField; // 0x28
		::Class_1_1294FEF8E985635C* _UIMessenger; // 0x30
		::RPG::Client::PixAir::PixAirPlaneStatusViewModel* _PlayerPlaneStatusVM_k__BackingField; // 0x38
		::RPG::Client::PixAir::PixAirGhostManager* _GhostManager; // 0x40
		::Sofa::Core::SimpleCommand* _ExitCommand_k__BackingField; // 0x48
		::RPG::Client::PixAir::PixAirEquipOverviewViewModel* _EnemyEquipOverviewVM_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirBattleViewModel* Create(::RPG::Client::PixAir::PixAirGhostManager* a1, ::Class_1_1294FEF8E985635C* a2)
		{
			return ((::RPG::Client::PixAir::PixAirBattleViewModel*(*)(::RPG::Client::PixAir::PixAirGhostManager*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEVIEWMODEL_CREATE_OFFSET))(a1, a2);
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
