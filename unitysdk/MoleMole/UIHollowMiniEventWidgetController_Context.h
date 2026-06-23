#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_A0A794221FA2FC25;
namespace MoleMole::Config { class HollowPopInteractInfo; }

#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x178156F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMiniEventWidgetController_Context_TypeDefinitionIndex = 44906;

	class UIHollowMiniEventWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_A0A794221FA2FC25* PopInteractNetInfo; // 0x28
		::MoleMole::Config::HollowPopInteractInfo* PopInteractAssetInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
