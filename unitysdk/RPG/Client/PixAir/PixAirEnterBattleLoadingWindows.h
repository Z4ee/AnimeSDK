#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

namespace RPG::Client::PixAir { class PixAirEnterBattleLoadingViewModel; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C8357C0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C835160)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C8356A0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C835220)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGWINDOWS__ONTICK_OFFSET UNITYSDK_OFFSET(0x1C835870)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnterBattleLoadingWindows_TypeDefinitionIndex = 78757;

	class PixAirEnterBattleLoadingWindows : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Text* _EnemyTalkContent; // 0x48
		::UnityEngine::UI::Text* _EnemyName; // 0x50
		::UnityEngine::UI::Image* _PlayerIconImage; // 0x58
		::UnityEngine::UI::Text* _PlayerName; // 0x60
		::UnityEngine::UI::Text* _PlayerTalkContent; // 0x68
		::UnityEngine::UI::Image* _EnemyIconImage; // 0x70
		::System::Single _ShowTime; // 0x78

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
	};
}
