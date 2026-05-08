#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FXComicDotBehaviour_Struct_2_E658502528B7C034_6.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class FXComicDot; }

#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x15B5C9A0)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15B5D920)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_5FC63A1AC659F0AE_OFFSET UNITYSDK_OFFSET(0x15B5CFF0)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x15B5D930)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_7CFE7718AABF37C7_OFFSET UNITYSDK_OFFSET(0x15B5CB70)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x15B5D940)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x15B5D910)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15B5CF60)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15B5D530)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15B5D6E0)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15B5D8F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXComicDotBehaviour_TypeDefinitionIndex = 68522;

	class FXComicDotBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXComicDotBehaviour_Struct_2_E658502528B7C034_6 _methodParm; // 0x18
		::System::Boolean enabled; // 0x24
		::System::Boolean active_pixelationOn; // 0x25
		::System::Boolean use_pixelationOn; // 0x26
		::System::Boolean pixelationOn; // 0x27
		::System::Boolean active_pixelSize; // 0x28
		::System::Boolean use_pixelSize; // 0x29
		::System::Single pixelSize; // 0x2C
		::UnityEngine::Rendering::Universal::FXComicDot* _FXComicDot; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::FXComicDot* Method_4_7CFE7718AABF37C7(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::FXComicDot*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_7CFE7718AABF37C7_OFFSET))(this, a1);
		}

		::System::Void Method_4_5FC63A1AC659F0AE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_5FC63A1AC659F0AE_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
