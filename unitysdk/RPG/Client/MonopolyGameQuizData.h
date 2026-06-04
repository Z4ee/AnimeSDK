#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_626;
class Class_1_E577B5580A99D425_9;
namespace RPG::GameCore { class MonopolyQuizConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKCANDIDATEPLAYERS_OFFSET UNITYSDK_OFFSET(0xC173C30)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKDOINGPLAYER_OFFSET UNITYSDK_OFFSET(0xC172B90)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC1743A0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_QUIZTASKIDS_OFFSET UNITYSDK_OFFSET(0xC172AF0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_REMAINTURN_OFFSET UNITYSDK_OFFSET(0xC1743E0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC1743C0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISPLAYERDOINGTASK_OFFSET UNITYSDK_OFFSET(0xC174340)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISTASKDOING_OFFSET UNITYSDK_OFFSET(0xC1742E0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC1743B0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_REMAINTURN_OFFSET UNITYSDK_OFFSET(0xC1743F0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xC1743D0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCREMAINTURN_OFFSET UNITYSDK_OFFSET(0xC172580)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCTASKINFO_OFFSET UNITYSDK_OFFSET(0xC172210)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC1732D0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC1736A0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA__GETRANDOMID_OFFSET UNITYSDK_OFFSET(0xC174220)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameQuizData_TypeDefinitionIndex = 61960;

	class MonopolyGameQuizData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TaskDoingPlayers; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _AllCandidatePlayerIDs; // 0x18
		::RPG::GameCore::MonopolyQuizConfigRow* _Row_k__BackingField; // 0x20
		::System::UInt32 _RemainTurn_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_E577B5580A99D425_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncRemainTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCREMAINTURN_OFFSET))(this, a1);
		}

		::System::Void SyncTaskInfo(::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_626*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_626*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCTASKINFO_OFFSET))(this, a1);
		}

		::System::UInt32 GetTaskDoingPlayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKDOINGPLAYER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTaskCandidatePlayers(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKCANDIDATEPLAYERS_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTaskDoing(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISTASKDOING_OFFSET))(this, a1);
		}

		::System::Boolean IsPlayerDoingTask(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISPLAYERDOINGTASK_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRandomID(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA__GETRANDOMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyQuizConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonopolyQuizConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonopolyQuizConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonopolyQuizConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_QuizTaskIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_QUIZTASKIDS_OFFSET))(this);
		}

		::System::UInt32 get_RemainTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_REMAINTURN_OFFSET))(this);
		}

		::System::Void set_RemainTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_REMAINTURN_OFFSET))(this, a1);
		}
	};
}
