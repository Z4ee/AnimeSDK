#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_1294FEF8E985635C;
namespace RPG::Client::PixAir { class PixAirGameEquipListControl; }
namespace RPG::Client::PixAir { class PixAirGamePrepareViewModel; }
namespace RPG::Client::PixAir { class PixAirGameProgressControl; }
namespace RPG::Client::PixAir { class PixAirPrepareContentControl; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB443B0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xDB43C80)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB43F90)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xDB44460)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB43D70)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGamePrepareWindow_TypeDefinitionIndex = 79231;

	class PixAirGamePrepareWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::Class_1_1294FEF8E985635C* _Messenger; // 0x48
		::RPG::Client::PixAir::PixAirGameEquipListControl* _EquipListControl; // 0x50
		::UnityEngine::UI::Button* _BtnSwitch; // 0x58
		::UnityEngine::UI::Button* _BtnClose; // 0x60
		::RPG::Client::PixAir::PixAirPrepareContentControl* _ContentControl; // 0x68
		::RPG::Client::PixAir::PixAirGameProgressControl* _ProgressControl; // 0x70

		::System::Void _ctor(::RPG::Client::PixAir::PixAirGamePrepareViewModel* a1, ::Class_1_1294FEF8E985635C* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGamePrepareViewModel*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirGamePrepareViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirGamePrepareViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
