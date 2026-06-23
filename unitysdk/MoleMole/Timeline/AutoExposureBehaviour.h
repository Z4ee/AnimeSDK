#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AutoExposureBehaviour_Struct_2_52AD02145F5FCE36_30.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class AutoExposure; }

#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1817D0C0)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x1817D850)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1817E810)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x1817E7F0)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_9C5D24A8F010A8AB_OFFSET UNITYSDK_OFFSET(0x1817D380)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x1817E800)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x1817E7E0)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1817D770)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1817E210)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1817E400)
#define MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1817E7A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int AutoExposureBehaviour_TypeDefinitionIndex = 72551;

	class AutoExposureBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::AutoExposureBehaviour_Struct_2_52AD02145F5FCE36_30 _methodParm; // 0x18
		::System::Boolean enabled; // 0x50
		::System::Boolean active_Filtering; // 0x51
		::System::Boolean use_Filtering; // 0x52
		::UnityEngine::Vector2 Filtering; // 0x54
		::System::Boolean active_LuminanceRange; // 0x5C
		::System::Boolean use_LuminanceRange; // 0x5D
		::UnityEngine::Vector2 LuminanceRange; // 0x60
		::System::Boolean active_ExposureCompensation; // 0x68
		::System::Boolean use_ExposureCompensation; // 0x69
		::System::Single ExposureCompensation; // 0x6C
		::System::Boolean active_ProgressiveEyeAdaptation; // 0x70
		::System::Boolean use_ProgressiveEyeAdaptation; // 0x71
		::System::Boolean ProgressiveEyeAdaptation; // 0x72
		::System::Boolean active_SpeedUp; // 0x73
		::System::Boolean use_SpeedUp; // 0x74
		::System::Single SpeedUp; // 0x78
		::System::Boolean active_SpeedDown; // 0x7C
		::System::Boolean use_SpeedDown; // 0x7D
		::System::Single SpeedDown; // 0x80
		::UnityEngine::Rendering::Universal::AutoExposure* _AutoExposure; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::AutoExposure* Method_4_9C5D24A8F010A8AB(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::AutoExposure*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOEXPOSUREBEHAVIOUR_METHOD_4_9C5D24A8F010A8AB_OFFSET))(this, a1);
		}
	};
}
