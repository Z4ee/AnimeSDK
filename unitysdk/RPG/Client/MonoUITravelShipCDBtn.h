#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MONOUITRAVELSHIPCDBTN_ACTION_OFFSET UNITYSDK_OFFSET(0x1A3670C0)
#define RPG_CLIENT_MONOUITRAVELSHIPCDBTN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A367020)
#define RPG_CLIENT_MONOUITRAVELSHIPCDBTN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A366F70)
#define RPG_CLIENT_MONOUITRAVELSHIPCDBTN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A366E50)
#define RPG_CLIENT_MONOUITRAVELSHIPCDBTN_SETTIMEUPEVENT_OFFSET UNITYSDK_OFFSET(0x1A367070)
#define RPG_CLIENT_MONOUITRAVELSHIPCDBTN_START_OFFSET UNITYSDK_OFFSET(0x1A366C30)
#define RPG_CLIENT_MONOUITRAVELSHIPCDBTN_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A366C70)
#define RPG_CLIENT_MONOUITRAVELSHIPCDBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A367110)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUITravelShipCDBtn_TypeDefinitionIndex = 65958;

	class MonoUITravelShipCDBtn : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsActive; // 0x18
		::System::Single CD; // 0x1C
		::UnityEngine::UI::Text* CDText; // 0x20
		::UnityEngine::UI::Slider* Slider; // 0x28
		::System::Single _CDRemainTime; // 0x30
		::System::UInt64 _DisableRecordTimeMsStamp; // 0x38
		::System::Action* _TimeOutEvent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUITRAVELSHIPCDBTN__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUITRAVELSHIPCDBTN_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUITRAVELSHIPCDBTN_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUITRAVELSHIPCDBTN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUITRAVELSHIPCDBTN_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUITRAVELSHIPCDBTN_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetTimeUpEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUITRAVELSHIPCDBTN_SETTIMEUPEVENT_OFFSET))(this, a1);
		}

		::System::Void Action()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUITRAVELSHIPCDBTN_ACTION_OFFSET))(this);
		}
	};
}
