#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimeLinePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RootMotion::FinalIK { class AimIK; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x129DAC50)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_METHOD_3_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x129DB610)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_METHOD_3_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x129DB620)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_METHOD_3_9A3E1378A12DCE85_OFFSET UNITYSDK_OFFSET(0x129DAE10)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_METHOD_3_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x129DB640)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_METHOD_3_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x129DB630)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x129DB2E0)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x129DB120)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x129DB4A0)
#define MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x129DB5F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int AimIKBehaviour_TypeDefinitionIndex = 73775;

	class AimIKBehaviour : public ::MoleMole::Timeline::TimeLinePlayableBehaviour
	{
	public:
		::System::Boolean enabled; // 0x18
		::System::Single weight; // 0x1C
		::RootMotion::FinalIK::AimIK* _aimIK; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_METHOD_3_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_3_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_METHOD_3_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::RootMotion::FinalIK::AimIK* Method_3_9A3E1378A12DCE85(::System::Object* a1)
		{
			return ((::RootMotion::FinalIK::AimIK*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_METHOD_3_9A3E1378A12DCE85_OFFSET))(this, a1);
		}

		::System::Void Method_3_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_METHOD_3_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_3_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AIMIKBEHAVIOUR_METHOD_3_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
