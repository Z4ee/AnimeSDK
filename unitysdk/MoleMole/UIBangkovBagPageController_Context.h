#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_12B29E9C1C324CDB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1710A4EE34865C78;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4BCA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController_Context_TypeDefinitionIndex = 59527;

	class UIBangkovBagPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC41950C_13<::Class_1_1710A4EE34865C78*>* SelectQuestData; // 0x28
		::System::Boolean IsNightMode; // 0x30
		::Enum_3_12B29E9C1C324CDB ShowPageType; // 0x34
		::System::Int32 SearchEntityRid; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
