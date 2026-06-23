#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RABDepositoryBangbooBaseData.h"

class Class_2_F68C1397F46993E4;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABDEPOSITORYBANGBOOLISTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18217960)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryBangbooListRowWidgetController_Data_TypeDefinitionIndex = 65955;

	class UIRABDepositoryBangbooListRowWidgetController_Data : public ::MoleMole::RABDepositoryBangbooBaseData
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_F68C1397F46993E4*>* BuddyDatas; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOLISTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
