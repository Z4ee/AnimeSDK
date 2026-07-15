#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace System { class Object; }
namespace UnityEngine::Events { class UnityEvent; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEFOCUSCHANGEDETECTCONTROL_GET_ONFOCUSED_OFFSET UNITYSDK_OFFSET(0x1AC61280)
#define RPG_CLIENT_CHALLENGE_CHALLENGEFOCUSCHANGEDETECTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC61540)
#define RPG_CLIENT_CHALLENGE_CHALLENGEFOCUSCHANGEDETECTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1AC61290)
#define RPG_CLIENT_CHALLENGE_CHALLENGEFOCUSCHANGEDETECTCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AC613A0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEFOCUSCHANGEDETECTCONTROL__ONUIFOCUSCONTROLLERCHANGED_OFFSET UNITYSDK_OFFSET(0x1AC61420)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeFocusChangeDetectControl_TypeDefinitionIndex = 76455;

	class ChallengeFocusChangeDetectControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Events::UnityEvent* _OnFocused_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEFOCUSCHANGEDETECTCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Events::UnityEvent* get_OnFocused()
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEFOCUSCHANGEDETECTCONTROL_GET_ONFOCUSED_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEFOCUSCHANGEDETECTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEFOCUSCHANGEDETECTCONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIFocusControllerChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEFOCUSCHANGEDETECTCONTROL__ONUIFOCUSCONTROLLERCHANGED_OFFSET))(this, a1);
		}
	};
}
