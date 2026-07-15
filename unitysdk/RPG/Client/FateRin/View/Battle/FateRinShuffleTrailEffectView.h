#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_378;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_METHOD_5_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x19714830)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_METHOD_5_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x197147A0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_METHOD_5_BF93C93F570E4D30_OFFSET UNITYSDK_OFFSET(0x197146B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_METHOD_5_D0F7E0CB5C46E8D1_OFFSET UNITYSDK_OFFSET(0x19714080)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_PLAYSHUFFLEFLOW_OFFSET UNITYSDK_OFFSET(0x19713AB0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x197148C0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinShuffleTrailEffectView_TypeDefinitionIndex = 75740;

	class FateRinShuffleTrailEffectView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _StartPoint; // 0x18
		::UnityEngine::RectTransform* _MidPoint; // 0x20
		::UnityEngine::RectTransform* _EndPoint; // 0x28
		::UnityEngine::Animation* _BtnDrawAnimation; // 0x30
		::UnityEngine::Animation* _BtnDropAnimation; // 0x38
		::System::Int32 _Count; // 0x40
		::System::Single _Interval; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_378* PlayShuffleFlow(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::System::Int32 a3, ::System::Int32 a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::Class_0_16E4307DCC419505_378*(*)(::PVOID, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::System::Int32, ::System::Int32, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_PLAYSHUFFLEFLOW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Class_0_16E4307DCC419505_378* Method_5_D0F7E0CB5C46E8D1(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::System::Object* a2)
		{
			return ((::Class_0_16E4307DCC419505_378*(*)(::PVOID, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_METHOD_5_D0F7E0CB5C46E8D1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_078D85152011B919()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_METHOD_5_078D85152011B919_OFFSET))(this);
		}

		::System::Void Method_5_078D85152011B919_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_METHOD_5_078D85152011B919_1_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Method_5_BF93C93F570E4D30(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_METHOD_5_BF93C93F570E4D30_OFFSET))(a1, a2, a3);
		}
	};
}
