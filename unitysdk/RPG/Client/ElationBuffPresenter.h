#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_33;
class Class_2_2DB5DEF3EA4B57A8;
namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBattleBuffViewData; }
namespace RPG::Client { class ElationBuffPresenterUIParam; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER_CREAT_OFFSET UNITYSDK_OFFSET(0x1AC54620)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_ONCLOSEOVERVIEWCLICK_OFFSET UNITYSDK_OFFSET(0x1AC54FE0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_ONOPENOVERVIEWCLICK_OFFSET UNITYSDK_OFFSET(0x1AC54F60)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1AC54720)
#define RPG_CLIENT_ELATIONBUFFPRESENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC546D0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER__MERGEBUFFDATABYLIFE_OFFSET UNITYSDK_OFFSET(0x1AC54940)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter_TypeDefinitionIndex = 71151;

	class ElationBuffPresenter : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _LineBottom; // 0x10
		::UnityEngine::UI::Text* _TotalPointText; // 0x18
		::UnityEngine::UI::Text* _TotalDescText; // 0x20
		::UnityEngine::UI::Button* _OpenOverviewBtn; // 0x28
		::UnityEngine::UI::Button* _CloseOverviewBtn; // 0x30
		::RPG::Client::NodeListViewPanel_1<::Class_2_2DB5DEF3EA4B57A8*>* _ElationBuffList; // 0x38
		::UnityEngine::Transform* _NodeDesc; // 0x40

		::System::Void _ctor(::RPG::Client::ElationBuffPresenterUIParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBuffPresenterUIParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ElationBuffPresenter* Creat(::RPG::Client::ElationBuffPresenterUIParam* a1)
		{
			return ((::RPG::Client::ElationBuffPresenter*(*)(::RPG::Client::ElationBuffPresenterUIParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_CREAT_OFFSET))(a1);
		}

		::System::Void SetupView(::RPG::Client::ElationBattleBuffGroupViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBattleBuffGroupViewData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_SETUPVIEW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_33*>* _MergeBuffDataByLife(::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* a1, ::System::Single a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_33*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER__MERGEBUFFDATABYLIFE_OFFSET))(this, a1, a2);
		}

		::System::Void OnOpenOverviewClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_ONOPENOVERVIEWCLICK_OFFSET))(this);
		}

		::System::Void OnCloseOverviewClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_ONCLOSEOVERVIEWCLICK_OFFSET))(this);
		}
	};
}
