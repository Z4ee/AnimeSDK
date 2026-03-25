#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E577B5580A99D425_5;
class Class_1_FA4F4A67B1C04320_580;
namespace RPG::GameCore { class MonopolyQuizConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKCANDIDATEPLAYERS_OFFSET UNITYSDK_OFFSET(0x9D610E0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKDOINGPLAYER_OFFSET UNITYSDK_OFFSET(0x9D60030)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9D617A0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_QUIZTASKIDS_OFFSET UNITYSDK_OFFSET(0x9D5FF90)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_REMAINTURN_OFFSET UNITYSDK_OFFSET(0x9D617E0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9D617C0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISPLAYERDOINGTASK_OFFSET UNITYSDK_OFFSET(0x9D61740)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISTASKDOING_OFFSET UNITYSDK_OFFSET(0x9D616E0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9D617B0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_REMAINTURN_OFFSET UNITYSDK_OFFSET(0x9D617F0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9D617D0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCREMAINTURN_OFFSET UNITYSDK_OFFSET(0x9D5FAE0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCTASKINFO_OFFSET UNITYSDK_OFFSET(0x9D5F7C0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9D607F0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D60BB0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA__GETRANDOMID_OFFSET UNITYSDK_OFFSET(0x9D61640)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameQuizData_TypeDefinitionIndex = 53882;

	class MonopolyGameQuizData : public ::System::Object
	{
	public:
		::RPG::GameCore::MonopolyQuizConfigRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TaskDoingPlayers; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _AllCandidatePlayerIDs; // 0x20
		::System::UInt32 _RemainTurn_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void Sync(::Class_1_E577B5580A99D425_5* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void SyncRemainTurn(::System::UInt32 turn)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCREMAINTURN_OFFSET))(this, turn);
		}

		::System::Void SyncTaskInfo(::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_580*>* taskInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_580*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCTASKINFO_OFFSET))(this, taskInfos);
		}

		::System::UInt32 GetTaskDoingPlayer(::System::UInt32 taskID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKDOINGPLAYER_OFFSET))(this, taskID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTaskCandidatePlayers(::System::UInt32 taskID, ::System::Collections::Generic::List_1<::System::UInt32>* chosenIDs)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKCANDIDATEPLAYERS_OFFSET))(this, taskID, chosenIDs);
		}

		::System::Boolean IsTaskDoing(::System::UInt32 taskID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISTASKDOING_OFFSET))(this, taskID);
		}

		::System::Boolean IsPlayerDoingTask(::System::UInt32 playerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISPLAYERDOINGTASK_OFFSET))(this, playerID);
		}

		::System::UInt32 _GetRandomID(::System::Collections::Generic::List_1<::System::UInt32>* ids)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA__GETRANDOMID_OFFSET))(this, ids);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MonopolyQuizConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonopolyQuizConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonopolyQuizConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonopolyQuizConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_QuizTaskIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_QUIZTASKIDS_OFFSET))(this);
		}

		::System::UInt32 get_RemainTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_REMAINTURN_OFFSET))(this);
		}

		::System::Void set_RemainTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_REMAINTURN_OFFSET))(this, value);
		}
	};
}
