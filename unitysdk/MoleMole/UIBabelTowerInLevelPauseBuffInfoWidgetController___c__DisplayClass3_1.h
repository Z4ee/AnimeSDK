#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BabelTowerTemplateOverrideData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabelTowerInLevelPauseBuffInfoWidgetController___c__DisplayClass3_0; }
namespace System { class String; }

#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12F4CC50)
#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___C__DISPLAYCLASS3_1__REFRESHWIDGET_B__3_OFFSET UNITYSDK_OFFSET(0x12F4CC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelTowerInLevelPauseBuffInfoWidgetController___c__DisplayClass3_1_TypeDefinitionIndex = 43395;

	class UIBabelTowerInLevelPauseBuffInfoWidgetController___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::MoleMole::BabelTowerTemplateOverrideData overideTemplate; // 0x10
		::MoleMole::UIBabelTowerInLevelPauseBuffInfoWidgetController___c__DisplayClass3_0* CS___8__locals1; // 0x78
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
