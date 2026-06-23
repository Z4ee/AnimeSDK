#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ChromaticAberrationBehaviour_Struct_2_52AD02145F5FCE36_12.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x160F8D20)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_0BD16411986206A8_OFFSET UNITYSDK_OFFSET(0x160F9060)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x160F95A0)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x160FABA0)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x160FABB0)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x160FABD0)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x160FABC0)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x160F9450)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x160FA330)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x160FA590)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x160FAB20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChromaticAberrationBehaviour_TypeDefinitionIndex = 51606;

	class ChromaticAberrationBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ChromaticAberrationBehaviour_Struct_2_52AD02145F5FCE36_12 _methodParm; // 0x18
		::System::Boolean enabled; // 0x8C
		::System::Boolean active_intensity; // 0x8D
		::System::Boolean use_intensity; // 0x8E
		::System::Single intensity; // 0x90
		::System::Boolean active_center; // 0x94
		::System::Boolean use_center; // 0x95
		::UnityEngine::Vector2 center; // 0x98
		::System::Boolean active_power; // 0xA0
		::System::Boolean use_power; // 0xA1
		::System::Single power; // 0xA4
		::System::Boolean active_ColorR; // 0xA8
		::System::Boolean use_ColorR; // 0xA9
		::UnityEngine::Color ColorR; // 0xAC
		::System::Boolean active_PowerR; // 0xBC
		::System::Boolean use_PowerR; // 0xBD
		::System::Single PowerR; // 0xC0
		::System::Boolean active_ColorG; // 0xC4
		::System::Boolean use_ColorG; // 0xC5
		::UnityEngine::Color ColorG; // 0xC8
		::System::Boolean active_PowerG; // 0xD8
		::System::Boolean use_PowerG; // 0xD9
		::System::Single PowerG; // 0xDC
		::System::Boolean active_ColorB; // 0xE0
		::System::Boolean use_ColorB; // 0xE1
		::UnityEngine::Color ColorB; // 0xE4
		::System::Boolean active_PowerB; // 0xF4
		::System::Boolean use_PowerB; // 0xF5
		::System::Single PowerB; // 0xF8
		::UnityEngine::Rendering::Universal::ChromaticAberration* _ChromaticAberration; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::ChromaticAberration* Method_4_0BD16411986206A8(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ChromaticAberration*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_0BD16411986206A8_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
