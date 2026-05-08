#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PaniniProjectionBehaviour_Struct_2_E658502528B7C034_3.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }

#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1178B3E0)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1178C2C0)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_5FC63A1AC659F0AE_OFFSET UNITYSDK_OFFSET(0x1178BA30)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x1178C290)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x1178C2B0)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x1178C2A0)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_CBB3E29629343F37_OFFSET UNITYSDK_OFFSET(0x1178B5B0)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1178B9A0)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1178BEB0)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1178C060)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1178C270)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PaniniProjectionBehaviour_TypeDefinitionIndex = 58547;

	class PaniniProjectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::PaniniProjectionBehaviour_Struct_2_E658502528B7C034_3 _methodParm; // 0x18
		::System::Boolean enabled; // 0x2C
		::System::Boolean active_distance; // 0x2D
		::System::Boolean use_distance; // 0x2E
		::System::Single distance; // 0x30
		::System::Boolean active_cropToFit; // 0x34
		::System::Boolean use_cropToFit; // 0x35
		::System::Single cropToFit; // 0x38
		::UnityEngine::Rendering::Universal::PaniniProjection* _PaniniProjection; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::PaniniProjection* Method_4_CBB3E29629343F37(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::PaniniProjection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_CBB3E29629343F37_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_5FC63A1AC659F0AE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_5FC63A1AC659F0AE_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
