#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class UIDraggableManager; }
namespace RPG::Client::PixAir { class PixAirBagSlotListControl; }
namespace RPG::Client::PixAir { class PixAirEquipAssembleViewModel; }
namespace RPG::Client::PixAir { class PixAirGameEquipListControl; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C8378C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8374C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C837830)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C837580)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipAssembleWindow_TypeDefinitionIndex = 78746;

	class PixAirEquipAssembleWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::PixAir::PixAirGameEquipListControl* _BattleEquipListControl; // 0x48
		::RPG::Client::PixAir::PixAirBagSlotListControl* _BagSlotListControl; // 0x50
		::UnityEngine::UI::Button* _BtnClose; // 0x58
		::UnityEngine::UI::Button* _BtnSwitch; // 0x60
		::RPG::Client::UIDraggableManager* _DraggableManager; // 0x68
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x70

		::System::Void _ctor(::RPG::Client::PixAir::PixAirEquipAssembleViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipAssembleViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipAssembleViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEquipAssembleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
