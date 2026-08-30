#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1355;
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_CANCELALL_OFFSET UNITYSDK_OFFSET(0xD026500)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_METHOD_5_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xD025D20)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_METHOD_5_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0xD026010)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_PLAYDRAWFLY_OFFSET UNITYSDK_OFFSET(0xD025DC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_SCHEDULEAFTERDELAY_OFFSET UNITYSDK_OFFSET(0xD026310)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD026550)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinCardFlyEffectView_TypeDefinitionIndex = 79350;

	class FateRinCardFlyEffectView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _BtnDrawTransform; // 0x18
		::System::Single _DrawFlyDurationA; // 0x20
		::System::Single _DrawFlyDurationB; // 0x24
		::UnityEngine::Vector3 _DrawFlyMidLocalOffset; // 0x28
		::System::String* _DrawFlyEaseNameA; // 0x38
		::System::String* _DrawFlyEaseNameB; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_77FD543600E00498()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_METHOD_5_77FD543600E00498_OFFSET))(this);
		}

		::System::Void PlayDrawFly(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_PLAYDRAWFLY_OFFSET))(this, a1, a2);
		}

		::System::Void ScheduleAfterDelay(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_SCHEDULEAFTERDELAY_OFFSET))(this, a1, a2);
		}

		::System::Void CancelAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_CANCELALL_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1355* Method_5_D41F2EAAA87E2BFD()
		{
			return ((::Class_0_16E4307DCC419505_1355*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_METHOD_5_D41F2EAAA87E2BFD_OFFSET))(this);
		}
	};
}
