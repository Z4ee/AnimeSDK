#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_ABEED6B2F204867D.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_RECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11E2F660)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBattleResultRecordRowWidgetController_RecordData_TypeDefinitionIndex = 49248;

	class UIVRBattleResultRecordRowWidgetController_RecordData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* nameKey; // 0x28
		::System::String* valueStr; // 0x30
		::Foundation::AssetPath efIconPath; // 0x38
		::Class_4_01F9221F8B6A9296_Enum_3_ABEED6B2F204867D medalRank; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_RECORDDATA__CTOR_OFFSET))(this);
		}
	};
}
