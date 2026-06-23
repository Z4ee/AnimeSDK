#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityBattleCommonRecordPopWindowController_RecordInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_RECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1864D760)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleCommonRecordPopWindowController_RecordData_TypeDefinitionIndex = 65932;

	class UIActivityBattleCommonRecordPopWindowController_RecordData : public ::System::Object
	{
	public:
		::System::String* noPassTimeTitle; // 0x10
		::System::String* gradeTitle; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordInfo*>* infoList; // 0x20
		::System::Int32 passTime; // 0x28
		::MoleMole::Level::RatingType ratingType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_RECORDDATA__CTOR_OFFSET))(this);
		}
	};
}
