#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_37CFE50712AC363B;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_GETANIMLENGTH_OFFSET UNITYSDK_OFFSET(0xB4D0240)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xB4CFAA0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_3456633D994FB6C5_OFFSET UNITYSDK_OFFSET(0xB4CFC30)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_61CD3163D493FB64_OFFSET UNITYSDK_OFFSET(0xB4CFB10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_A12ECC6B8CD31ED4_OFFSET UNITYSDK_OFFSET(0xB4D01B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_PLAYANIM_OFFSET UNITYSDK_OFFSET(0xB4D03C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xB4CFAB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D0490)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceResultStageControl_TypeDefinitionIndex = 74194;

	class ChallengeTierceResultStageControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_37CFE50712AC363B* Field_5_0; // 0x18
		::RPG::Client::LocalizedText* _TextName; // 0x20
		::RPG::Client::MonoPrefabSwitcher* _Switcher; // 0x28
		::System::String* _StateUsedRoundCount; // 0x30
		::System::String* _StateObtainedScore; // 0x38
		::System::String* _StateObtainedScoreDetailed; // 0x40
		::System::String* _StateNotPassed; // 0x48
		::RPG::Client::MonoPrefabSwitcher* _SwitcherScoreDetail; // 0x50
		::System::String* _StateHasActionScore; // 0x58
		::System::String* _StateNoActionScore; // 0x60
		::RPG::Client::LocalizedText* _TextResultContent; // 0x68
		::System::String* _StringNotPassed; // 0x70
		::RPG::Client::TextID _TextIDUsedRoundCount; // 0x78
		::RPG::Client::LocalizedText* _TextDamagedHpPercent; // 0x88
		::RPG::Client::LocalizedText* _TextDamageScore; // 0x90
		::RPG::Client::LocalizedText* _TextActionScore; // 0x98
		::UnityEngine::Animation* _Anim; // 0xA0
		::System::String* _AnimNameSuccessNotFinal; // 0xA8
		::System::String* _AnimNameSuccessFinal; // 0xB0
		::System::String* _AnimNameFailureInactive; // 0xB8
		::System::String* _AnimNameFailureActive; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_37CFE50712AC363B* get_Stage()
		{
			return ((::Class_1_37CFE50712AC363B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_GET_STAGE_OFFSET))(this);
		}

		::System::Void set_Stage(::Class_1_37CFE50712AC363B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_37CFE50712AC363B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_SET_STAGE_OFFSET))(this, a1);
		}

		::System::Void Method_5_61CD3163D493FB64(::Class_1_37CFE50712AC363B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_37CFE50712AC363B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_61CD3163D493FB64_OFFSET))(this, a1);
		}

		::System::Void Method_5_3456633D994FB6C5(::Class_1_37CFE50712AC363B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_37CFE50712AC363B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_3456633D994FB6C5_OFFSET))(this, a1);
		}

		::System::String* Method_5_A12ECC6B8CD31ED4(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_A12ECC6B8CD31ED4_OFFSET))(this, a1);
		}

		::System::Single GetAnimLength(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_GETANIMLENGTH_OFFSET))(this, a1);
		}

		::System::Void PlayAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_PLAYANIM_OFFSET))(this, a1);
		}
	};
}
