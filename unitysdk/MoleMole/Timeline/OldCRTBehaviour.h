#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/OldCRTBehaviour_Struct_2_4D9DAE3E910E138B_1.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class OldCRT; }

#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x17960080)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x179613B0)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x179613A0)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_7EF65E486B2877FD_OFFSET UNITYSDK_OFFSET(0x179602A0)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x179613C0)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x17961390)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_BC76C3D43591A39D_OFFSET UNITYSDK_OFFSET(0x17960740)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17960690)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17960EA0)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x17961070)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17961350)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int OldCRTBehaviour_TypeDefinitionIndex = 67118;

	class OldCRTBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::OldCRTBehaviour_Struct_2_4D9DAE3E910E138B_1 _methodParm; // 0x18
		::System::Boolean enabled; // 0x48
		::System::Boolean active_pattern; // 0x49
		::System::Boolean use_pattern; // 0x4A
		::UnityEngine::Texture* pattern; // 0x50
		::System::Boolean active_tiling; // 0x58
		::System::Boolean use_tiling; // 0x59
		::UnityEngine::Vector2 tiling; // 0x5C
		::System::Boolean active_scanlineBrightness; // 0x64
		::System::Boolean use_scanlineBrightness; // 0x65
		::System::Single scanlineBrightness; // 0x68
		::System::Boolean active_fade; // 0x6C
		::System::Boolean use_fade; // 0x6D
		::System::Single fade; // 0x70
		::UnityEngine::Rendering::Universal::OldCRT* _OldCRT; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::OldCRT* Method_4_7EF65E486B2877FD(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::OldCRT*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_7EF65E486B2877FD_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_BC76C3D43591A39D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_METHOD_4_BC76C3D43591A39D_OFFSET))(this);
		}
	};
}
