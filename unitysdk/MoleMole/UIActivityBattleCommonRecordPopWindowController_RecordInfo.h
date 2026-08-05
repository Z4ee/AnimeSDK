#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_RECORDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x196D6900)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleCommonRecordPopWindowController_RecordInfo_TypeDefinitionIndex = 71842;

	class UIActivityBattleCommonRecordPopWindowController_RecordInfo : public ::System::Object
	{
	public:
		::System::String* descKey; // 0x10
		::System::String* nameKey; // 0x18
		::System::String* valueStr; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_RECORDINFO__CTOR_OFFSET))(this);
		}
	};
}
