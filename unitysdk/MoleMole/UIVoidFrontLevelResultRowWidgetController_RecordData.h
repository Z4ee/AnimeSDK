#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_0AB5A84233BDA6F1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_RECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x149072B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontLevelResultRowWidgetController_RecordData_TypeDefinitionIndex = 72238;

	class UIVoidFrontLevelResultRowWidgetController_RecordData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* nameKey; // 0x28
		::System::String* valueStr; // 0x30
		::Class_4_01F9221F8B6A9296_Enum_3_0AB5A84233BDA6F1 medalRank; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_RECORDDATA__CTOR_OFFSET))(this);
		}
	};
}
