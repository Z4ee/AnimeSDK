#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ColorLookupBehaviour_Struct_2_DA0255BED8A7AC13.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }

#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1450A700)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_31EB9898477203D4_OFFSET UNITYSDK_OFFSET(0x1450A8C0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1450B550)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_5FC63A1AC659F0AE_OFFSET UNITYSDK_OFFSET(0x1450AD40)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x1450B530)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x1450B560)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x1450B540)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1450ACB0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1450B1B0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1450B360)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1450B510)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorLookupBehaviour_TypeDefinitionIndex = 65025;

	class ColorLookupBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ColorLookupBehaviour_Struct_2_DA0255BED8A7AC13 _methodParm; // 0x18
		::System::Boolean enabled; // 0x38
		::System::Boolean active_texture; // 0x39
		::System::Boolean use_texture; // 0x3A
		::UnityEngine::Texture* texture; // 0x40
		::System::Boolean active_contribution; // 0x48
		::System::Boolean use_contribution; // 0x49
		::System::Single contribution; // 0x4C
		::UnityEngine::Rendering::Universal::ColorLookup* _ColorLookup; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_5FC63A1AC659F0AE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_5FC63A1AC659F0AE_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::ColorLookup* Method_4_31EB9898477203D4(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ColorLookup*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_31EB9898477203D4_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
