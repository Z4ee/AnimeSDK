#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_701D0105B8E2A1C9;
namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1E9A0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_0__SHOWQUESTRECOMMEND_B__2_OFFSET UNITYSDK_OFFSET(0x18A1F540)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_0__SHOWQUESTRECOMMEND_B__3_OFFSET UNITYSDK_OFFSET(0x18A1F6D0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_0__SHOWQUESTRECOMMEND_G__OPENQUESTRECOMMEND_0_OFFSET UNITYSDK_OFFSET(0x18A1E9B0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_0__SHOWQUESTRECOMMEND_G__REFRESHQUESTLIST_1_OFFSET UNITYSDK_OFFSET(0x18A1ECE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass55_0_TypeDefinitionIndex = 77911;

	class UIMainCityChatPlayWidgetController___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* __9__3; // 0x10
		::Class_2_701D0105B8E2A1C9* node; // 0x18
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x20
		::System::Int32 selectedQuestId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowQuestRecommend_g__OpenQuestRecommend_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_0__SHOWQUESTRECOMMEND_G__OPENQUESTRECOMMEND_0_OFFSET))(this);
		}

		::System::Void _ShowQuestRecommend_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_0__SHOWQUESTRECOMMEND_B__2_OFFSET))(this);
		}

		::System::Void _ShowQuestRecommend_b__3(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_0__SHOWQUESTRECOMMEND_B__3_OFFSET))(this, _);
		}

		::System::Void _ShowQuestRecommend_g__RefreshQuestList_1(::System::Int32 animIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_0__SHOWQUESTRECOMMEND_G__REFRESHQUESTLIST_1_OFFSET))(this, animIndex);
		}
	};
}
