#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIABYSSS2ROLECHALLENGEDETAILWIDGETCONTROLLER_DETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x173CA090)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeDetailWidgetController_DetailData_TypeDefinitionIndex = 54922;

	class UIAbyssS2RoleChallengeDetailWidgetController_DetailData : public ::System::Object
	{
	public:
		::System::String* descKey; // 0x10
		::System::String* titleKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEDETAILWIDGETCONTROLLER_DETAILDATA__CTOR_OFFSET))(this);
		}
	};
}
