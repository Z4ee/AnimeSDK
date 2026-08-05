#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGMINIBUFFROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x160F32A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingMiniBuffRowWidgetController_Context_TypeDefinitionIndex = 83926;

	class UISummerTideTreasureSellingMiniBuffRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnClickBuff; // 0x28
		::System::Int32 BuffConfigId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGMINIBUFFROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
