#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ITEMDATA_ISLOCK_OFFSET UNITYSDK_OFFSET(0x15A25F70)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ITEMDATA_ISOPEN_OFFSET UNITYSDK_OFFSET(0x15A261A0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ITEMDATA_SHOWLOCKGENERALTIPS_OFFSET UNITYSDK_OFFSET(0x15A263D0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15A26450)

namespace MoleMole
{
	inline static constexpr unsigned int UIRopeCraftsmanQuestPageController_ItemData_TypeDefinitionIndex = 60788;

	class UIRopeCraftsmanQuestPageController_ItemData : public ::System::Object
	{
	public:
		::System::String* TaskDes; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* FinishDesc; // 0x20
		::System::Int32 TableId; // 0x28
		::System::Int32 QuestID; // 0x2C
		::System::Int32 GeneralLevelID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ITEMDATA_ISLOCK_OFFSET))(this);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ITEMDATA_ISOPEN_OFFSET))(this);
		}

		::System::Void ShowLockGeneralTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ITEMDATA_SHOWLOCKGENERALTIPS_OFFSET))(this);
		}
	};
}
