#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PartialBlurBehaviour_Struct_2_52AD02145F5FCE36_35.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }

#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x179617A0)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x17961E80)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x17962D60)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x17962D80)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_8B5B005CCA79FEBC_OFFSET UNITYSDK_OFFSET(0x179619D0)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x17962D90)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x17962D70)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17961DC0)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17962840)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x17962A10)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17962D40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PartialBlurBehaviour_TypeDefinitionIndex = 85405;

	class PartialBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::PartialBlurBehaviour_Struct_2_52AD02145F5FCE36_35 _methodParm; // 0x18
		::System::Boolean enabled; // 0x40
		::System::Boolean active_downScaleFactor; // 0x41
		::System::Boolean use_downScaleFactor; // 0x42
		::System::Int32 downScaleFactor; // 0x44
		::System::Boolean active_radius; // 0x48
		::System::Boolean use_radius; // 0x49
		::System::Single radius; // 0x4C
		::System::Boolean active_standardDeviation; // 0x50
		::System::Boolean use_standardDeviation; // 0x51
		::System::Single standardDeviation; // 0x54
		::System::Boolean active_sampleCountMain; // 0x58
		::System::Boolean use_sampleCountMain; // 0x59
		::System::Int32 sampleCountMain; // 0x5C
		::System::Boolean active_canBeDisabledByGlobalConfig; // 0x60
		::System::Boolean use_canBeDisabledByGlobalConfig; // 0x61
		::System::Boolean canBeDisabledByGlobalConfig; // 0x62
		::UnityEngine::Rendering::Universal::PartialBlur* _PartialBlur; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::PartialBlur* Method_4_8B5B005CCA79FEBC(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::PartialBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_8B5B005CCA79FEBC_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
