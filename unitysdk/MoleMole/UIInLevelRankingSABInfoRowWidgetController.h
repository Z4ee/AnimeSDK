#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BD9BD7E290475B28.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_A26009A270D71B3D;
class Class_2_EA00FF79749FF75E;
namespace MoleMole { class UICommonTimeCoolDownWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelRankingSABInfoRowConfig; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_DELAYCLOSE_OFFSET UNITYSDK_OFFSET(0x169919F0)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_GET_ISBUSYING_OFFSET UNITYSDK_OFFSET(0x16991FE0)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONCHALLENGEUPDATE_OFFSET UNITYSDK_OFFSET(0x16991BA0)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16991240)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x169912D0)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16991320)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16990E30)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16990E90)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_PLAYCLOSE_OFFSET UNITYSDK_OFFSET(0x16991A70)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_PLAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x169917A0)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_REGISTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x16991860)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_REPLAY_OFFSET UNITYSDK_OFFSET(0x16991650)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_SETICONTYPE_OFFSET UNITYSDK_OFFSET(0x16991120)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x169913A0)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16992060)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER__DELAYCLOSE_B__22_0_OFFSET UNITYSDK_OFFSET(0x16992450)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER__GETSTAYDURATION_OFFSET UNITYSDK_OFFSET(0x16991460)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER__REGISTERCHALLENGE_B__21_0_OFFSET UNITYSDK_OFFSET(0x169920C0)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16992460)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x169924F0)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16992500)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16992590)
#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16992620)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRankingSABInfoRowWidgetController_TypeDefinitionIndex = 41628;

	class UIInLevelRankingSABInfoRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_EA00FF79749FF75E* _view; // 0x2C0
		::System::Int32 ListenChallengeId; // 0x2C8
		::Enum_3_BD9BD7E290475B28 _iconType; // 0x2CC
		::MoleMole::UIInLevelRankingSABInfoRowConfig* _config; // 0x2D0
		::MoleMole::UICommonTimeCoolDownWidgetController* SwitchTeamBattleTime; // 0x2D8
		::System::Boolean isInReplay; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::UIInLevelRankingSABInfoRowWidgetController* SetText(::System::String* text)
		{
			return ((::MoleMole::UIInLevelRankingSABInfoRowWidgetController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetIconType(::Enum_3_BD9BD7E290475B28 iconType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_BD9BD7E290475B28))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_SETICONTYPE_OFFSET))(this, iconType);
		}

		::System::Single _GetStayDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER__GETSTAYDURATION_OFFSET))(this);
		}

		::System::Void Replay(::System::Action* finish, ::System::Boolean hasDuration, ::System::Action* fadeInFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_REPLAY_OFFSET))(this, finish, hasDuration, fadeInFinish);
		}

		::System::Void PlayComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_PLAYCOMPLETE_OFFSET))(this);
		}

		::System::Void RegisterChallenge(::System::Int32 challengeId, ::System::Single initDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_REGISTERCHALLENGE_OFFSET))(this, challengeId, initDuration);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* DelayClose()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_DELAYCLOSE_OFFSET))(this);
		}

		::System::Void PlayClose(::System::Action* finish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_PLAYCLOSE_OFFSET))(this, finish);
		}

		::System::Void OnChallengeUpdate(::Class_1_A26009A270D71B3D* challengeItem, ::System::Single currentTime, ::System::Single totalTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A26009A270D71B3D*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_ONCHALLENGEUPDATE_OFFSET))(this, challengeItem, currentTime, totalTime);
		}

		::System::Boolean get_IsBusying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER_GET_ISBUSYING_OFFSET))(this);
		}

		::System::Void _RegisterChallenge_b__21_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER__REGISTERCHALLENGE_B__21_0_OFFSET))(this, args);
		}

		::System::Void _DelayClose_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER__DELAYCLOSE_B__22_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
