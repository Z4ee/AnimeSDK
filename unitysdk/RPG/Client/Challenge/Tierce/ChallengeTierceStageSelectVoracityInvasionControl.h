#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectVoracityInvasionViewModel; }
namespace System { class String; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_GET_PRIVATEISTIERCE_OFFSET UNITYSDK_OFFSET(0xCA17A50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_GET_PRIVATEVORACITYINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xCA17B70)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xCA17950)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_SET_PRIVATEISTIERCE_OFFSET UNITYSDK_OFFSET(0xCA17A90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_SET_PRIVATEVORACITYINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xCA17BB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xCA17A00)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCA18670)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCA17E50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL__REFRESHDIFFTAGSTATE_OFFSET UNITYSDK_OFFSET(0xCA17DA0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL__REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xCA17AE0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectVoracityInvasionControl_TypeDefinitionIndex = 80232;

	class ChallengeTierceStageSelectVoracityInvasionControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* _TEXT_ID_INVASION_LEVEL; // 0x0
		// static const ::System::String* _STATE_NORMAL; // 0x0
		// static const ::System::String* _STATE_NORMAL_TIERCE; // 0x0
		// static const ::System::String* _STATE_TIERCE; // 0x0
		// static const ::System::String* _STATE_VORACITY_INVASION; // 0x0
		// static const ::System::String* _STATE_LEVEL_PREFIX; // 0x0
		::RPG::Client::UIStateCtrl* _BgEffectStateCtrl; // 0x38
		::RPG::Client::UIStateCtrl* _DiffTagStateCtrl; // 0x40
		::RPG::Client::UIStateCtrl* _VoracityInvasionLevelStateCtrl; // 0x48
		::RPG::Client::LocalizedText* _TextInvasionLevel; // 0x50
		::RPG::Client::AnimatorButton* _BtnTagItem; // 0x58
		::System::Boolean _IsTierce; // 0x60
		::System::Int32 _VoracityInvasionLevel; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectVoracityInvasionViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectVoracityInvasionViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectVoracityInvasionViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectVoracityInvasionViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_PrivateIsTierce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_GET_PRIVATEISTIERCE_OFFSET))(this);
		}

		::System::Void set_PrivateIsTierce(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_SET_PRIVATEISTIERCE_OFFSET))(this, a1);
		}

		::System::Int32 get_PrivateVoracityInvasionLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_GET_PRIVATEVORACITYINVASIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PrivateVoracityInvasionLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL_SET_PRIVATEVORACITYINVASIONLEVEL_OFFSET))(this, a1);
		}

		::System::Void _RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL__REFRESHSTATE_OFFSET))(this);
		}

		::System::Void _RefreshDiffTagState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL__REFRESHDIFFTAGSTATE_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
