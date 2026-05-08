#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_RECORDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE2750)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleCommonRecordPopWindowController_RecordInfo_TypeDefinitionIndex = 72806;

	class UIActivityBattleCommonRecordPopWindowController_RecordInfo : public ::System::Object
	{
	public:
		::System::String* valueStr; // 0x10
		::System::String* descKey; // 0x18
		::System::String* nameKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_RECORDINFO__CTOR_OFFSET))(this);
		}
	};
}
