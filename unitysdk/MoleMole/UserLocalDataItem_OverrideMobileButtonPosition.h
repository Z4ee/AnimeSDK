#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_USERLOCALDATAITEM_OVERRIDEMOBILEBUTTONPOSITION_METHOD_1_10B2E41DFBEA7152_OFFSET UNITYSDK_OFFSET(0x126CD3D0)
#define MOLEMOLE_USERLOCALDATAITEM_OVERRIDEMOBILEBUTTONPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x126CD3C0)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_OverrideMobileButtonPosition_TypeDefinitionIndex = 78276;

	class UserLocalDataItem_OverrideMobileButtonPosition : public ::System::Object
	{
	public:
		::MoleMole::ConfigUICommon_Input_ButtonType buttonType; // 0x10
		::MoleMole::ConfigUICommon_Input_PositionType positionType; // 0x14
		::System::Int32 sizeLevel; // 0x18
		::System::Int32 xPosition; // 0x1C
		::System::Int32 yPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_OVERRIDEMOBILEBUTTONPOSITION__CTOR_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* Method_1_10B2E41DFBEA7152()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_OVERRIDEMOBILEBUTTONPOSITION_METHOD_1_10B2E41DFBEA7152_OFFSET))(this);
		}
	};
}
