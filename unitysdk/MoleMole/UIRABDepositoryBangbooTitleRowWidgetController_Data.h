#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RABDepositoryBangbooBaseData.h"

namespace System { class String; }

#define MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFB110)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryBangbooTitleRowWidgetController_Data_TypeDefinitionIndex = 51866;

	class UIRABDepositoryBangbooTitleRowWidgetController_Data : public ::MoleMole::RABDepositoryBangbooBaseData
	{
	public:
		::System::String* SubTitle; // 0x28
		::System::String* Title; // 0x30
		::System::Int32 LeftNum; // 0x38
		::System::Int32 RightNum; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
