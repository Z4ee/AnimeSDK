#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_90889A2023AB884E_8;
namespace RPG::Client::PixAir { class PixAirEnterBattleRewardItemControl; }
namespace RPG::Client::PixAir { class PixAirEnterBattleViewModel; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C8364C0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8360D0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C836570)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C8361A0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONPIXAIRENTERBATTLEVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C836720)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C836660)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnterBattleWindows_TypeDefinitionIndex = 78759;

	class PixAirEnterBattleWindows : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Button* _EnterBattleBtn; // 0x48
		::RPG::Client::PixAir::PixAirEnterBattleRewardItemControl* _RewardItem2; // 0x50
		::UnityEngine::UI::Image* _EnemyCardImg; // 0x58
		::RPG::Client::PixAir::PixAirEnterBattleRewardItemControl* _RewardItem1; // 0x60
		::UnityEngine::UI::Button* _ExitBtn; // 0x68
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x70

		::System::Void _ctor(::RPG::Client::PixAir::PixAirEnterBattleViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEnterBattleViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnPixAirEnterBattleViewMessage(::Class_1_90889A2023AB884E_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90889A2023AB884E_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONPIXAIRENTERBATTLEVIEWMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEnterBattleViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEnterBattleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
