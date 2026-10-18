#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1465;
namespace RPG::Client { class ListView; }
namespace RPG::Client { class NavigationEntryShortcut; }
namespace RPG::UINavigation { class UINavigationChildActiveSwitch; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_RESBAR_TOPBARCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xDEB0680)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xDEB12E0)

namespace RPG::Client::ResBar
{
	inline static constexpr unsigned int TopBarControl_TypeDefinitionIndex = 79143;

	class TopBarControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1465*>
	{
	public:
		::RPG::Client::ListView* _ResourcesListView; // 0x70
		::RPG::Client::ListView* _FunctionButtonsListView; // 0x78
		::RPG::Client::NavigationEntryShortcut* _NavigationEntryShortcut; // 0x80
		::UnityEngine::Transform* _ShortcutNode; // 0x88
		::RPG::UINavigation::UINavigationChildActiveSwitch* _NavigationActiveSwitch; // 0x90
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1465*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1465*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
