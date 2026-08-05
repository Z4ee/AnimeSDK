#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_38.h"
#include "unitysdk/System/Object.h"

class Class_1_C4544004F26734BD_102;

#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0C100)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeRewardItemWidgetController_RowData_TypeDefinitionIndex = 64802;

	class UIBossChallengeRewardItemWidgetController_RowData : public ::System::Object
	{
	public:
		::Class_1_C4544004F26734BD_102* Template; // 0x10
		::System::Int32 ZoneID; // 0x18
		::Enum_3_DB663931210BBC27_38 PlayType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET))(this);
		}
	};
}
