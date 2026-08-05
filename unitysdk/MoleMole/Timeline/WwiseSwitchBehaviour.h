#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/EntityPlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_258333C2E3556047_OFFSET UNITYSDK_OFFSET(0x173BE7F0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x173BEDB0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x173BEA90)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_947B16E67517638E_OFFSET UNITYSDK_OFFSET(0x173BEB40)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x173BEE50)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x173BEDC0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x173BEAF0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x173BEDA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseSwitchBehaviour_TypeDefinitionIndex = 46071;

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

		::System::Void Method_3_947B16E67517638E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_947B16E67517638E_OFFSET))(this);
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
