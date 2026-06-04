#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectTabViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL_GET_PRIVATEBTNROOTCHECKED_OFFSET UNITYSDK_OFFSET(0xB4E0E40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xB4E0D70)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL_SET_PRIVATEBTNROOTCHECKED_OFFSET UNITYSDK_OFFSET(0xB4E0E50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xB4E0DF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E1A50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB4E0F60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB4E1AD0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectTabControl_TypeDefinitionIndex = 74210;

	class ChallengeTierceStageSelectTabControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _BtnRoot; // 0x38
		::System::Boolean _BtnRootChecked; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::LocalizedText*>* _Texts; // 0x48
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x50
		::System::String* _StateNotFinal; // 0x58
		::System::String* _StateFinal; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_PrivateBtnRootChecked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL_GET_PRIVATEBTNROOTCHECKED_OFFSET))(this);
		}

		::System::Void set_PrivateBtnRootChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL_SET_PRIVATEBTNROOTCHECKED_OFFSET))(this, a1);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
