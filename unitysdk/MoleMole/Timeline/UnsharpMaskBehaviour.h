#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/UnsharpMaskBehaviour_Struct_2_52AD02145F5FCE36_26.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class UnsharpMask; }

#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x15B68920)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_12EA49035F00FC4D_OFFSET UNITYSDK_OFFSET(0x15B68B70)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x15B69030)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15B6A0B0)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x15B6A090)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x15B6A0A0)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x15B6A080)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15B68F60)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15B69B10)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15B69CF0)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6A060)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int UnsharpMaskBehaviour_TypeDefinitionIndex = 67531;

	class UnsharpMaskBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::UnsharpMaskBehaviour_Struct_2_52AD02145F5FCE36_26 _methodParm; // 0x18
		::System::Boolean enabled; // 0x40
		::System::Boolean active_enable; // 0x41
		::System::Boolean use_enable; // 0x42
		::System::Boolean enable; // 0x43
		::System::Boolean active_radius; // 0x44
		::System::Boolean use_radius; // 0x45
		::System::Single radius; // 0x48
		::System::Boolean active_amount; // 0x4C
		::System::Boolean use_amount; // 0x4D
		::System::Single amount; // 0x50
		::System::Boolean active_sampleCount; // 0x54
		::System::Boolean use_sampleCount; // 0x55
		::System::Int32 sampleCount; // 0x58
		::System::Boolean active_threshold; // 0x5C
		::System::Boolean use_threshold; // 0x5D
		::System::Single threshold; // 0x60
		::System::Boolean active_debugMode; // 0x64
		::System::Boolean use_debugMode; // 0x65
		::System::Boolean debugMode; // 0x66
		::UnityEngine::Rendering::Universal::UnsharpMask* _UnsharpMask; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::UnsharpMask* Method_4_12EA49035F00FC4D(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::UnsharpMask*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_METHOD_4_12EA49035F00FC4D_OFFSET))(this, a1);
		}
	};
}
