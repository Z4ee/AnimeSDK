#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_583;
namespace MoleMole { class UIStrategyGuideIconGuideItemWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISTRATEGYGUIDEICONGUIDEITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7C580)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideIconGuideItemWidgetControllerContext_TypeDefinitionIndex = 45109;

	class UIStrategyGuideIconGuideItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_583* Config; // 0x28
		::System::Action_1<::MoleMole::UIStrategyGuideIconGuideItemWidgetController*>* OnClick; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEICONGUIDEITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
