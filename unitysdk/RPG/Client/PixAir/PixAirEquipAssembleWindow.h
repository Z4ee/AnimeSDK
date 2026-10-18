#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_1294FEF8E985635C;
namespace RPG::Client { class UIDraggableManager; }
namespace RPG::Client::PixAir { class PixAirBagSlotListControl; }
namespace RPG::Client::PixAir { class PixAirEquipAssembleViewModel; }
namespace RPG::Client::PixAir { class PixAirGameEquipListControl; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB30CF0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xDB308C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB30C60)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xDB30DA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB309B0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipAssembleWindow_TypeDefinitionIndex = 79227;

	class PixAirEquipAssembleWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::Class_1_1294FEF8E985635C* _Messenger; // 0x48
		::RPG::Client::UIDraggableManager* _DraggableManager; // 0x50
		::RPG::Client::PixAir::PixAirGameEquipListControl* _BattleEquipListControl; // 0x58
		::UnityEngine::UI::Button* _BtnClose; // 0x60
		::UnityEngine::UI::Button* _BtnSwitch; // 0x68
		::RPG::Client::PixAir::PixAirBagSlotListControl* _BagSlotListControl; // 0x70

		::System::Void _ctor(::RPG::Client::PixAir::PixAirEquipAssembleViewModel* a1, ::Class_1_1294FEF8E985635C* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipAssembleViewModel*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipAssembleViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEquipAssembleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
