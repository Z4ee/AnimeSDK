#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/NapContactShadowBehaviour_Struct_2_AA4EE15A8D4DB005_4.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class NapContactShadow; }

#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1978F3D0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x197905D0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_3C37862761792B91_OFFSET UNITYSDK_OFFSET(0x1978FA40)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x197905C0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_72B32D0255A32FB9_OFFSET UNITYSDK_OFFSET(0x1978F5B0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x197905E0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x197905B0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1978F9A0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19790140)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x197902F0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19790590)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NapContactShadowBehaviour_TypeDefinitionIndex = 82572;

	class NapContactShadowBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::NapContactShadowBehaviour_Struct_2_AA4EE15A8D4DB005_4 _methodParm; // 0x18
		::System::Boolean behaviorEnabled; // 0x2C
		::System::Boolean active_enabled; // 0x2D
		::System::Boolean use_enabled; // 0x2E
		::System::Boolean enabled; // 0x2F
		::System::Boolean active_sampleCount; // 0x30
		::System::Boolean use_sampleCount; // 0x31
		::System::Int32 sampleCount; // 0x34
		::System::Boolean active_worldSpaceLength; // 0x38
		::System::Boolean use_worldSpaceLength; // 0x39
		::System::Single worldSpaceLength; // 0x3C
		::UnityEngine::Rendering::Universal::NapContactShadow* _NapContactShadow; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::NapContactShadow* Method_4_72B32D0255A32FB9(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::NapContactShadow*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_72B32D0255A32FB9_OFFSET))(this, a1);
		}

		::System::Void Method_4_3C37862761792B91()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_3C37862761792B91_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
