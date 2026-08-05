#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_599476083E59B9DB;
class Class_3_C3F0E3B5AB5977AE_49;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVSTAGESHAREDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF8FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovStageShareDetailDialogPopWindowController_Context_TypeDefinitionIndex = 83969;

	class UIZenkovStageShareDetailDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_C3F0E3B5AB5977AE_49* WithdrawPoint; // 0x28
		::Class_3_599476083E59B9DB* Medal; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* Top3ExpensiveItem; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* AvatarList; // 0x40
		::System::Int32 DungeonId; // 0x48
		::System::Int32 ScoreValue; // 0x4C
		::System::Int64 Timestamp; // 0x50
		::System::Boolean IsMedalLocked; // 0x58
		::System::Boolean IsSelf; // 0x59
		::System::Int32 SeasonId; // 0x5C
		::System::Int32 TimeCost; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSTAGESHAREDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
