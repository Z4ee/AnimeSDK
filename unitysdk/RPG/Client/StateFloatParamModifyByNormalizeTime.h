#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEFLOATPARAMMODIFYBYNORMALIZETIME_METHOD_4_15BEFE33A35D6EF8_OFFSET UNITYSDK_OFFSET(0x17B63EC0)
#define RPG_CLIENT_STATEFLOATPARAMMODIFYBYNORMALIZETIME_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x17B63F60)
#define RPG_CLIENT_STATEFLOATPARAMMODIFYBYNORMALIZETIME_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17B64140)
#define RPG_CLIENT_STATEFLOATPARAMMODIFYBYNORMALIZETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x17B642E0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateFloatParamModifyByNormalizeTime_TypeDefinitionIndex = 65754;

	class StateFloatParamModifyByNormalizeTime : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::String* FloatParamName; // 0x18
		::UnityEngine::AnimationCurve* LerpCurve; // 0x20
		::System::Single NormalizeEndValue; // 0x28
		::System::Single _StartValue; // 0x2C
		::System::Int32 _ParamHash; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEFLOATPARAMMODIFYBYNORMALIZETIME__CTOR_OFFSET))(this);
		}

		::System::Single Method_4_15BEFE33A35D6EF8(::UnityEngine::AnimatorStateInfo a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEFLOATPARAMMODIFYBYNORMALIZETIME_METHOD_4_15BEFE33A35D6EF8_OFFSET))(this, a1);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEFLOATPARAMMODIFYBYNORMALIZETIME_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEFLOATPARAMMODIFYBYNORMALIZETIME_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
