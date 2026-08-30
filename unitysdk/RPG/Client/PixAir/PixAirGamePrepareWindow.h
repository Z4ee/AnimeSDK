#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::PixAir { class PixAirGameEquipListControl; }
namespace RPG::Client::PixAir { class PixAirGamePrepareViewModel; }
namespace RPG::Client::PixAir { class PixAirGameProgressControl; }
namespace RPG::Client::PixAir { class PixAirPrepareContentControl; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB04D30)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xDB04670)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB04950)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB04730)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGamePrepareWindow_TypeDefinitionIndex = 78751;

	class PixAirGamePrepareWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x48
		::RPG::Client::PixAir::PixAirPrepareContentControl* _ContentControl; // 0x50
		::RPG::Client::PixAir::PixAirGameEquipListControl* _EquipListControl; // 0x58
		::RPG::Client::PixAir::PixAirGameProgressControl* _ProgressControl; // 0x60
		::UnityEngine::UI::Button* _BtnClose; // 0x68
		::UnityEngine::UI::Button* _BtnSwitch; // 0x70

		::System::Void _ctor(::RPG::Client::PixAir::PixAirGamePrepareViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGamePrepareViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirGamePrepareViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirGamePrepareViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
