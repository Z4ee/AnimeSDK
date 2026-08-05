#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D127AC1F7DA67EB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

class Class_3_AE02BC8285203464_10;
namespace MoleMole { class UILevelResultPageContext; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIHOLLOWRESULTCONTEXT_ISITEMGETTIPSDUNGEONREWARDOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1899B0A0)
#define MOLEMOLE_UIHOLLOWRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1899B270)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultContext_TypeDefinitionIndex = 62077;

	class UIHollowResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_AE02BC8285203464_10* dungeonNotify; // 0x28
		::MoleMole::UILevelResultPageContext* levelPageContext; // 0x30
		::Enum_3_7D127AC1F7DA67EB type; // 0x38
		::System::Int32 missionId; // 0x3C
		::System::Nullable_1<::System::Int32> NumberResult; // 0x40
		::System::Int32 EditorTestFail; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsItemGetTipsDungeonRewardOverflow(::System::EventArgs* onItemGetTipsArgs)
		{
			return ((::System::Boolean(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTCONTEXT_ISITEMGETTIPSDUNGEONREWARDOVERFLOW_OFFSET))(onItemGetTipsArgs);
		}
	};
}
