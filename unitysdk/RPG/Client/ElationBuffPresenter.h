#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_29;
class Class_2_354AD1D19898E348;
namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBattleBuffViewData; }
namespace RPG::Client { class ElationBuffPresenterUIParam; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER_CREAT_OFFSET UNITYSDK_OFFSET(0xA2166C0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_ONCLOSEOVERVIEWCLICK_OFFSET UNITYSDK_OFFSET(0xA216ED0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_ONOPENOVERVIEWCLICK_OFFSET UNITYSDK_OFFSET(0xA216E50)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA2167C0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA216770)
#define RPG_CLIENT_ELATIONBUFFPRESENTER__MERGEBUFFDATABYLIFE_OFFSET UNITYSDK_OFFSET(0xA216960)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter_TypeDefinitionIndex = 65608;

	class ElationBuffPresenter : public ::System::Object
	{
	public:
		::RPG::Client::NodeListViewPanel_1<::Class_2_354AD1D19898E348*>* _ElationBuffList; // 0x10
		::UnityEngine::UI::Button* _CloseOverviewBtn; // 0x18
		::UnityEngine::Transform* _LineBottom; // 0x20
		::UnityEngine::UI::Button* _OpenOverviewBtn; // 0x28
		::UnityEngine::UI::Text* _TotalDescText; // 0x30
		::UnityEngine::UI::Text* _TotalPointText; // 0x38

		::System::Void _ctor(::RPG::Client::ElationBuffPresenterUIParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBuffPresenterUIParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER__CTOR_OFFSET))(this, param);
		}

		static ::RPG::Client::ElationBuffPresenter* Creat(::RPG::Client::ElationBuffPresenterUIParam* param)
		{
			return ((::RPG::Client::ElationBuffPresenter*(*)(::RPG::Client::ElationBuffPresenterUIParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_CREAT_OFFSET))(param);
		}

		::System::Void SetupView(::RPG::Client::ElationBattleBuffGroupViewData* elationBuffGroup)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBattleBuffGroupViewData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_SETUPVIEW_OFFSET))(this, elationBuffGroup);
		}

		::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_29*>* _MergeBuffDataByLife(::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* buffViewDatas)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_29*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER__MERGEBUFFDATABYLIFE_OFFSET))(this, buffViewDatas);
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
