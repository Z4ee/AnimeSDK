#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimeLinePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RootMotion::FinalIK { class LookAtIK; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x173A2630)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x173A31C0)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x173A31B0)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_5E0C1E5BA618F87E_OFFSET UNITYSDK_OFFSET(0x173A2800)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x173A31A0)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x173A3310)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x173A3330)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x173A3320)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x173A2CF0)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x173A2D30)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x173A2B10)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x173A2F10)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x173A3180)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LookAtIKBehaviour_TypeDefinitionIndex = 61322;

	class LookAtIKBehaviour : public ::MoleMole::Timeline::TimeLinePlayableBehaviour
	{
	public:
		::System::Boolean enabled; // 0x18
		::System::Single weight; // 0x1C
		::System::Single bodyWeight; // 0x20
		::System::Single headWeight; // 0x24
		::System::Single eyesWeight; // 0x28
		::System::Boolean CloseUpdate; // 0x2C
		::RootMotion::FinalIK::LookAtIK* _lookAtIK; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_3_0868EF727040C390()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_0868EF727040C390_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_3_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::RootMotion::FinalIK::LookAtIK* Method_3_5E0C1E5BA618F87E(::System::Object* a1)
		{
			return ((::RootMotion::FinalIK::LookAtIK*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_METHOD_3_5E0C1E5BA618F87E_OFFSET))(this, a1);
		}
	};
}
