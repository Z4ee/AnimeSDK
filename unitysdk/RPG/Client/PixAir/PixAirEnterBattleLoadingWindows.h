#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

namespace RPG::Client::PixAir { class PixAirEnterBattleLoadingViewModel; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3B8520)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B7D50)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3B8270)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC3B7DF0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__ONTICK_OFFSET UNITYSDK_OFFSET(0xC3B8590)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3B8720)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC3B86C0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xC3B8780)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnterBattleLoadingWindows_TypeDefinitionIndex = 73561;

	class PixAirEnterBattleLoadingWindows : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Text* _PlayerTalkContent; // 0x40
		::UnityEngine::UI::Text* _EnemyTalkContent; // 0x48
		::UnityEngine::UI::Text* _PlayerName; // 0x50
		::UnityEngine::UI::Image* _EnemyIconImage; // 0x58
		::UnityEngine::UI::Image* _PlayerIconImage; // 0x60
		::UnityEngine::UI::Text* _EnemyName; // 0x68
		::System::Single _ShowTime; // 0x70

		::System::Void _ctor(::RPG::Client::PixAir::PixAirEnterBattleLoadingViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEnterBattleLoadingViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__ONTICK_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEnterBattleLoadingViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEnterBattleLoadingViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS___IFIXBASEPROXY__ONTICK_OFFSET))(this);
		}
	};
}
