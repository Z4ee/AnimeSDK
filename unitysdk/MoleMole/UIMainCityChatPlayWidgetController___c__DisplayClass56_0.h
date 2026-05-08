#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x148D7B90)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS56_0__SHOW3DMODEL_G__OPENMODELDIALOG_0_OFFSET UNITYSDK_OFFSET(0x148D7BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass56_0_TypeDefinitionIndex = 47777;

	class UIMainCityChatPlayWidgetController___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::GalGame::ModelConfigTemplateType templateType; // 0x18
		::System::Int32 modelID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show3DModel_g__OpenModelDialog_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS56_0__SHOW3DMODEL_G__OPENMODELDIALOG_0_OFFSET))(this);
		}
	};
}
