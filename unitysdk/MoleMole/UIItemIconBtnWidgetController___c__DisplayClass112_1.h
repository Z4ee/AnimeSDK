#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B1E761D184CCDAF;
namespace MoleMole { class UIItemIconBtnWidgetController___c__DisplayClass112_0; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS112_1__CTOR_OFFSET UNITYSDK_OFFSET(0x150E7A30)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS112_1__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x150E7A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass112_1_TypeDefinitionIndex = 76904;

	class UIItemIconBtnWidgetController___c__DisplayClass112_1 : public ::System::Object
	{
	public:
		::Class_2_3B1E761D184CCDAF* realItemData; // 0x10
		::MoleMole::UIItemIconBtnWidgetController___c__DisplayClass112_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS112_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS112_1__REFRESHVIEW_B__2_OFFSET))(this);
		}
	};
}
