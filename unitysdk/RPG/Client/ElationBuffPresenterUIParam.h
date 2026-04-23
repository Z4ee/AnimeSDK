#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_354AD1D19898E348;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA217040)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenterUIParam_TypeDefinitionIndex = 65611;

	class ElationBuffPresenterUIParam : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* TotalDescText; // 0x10
		::UnityEngine::Transform* LineBottom; // 0x18
		::UnityEngine::UI::Button* CloseOverviewBtn; // 0x20
		::UnityEngine::UI::Text* TotalPointText; // 0x28
		::RPG::Client::NodeListViewPanel_1<::Class_2_354AD1D19898E348*>* ElationBuffList; // 0x30
		::UnityEngine::UI::Button* OpenOverviewBtn; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM__CTOR_OFFSET))(this);
		}
	};
}
