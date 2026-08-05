#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F9371E17A075FFBB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_4FD593C62220B85A;
class Class_2_1824EF69C8E376A3;
class Class_2_3BB4FDB082E23A99;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_QUICKEDITORBATTLETEAMOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x173A16E0)

namespace MoleMole
{
	inline static constexpr unsigned int QuickEditorBattleTeamOption_TypeDefinitionIndex = 51405;

	class QuickEditorBattleTeamOption : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_3BB4FDB082E23A99*>* buddyDataList; // 0x28
		::System::Action_1<::Class_1_4FD593C62220B85A*>* onConfirmCallback; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* historyTeam; // 0x38
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* avatarItemList; // 0x40
		::System::UInt32 monsterID; // 0x48
		::System::Int32 questID; // 0x4C
		::Enum_3_F9371E17A075FFBB displayMode; // 0x50
		::System::Int32 hardCoreBossModeId; // 0x54
		::System::Boolean useHardStyleBackground; // 0x58
		::System::Boolean isOpenBuddy; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKEDITORBATTLETEAMOPTION__CTOR_OFFSET))(this);
		}
	};
}
