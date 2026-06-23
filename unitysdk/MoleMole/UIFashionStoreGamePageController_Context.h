#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_264;

#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F16F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreGamePageController_Context_TypeDefinitionIndex = 80864;

	class UIFashionStoreGamePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_264* LevelConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
