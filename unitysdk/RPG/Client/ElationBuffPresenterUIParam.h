#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2DB5DEF3EA4B57A8;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCD7A650)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenterUIParam_TypeDefinitionIndex = 71194;

	class ElationBuffPresenterUIParam : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* OpenOverviewBtn; // 0x10
		::UnityEngine::Transform* NodeMax; // 0x18
		::UnityEngine::UI::Text* TotalDescText; // 0x20
		::UnityEngine::Transform* LineBottom; // 0x28
		::UnityEngine::Transform* NodeDesc; // 0x30
		::UnityEngine::UI::Text* TotalPointText; // 0x38
		::UnityEngine::Transform* NodeMaxHint; // 0x40
		::RPG::Client::NodeListViewPanel_1<::Class_2_2DB5DEF3EA4B57A8*>* ElationBuffList; // 0x48
		::UnityEngine::UI::Button* CloseOverviewBtn; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM__CTOR_OFFSET))(this);
		}
	};
}
