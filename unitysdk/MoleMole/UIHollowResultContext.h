#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D127AC1F7DA67EB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

class Class_3_5011144206928F3A;
namespace MoleMole { class UILevelResultPageContext; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIHOLLOWRESULTCONTEXT_ISITEMGETTIPSDUNGEONREWARDOVERFLOW_OFFSET UNITYSDK_OFFSET(0x16918A00)
#define MOLEMOLE_UIHOLLOWRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16918BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultContext_TypeDefinitionIndex = 73578;

	class UIHollowResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_5011144206928F3A* dungeonNotify; // 0x28
		::MoleMole::UILevelResultPageContext* levelPageContext; // 0x30
		::System::Nullable_1<::System::Int32> NumberResult; // 0x38
		::System::Int32 EditorTestFail; // 0x40
		::Enum_3_7D127AC1F7DA67EB type; // 0x44
		::System::Int32 missionId; // 0x48

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
