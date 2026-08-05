#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController___c__DisplayClass55_0; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_1__CTOR_OFFSET UNITYSDK_OFFSET(0x186335F0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_1__SHOWQUESTRECOMMEND_B__4_OFFSET UNITYSDK_OFFSET(0x18633600)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_1__SHOWQUESTRECOMMEND_B__5_OFFSET UNITYSDK_OFFSET(0x18633790)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_1__SHOWQUESTRECOMMEND_B__6_OFFSET UNITYSDK_OFFSET(0x186338E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass55_1_TypeDefinitionIndex = 77913;

	class UIMainCityChatPlayWidgetController___c__DisplayClass55_1 : public ::System::Object
	{
	public:
		::System::Action* __9__6; // 0x10
		::MoleMole::UIMainCityChatPlayWidgetController___c__DisplayClass55_0* CS___8__locals1; // 0x18
		::System::Int32 specialQuestId; // 0x20
		::System::Int32 index; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowQuestRecommend_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_1__SHOWQUESTRECOMMEND_B__4_OFFSET))(this);
		}

		::System::Void _ShowQuestRecommend_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_1__SHOWQUESTRECOMMEND_B__5_OFFSET))(this);
		}

		::System::Void _ShowQuestRecommend_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS55_1__SHOWQUESTRECOMMEND_B__6_OFFSET))(this);
		}
	};
}
