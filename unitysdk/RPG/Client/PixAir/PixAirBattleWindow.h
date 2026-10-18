#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_1294FEF8E985635C;
class Class_1_2CFE425FD55CBF64;
class Class_1_43BD383C98B4C0C5_224;
class Class_1_43BD383C98B4C0C5_225;
namespace RPG::Client::PixAir { class PixAirBattleViewModel; }
namespace RPG::Client::PixAir { class PixAirEquipInfoControl; }
namespace RPG::Client::PixAir { class PixAirJumpTextMessage; }
namespace RPG::Client::PixAir { class PixAirPlaneStatusControl; }
namespace RPG::Client::PixAir { class PixAirPlayerEquipOverviewControl; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB2C8B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xDB2C420)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONBATTLECLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xDB2CF00)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB2C960)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEQUIPINFOCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xDB2D3D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEQUIPINFOREQUESTMESSAGE_OFFSET UNITYSDK_OFFSET(0xDB2D1B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xDB2CEA0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB2C510)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONJUMPTEXTMESSAGE_OFFSET UNITYSDK_OFFSET(0xDB2CF90)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__SPAWNJUMPTEXT_OFFSET UNITYSDK_OFFSET(0xDB2CFE0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__SUBSCRIBEMESSAGES_OFFSET UNITYSDK_OFFSET(0xDB2CD00)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleWindow_TypeDefinitionIndex = 79236;

	class PixAirBattleWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Button* _ExitBtn; // 0x48
		::RPG::Client::PixAir::PixAirPlayerEquipOverviewControl* _PlayerEquipOverviewControl; // 0x50
		::RPG::Client::PixAir::PixAirEquipInfoControl* _EquipInfoControl; // 0x58
		::Class_1_1294FEF8E985635C* _Messenger; // 0x60
		::RPG::Client::PixAir::PixAirPlaneStatusControl* _PlayerPlaneStatusControl; // 0x68
		::UnityEngine::Transform* _JumpTextRoot; // 0x70
		::RPG::Client::PixAir::PixAirPlayerEquipOverviewControl* _EnemyEquipOverviewControl; // 0x78
		::RPG::Client::PixAir::PixAirPlaneStatusControl* _EnemyPlaneStatusControl; // 0x80

		::System::Void _ctor(::RPG::Client::PixAir::PixAirBattleViewModel* a1, ::Class_1_1294FEF8E985635C* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirBattleViewModel*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__SUBSCRIBEMESSAGES_OFFSET))(this);
		}

		::System::Void _OnBattleCloseMessage(::Class_1_43BD383C98B4C0C5_224* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_224*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONBATTLECLOSEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnJumpTextMessage(::RPG::Client::PixAir::PixAirJumpTextMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONJUMPTEXTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _SpawnJumpText(::RPG::Client::PixAir::PixAirJumpTextMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__SPAWNJUMPTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnEquipInfoRequestMessage(::Class_1_2CFE425FD55CBF64* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CFE425FD55CBF64*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEQUIPINFOREQUESTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnEquipInfoCloseMessage(::Class_1_43BD383C98B4C0C5_225* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_225*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEQUIPINFOCLOSEMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirBattleViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirBattleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
