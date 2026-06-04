#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectTabControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectTabsViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xB4E1E20)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xB4E1EA0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E28E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB4E2010)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB4E1EF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB4E2970)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB4E2910)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectTabsControl_TypeDefinitionIndex = 74212;

	class ChallengeTierceStageSelectTabsControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _BtnLeft; // 0x38
		::RPG::Client::AnimatorButton* _BtnRight; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabControl*>* _Tabs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabsViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
