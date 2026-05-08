#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_E64AC454BBA9F160_Class_1_84D29A777CDEE069;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14301160)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueBrokenClueWidgetController_Context_TypeDefinitionIndex = 54241;

	class UICoopClueBrokenClueWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC41950C_12<::Class_2_E64AC454BBA9F160_Class_1_84D29A777CDEE069*>* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
