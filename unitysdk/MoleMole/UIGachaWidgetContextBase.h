#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_22;
class Class_3_AE02BC8285203464_17;
namespace System { class Action; }

#define MOLEMOLE_UIGACHAWIDGETCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCD860)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaWidgetContextBase_TypeDefinitionIndex = 55926;

	class UIGachaWidgetContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_22* UIConfig; // 0x28
		::Class_3_AE02BC8285203464_17* Gacha; // 0x30
		::System::Action* clickPreview; // 0x38

		::System::Void _ctor(::Class_3_AE02BC8285203464_17* gacha, ::Class_0_16E4307DCC419505_22* uiConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_17*, ::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWIDGETCONTEXTBASE__CTOR_OFFSET))(this, gacha, uiConfig);
		}
	};
}
