#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_F8EB4D9464ADCCA1;

#define MOLEMOLE_UIACTIVITYBATTLEYCLBOSSLISTROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A329D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLBossListRowWidgetController_RowData_TypeDefinitionIndex = 55089;

	class UIActivityBattleYCLBossListRowWidgetController_RowData : public ::System::Object
	{
	public:
		::Class_2_F8EB4D9464ADCCA1* monsterConfig; // 0x10
		::System::Nullable_1<::System::Single> perfectWidget; // 0x18
		::System::Int32 monsterLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLBOSSLISTROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET))(this);
		}
	};
}
