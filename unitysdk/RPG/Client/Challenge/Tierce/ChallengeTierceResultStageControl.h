#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_37CFE50712AC363B;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_GETANIMLENGTH_OFFSET UNITYSDK_OFFSET(0x1C8701F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1C86FB10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_669256140B61F98F_OFFSET UNITYSDK_OFFSET(0x1C86FBB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_B39416EBE5B2947C_OFFSET UNITYSDK_OFFSET(0x1C86FC60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_C9830113AF7A4377_OFFSET UNITYSDK_OFFSET(0x1C870100)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x1C8702B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_SET_STAGE_OFFSET UNITYSDK_OFFSET(0x1C86FB50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C870310)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceResultStageControl_TypeDefinitionIndex = 80210;

	class ChallengeTierceResultStageControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_37CFE50712AC363B* PMCOAFPCDFM; // 0x18
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

		::System::Void Method_5_669256140B61F98F(::Class_1_37CFE50712AC363B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_37CFE50712AC363B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_669256140B61F98F_OFFSET))(this, a1);
		}

		::System::Void Method_5_B39416EBE5B2947C(::Class_1_37CFE50712AC363B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_37CFE50712AC363B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_B39416EBE5B2947C_OFFSET))(this, a1);
		}

		::System::String* Method_5_C9830113AF7A4377(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_METHOD_5_C9830113AF7A4377_OFFSET))(this, a1);
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
