#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F76E966DD50AB39A;
namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBuffPresenterUIParam; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER_CREAT_OFFSET UNITYSDK_OFFSET(0x95911F0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_ONCLOSEOVERVIEWCLICK_OFFSET UNITYSDK_OFFSET(0x95914F0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_ONOPENOVERVIEWCLICK_OFFSET UNITYSDK_OFFSET(0x9591470)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x95912B0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9591280)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter_TypeDefinitionIndex = 58321;

	class ElationBuffPresenter : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _LineBottom; // 0x10
		::UnityEngine::UI::Text* _TotalDescText; // 0x18
		::UnityEngine::UI::Button* _CloseOverviewBtn; // 0x20
		::UnityEngine::UI::Text* _TotalPointText; // 0x28
		::RPG::Client::NodeListViewPanel_1<::Class_2_F76E966DD50AB39A*>* _ElationBuffList; // 0x30
		::UnityEngine::UI::Button* _OpenOverviewBtn; // 0x38

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
