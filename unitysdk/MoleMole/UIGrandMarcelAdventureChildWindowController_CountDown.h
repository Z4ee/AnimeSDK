#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGrandMarcelAdventureChildWindowController_Timer.h"
#include "unitysdk/System/Object.h"

class Class_2_60638234271CCDB8_112;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoDigitConfig; }

#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN_GETTIMER_OFFSET UNITYSDK_OFFSET(0x186C9820)
#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN_GET_OUTOFTIME_OFFSET UNITYSDK_OFFSET(0x186C9500)
#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN_SET_OUTOFTIME_OFFSET UNITYSDK_OFFSET(0x186C9510)
#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN_START_OFFSET UNITYSDK_OFFSET(0x186C95A0)
#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN_UPDATE_OFFSET UNITYSDK_OFFSET(0x186C95F0)
#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x186C9520)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventureChildWindowController_CountDown_TypeDefinitionIndex = 85141;

	class UIGrandMarcelAdventureChildWindowController_CountDown : public ::System::Object
	{
	public:
		::MoleMole::UIGrandMarcelAdventureChildWindowController_Timer _blueTimer; // 0x10
		::MoleMole::UIGrandMarcelAdventureChildWindowController_Timer _redTimer; // 0x38
		::System::Boolean _OutOfTime_k__BackingField; // 0x60
		::System::Boolean _isActive; // 0x61
		::System::Int32 _lastSeconds; // 0x64
		::System::Int64 _stopCountDownTime; // 0x68

		::System::Void _ctor(::Class_2_60638234271CCDB8_112* view)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_60638234271CCDB8_112*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN__CTOR_OFFSET))(this, view);
		}

		::System::Boolean get_OutOfTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN_GET_OUTOFTIME_OFFSET))(this);
		}

		::System::Void set_OutOfTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN_SET_OUTOFTIME_OFFSET))(this, value);
		}

		::System::Void Start(::System::Int64 stopCountDownTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN_START_OFFSET))(this, stopCountDownTime);
		}

		::System::Void Update(::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig* monoDigit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN_UPDATE_OFFSET))(this, monoDigit);
		}

		::MoleMole::UIGrandMarcelAdventureChildWindowController_Timer& GetTimer(::System::Int32 millisecond)
		{
			return ((::MoleMole::UIGrandMarcelAdventureChildWindowController_Timer&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_COUNTDOWN_GETTIMER_OFFSET))(this, millisecond);
		}
	};
}
