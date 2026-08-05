#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_813;

#define MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D583F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreGamePageController_Context_TypeDefinitionIndex = 44168;

	class UIFashionStoreGamePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_813* LevelConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
