#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_90889A2023AB884E_8;
class Class_1_D501FC103C8A2714;
namespace RPG::Client::PixAir { class PixAirEnterBattleRewardItemControl; }
namespace RPG::Client::PixAir { class PixAirEnterBattleViewModel; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB38C80)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__CTOR_OFFSET UNITYSDK_OFFSET(0xDB38870)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB38D30)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xDB38F40)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB38960)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONPIXAIRENTERBATTLEVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0xDB38FA0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0xDB38E80)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnterBattleWindows_TypeDefinitionIndex = 79241;

	class PixAirEnterBattleWindows : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Button* _ExitBtn; // 0x48
		::Class_1_D501FC103C8A2714* _Messenger; // 0x50
		::UnityEngine::UI::Button* _EnterBattleBtn; // 0x58
		::UnityEngine::UI::Image* _EnemyCardImg; // 0x60
		::RPG::Client::PixAir::PixAirEnterBattleRewardItemControl* _RewardItem2; // 0x68
		::RPG::Client::PixAir::PixAirEnterBattleRewardItemControl* _RewardItem1; // 0x70

		::System::Void _ctor(::RPG::Client::PixAir::PixAirEnterBattleViewModel* a1, ::Class_1_D501FC103C8A2714* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEnterBattleViewModel*, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONEXITFINALSTEP_OFFSET))(this);
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
