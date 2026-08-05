#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_23;
class Class_3_4666E61F66433B1E_4;
namespace System { class Action; }

#define MOLEMOLE_UIGACHAWIDGETCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA7EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaWidgetContextBase_TypeDefinitionIndex = 65336;

	class UIGachaWidgetContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_4666E61F66433B1E_4* Gacha; // 0x28
		::System::Action* clickPreview; // 0x30
		::Class_0_16E4307DCC419505_23* UIConfig; // 0x38

		::System::Void _ctor(::Class_3_4666E61F66433B1E_4* gacha, ::Class_0_16E4307DCC419505_23* uiConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E_4*, ::Class_0_16E4307DCC419505_23*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWIDGETCONTEXTBASE__CTOR_OFFSET))(this, gacha, uiConfig);
		}
	};
}
