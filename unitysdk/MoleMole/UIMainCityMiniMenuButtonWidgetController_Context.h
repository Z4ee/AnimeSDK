#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIMainCityMiniMenuWidgetController_EOperateType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMAINCITYMINIMENUBUTTONWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150F4620)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMiniMenuButtonWidgetController_Context_TypeDefinitionIndex = 38593;

	class UIMainCityMiniMenuButtonWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::System::Boolean>* IsFoldOut; // 0x28
		::System::Func_2<::MoleMole::UIMainCityMiniMenuWidgetController_EOperateType, ::System::Boolean>* ExIsBlockInput; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUBUTTONWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
