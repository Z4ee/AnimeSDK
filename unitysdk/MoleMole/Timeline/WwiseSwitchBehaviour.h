#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/EntityPlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_258333C2E3556047_OFFSET UNITYSDK_OFFSET(0x152BF3D0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x152BF990)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x152BF670)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_ACE4204EBB1CE487_OFFSET UNITYSDK_OFFSET(0x152BF720)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x152BFA30)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x152BF9A0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x152BF6D0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x152BF980)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseSwitchBehaviour_TypeDefinitionIndex = 51166;

	class WwiseSwitchBehaviour : public ::MoleMole::Timeline::EntityPlayableBehaviour
	{
	public:
		::System::String* groupName; // 0x28
		::System::String* switchName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_258333C2E3556047(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_258333C2E3556047_OFFSET))(this, a1);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void Method_3_ACE4204EBB1CE487()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_ACE4204EBB1CE487_OFFSET))(this);
		}

		::System::Void Method_3_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}
	};
}
