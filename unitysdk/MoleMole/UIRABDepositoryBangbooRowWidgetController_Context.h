#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_370;
class Class_1_1EA8435E138F2E03;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1C500)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryBangbooRowWidgetController_Context_TypeDefinitionIndex = 46882;

	class UIRABDepositoryBangbooRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::MoleMole::UIRABDepositoryBangbooRowWidgetController_Context*, ::Class_1_1EA8435E138F2E03*>* GetNotificationNodeFunc; // 0x28
		::Class_0_16E4307DCC419505_370* BuddyData; // 0x30
		::System::Action_1<::MoleMole::UIRABDepositoryBangbooRowWidgetController_Context*>* OnClickAction; // 0x38
		::System::Int32 LeftNum; // 0x40
		::System::Int32 RightNum; // 0x44
		::System::Boolean ShowFinished; // 0x48
		::System::Boolean ShowInfo; // 0x49
		::System::Boolean ShowStar; // 0x4A
		::System::Int32 PoolIdIfFromPool; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
