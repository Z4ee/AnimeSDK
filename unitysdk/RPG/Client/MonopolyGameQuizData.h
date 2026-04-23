#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_613;
class Class_1_E577B5580A99D425_6;
namespace RPG::GameCore { class MonopolyQuizConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKCANDIDATEPLAYERS_OFFSET UNITYSDK_OFFSET(0xAAA6FF0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKDOINGPLAYER_OFFSET UNITYSDK_OFFSET(0xAAA5E40)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xAAA76B0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_QUIZTASKIDS_OFFSET UNITYSDK_OFFSET(0xAAA5DA0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_REMAINTURN_OFFSET UNITYSDK_OFFSET(0xAAA76F0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xAAA76D0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISPLAYERDOINGTASK_OFFSET UNITYSDK_OFFSET(0xAAA7650)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISTASKDOING_OFFSET UNITYSDK_OFFSET(0xAAA75F0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xAAA76C0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_REMAINTURN_OFFSET UNITYSDK_OFFSET(0xAAA7700)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xAAA76E0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCREMAINTURN_OFFSET UNITYSDK_OFFSET(0xAAA58E0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCTASKINFO_OFFSET UNITYSDK_OFFSET(0xAAA55C0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAAA6600)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA69C0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA__GETRANDOMID_OFFSET UNITYSDK_OFFSET(0xAAA7550)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameQuizData_TypeDefinitionIndex = 61026;

	class MonopolyGameQuizData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TaskDoingPlayers; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _AllCandidatePlayerIDs; // 0x18
		::RPG::GameCore::MonopolyQuizConfigRow* _Row_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::UInt32 _RemainTurn_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void Sync(::Class_1_E577B5580A99D425_6* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void SyncRemainTurn(::System::UInt32 turn)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCREMAINTURN_OFFSET))(this, turn);
		}

		::System::Void SyncTaskInfo(::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_613*>* taskInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_613*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCTASKINFO_OFFSET))(this, taskInfos);
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
