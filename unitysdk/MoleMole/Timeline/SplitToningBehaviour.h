#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/SplitToningBehaviour_Struct_2_2DFEB74E3D4B48CA.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class SplitToning; }

#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A1C0A90)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1A1C1C60)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_3C37862761792B91_OFFSET UNITYSDK_OFFSET(0x1A1C1140)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x1A1C1C70)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_9EB2C6C4DF745A43_OFFSET UNITYSDK_OFFSET(0x1A1C0CB0)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x1A1C1C50)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x1A1C1C40)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A1C10A0)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A1C1710)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A1C18D0)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C1C20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SplitToningBehaviour_TypeDefinitionIndex = 49141;

	class SplitToningBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::SplitToningBehaviour_Struct_2_2DFEB74E3D4B48CA _methodParm; // 0x18
		::System::Boolean enabled; // 0x4C
		::System::Boolean active_shadows; // 0x4D
		::System::Boolean use_shadows; // 0x4E
		::UnityEngine::Color shadows; // 0x50
		::System::Boolean active_highlights; // 0x60
		::System::Boolean use_highlights; // 0x61
		::UnityEngine::Color highlights; // 0x64
		::System::Boolean active_balance; // 0x74
		::System::Boolean use_balance; // 0x75
		::System::Single balance; // 0x78
		::UnityEngine::Rendering::Universal::SplitToning* _SplitToning; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_3C37862761792B91()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_3C37862761792B91_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::SplitToning* Method_4_9EB2C6C4DF745A43(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::SplitToning*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_9EB2C6C4DF745A43_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
