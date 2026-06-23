#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattleInfoWidgetControllerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1685EC66FBD28897;
class Class_2_79AE422BA06F6D26_244;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_CREATECHALLENGEVIEW_OFFSET UNITYSDK_OFFSET(0x16BE2AC0)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET UNITYSDK_OFFSET(0x16BE2FD0)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET UNITYSDK_OFFSET(0x16BE31E0)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x16BE2A10)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16BE2ED0)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16BE2A60)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE3500)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x16BE3510)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16BE35A0)
#define MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16BE3670)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDoubleEliteInfoWidgetController_TypeDefinitionIndex = 76157;

	class UIInLevelDoubleEliteInfoWidgetController : public ::MoleMole::UIBattleInfoWidgetControllerBase
	{
	public:
		::Class_2_79AE422BA06F6D26_244* _view; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void CreateChallengeView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_CREATECHALLENGEVIEW_OFFSET))(this);
		}

		::System::Void FillCardList(::System::Collections::Generic::List_1<::System::Int32>* cardList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET))(this, cardList);
		}

		::System::Void FillRewardMap(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* rewardMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET))(this, rewardMap);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> __base_GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOUBLEELITEINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
