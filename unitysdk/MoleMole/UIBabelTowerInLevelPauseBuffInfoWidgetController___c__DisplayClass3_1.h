#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BabelTowerTemplateOverrideData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabelTowerInLevelPauseBuffInfoWidgetController___c__DisplayClass3_0; }
namespace System { class String; }

#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD7E40)
#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___C__DISPLAYCLASS3_1__REFRESHWIDGET_B__3_OFFSET UNITYSDK_OFFSET(0x14BD7E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelTowerInLevelPauseBuffInfoWidgetController___c__DisplayClass3_1_TypeDefinitionIndex = 69791;

	class UIBabelTowerInLevelPauseBuffInfoWidgetController___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::MoleMole::UIBabelTowerInLevelPauseBuffInfoWidgetController___c__DisplayClass3_0* CS___8__locals1; // 0x10
		::MoleMole::BabelTowerTemplateOverrideData overideTemplate; // 0x18
		::System::Int32 buffid; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshWidget_b__3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___C__DISPLAYCLASS3_1__REFRESHWIDGET_B__3_OFFSET))(this);
		}
	};
}
