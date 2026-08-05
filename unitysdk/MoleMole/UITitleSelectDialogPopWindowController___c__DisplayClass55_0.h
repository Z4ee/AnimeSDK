#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_466597060C7011BF;
class Class_2_208CC9941471731A_943;

#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1629FBF0)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__ONUPDATETITLEDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1629FC00)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleSelectDialogPopWindowController___c__DisplayClass55_0_TypeDefinitionIndex = 76226;

	class UITitleSelectDialogPopWindowController___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_943* variableTemplateExt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUpdateTitleData_b__0(::Class_1_466597060C7011BF* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_466597060C7011BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__ONUPDATETITLEDATA_B__0_OFFSET))(this, data);
		}
	};
}
