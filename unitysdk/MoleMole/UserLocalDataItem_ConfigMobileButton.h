#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_USERLOCALDATAITEM_CONFIGMOBILEBUTTON_METHOD_1_D5D789CEDB33DF97_OFFSET UNITYSDK_OFFSET(0x104281F0)
#define MOLEMOLE_USERLOCALDATAITEM_CONFIGMOBILEBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x104281E0)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_ConfigMobileButton_TypeDefinitionIndex = 70694;

	class UserLocalDataItem_ConfigMobileButton : public ::System::Object
	{
	public:
		::MoleMole::ConfigUICommon_Input_ButtonType buttonType; // 0x10
		::MoleMole::ConfigUICommon_Input_PositionType positionType; // 0x14
		::System::Int32 sizeLevel; // 0x18
		::System::Int32 xPosition; // 0x1C
		::System::Int32 yPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CONFIGMOBILEBUTTON__CTOR_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_ConfigMobileButton* Method_1_D5D789CEDB33DF97()
		{
			return ((::MoleMole::UserLocalDataItem_ConfigMobileButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CONFIGMOBILEBUTTON_METHOD_1_D5D789CEDB33DF97_OFFSET))(this);
		}
	};
}
