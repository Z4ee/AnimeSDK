#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F76E966DD50AB39A;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x95915A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenterUIParam_TypeDefinitionIndex = 58323;

	class ElationBuffPresenterUIParam : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* CloseOverviewBtn; // 0x10
		::UnityEngine::UI::Text* TotalPointText; // 0x18
		::UnityEngine::Transform* LineBottom; // 0x20
		::UnityEngine::UI::Text* TotalDescText; // 0x28
		::RPG::Client::NodeListViewPanel_1<::Class_2_F76E966DD50AB39A*>* ElationBuffList; // 0x30
		::UnityEngine::UI::Button* OpenOverviewBtn; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM__CTOR_OFFSET))(this);
		}
	};
}
