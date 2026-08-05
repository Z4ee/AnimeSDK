#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/LiftGammaGainBehaviour_Struct_2_E9B2CF29B4D7A350_1.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class LiftGammaGain; }

#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x197276B0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x197288F0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x19728900)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x197288E0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x197288D0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_D33218A492B26449_OFFSET UNITYSDK_OFFSET(0x19727D80)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_E436924AA7D2B939_OFFSET UNITYSDK_OFFSET(0x197278E0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x19727CD0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19728330)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x197284F0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x197288A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LiftGammaGainBehaviour_TypeDefinitionIndex = 72275;

	class LiftGammaGainBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::LiftGammaGainBehaviour_Struct_2_E9B2CF29B4D7A350_1 _methodParm; // 0x18
		::System::Boolean enabled; // 0x58
		::System::Boolean active_lift; // 0x59
		::System::Boolean use_lift; // 0x5A
		::UnityEngine::Vector4 lift; // 0x5C
		::System::Boolean active_gamma; // 0x6C
		::System::Boolean use_gamma; // 0x6D
		::UnityEngine::Vector4 gamma; // 0x70
		::System::Boolean active_gain; // 0x80
		::System::Boolean use_gain; // 0x81
		::UnityEngine::Vector4 gain; // 0x84
		::UnityEngine::Rendering::Universal::LiftGammaGain* _LiftGammaGain; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::LiftGammaGain* Method_4_E436924AA7D2B939(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::LiftGammaGain*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_E436924AA7D2B939_OFFSET))(this, a1);
		}

		::System::Void Method_4_D33218A492B26449()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_D33218A492B26449_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
