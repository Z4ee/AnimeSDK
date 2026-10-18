#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_953;
class Class_1_0B17454AE311642E;
class Class_1_455008579EB95638_6;
class Class_1_EA3716A61EF929AB_2;
namespace RPG::Client { class GridFightPrayQuest; }
namespace RPG::Client { class GridFightPrayQuestEvent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_DRAINPENDINGCOMPLETEEVENTS_OFFSET UNITYSDK_OFFSET(0xD1DBF70)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_ENQUEUEPENDINGCOMPLETE_OFFSET UNITYSDK_OFFSET(0xD1DBEE0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_GETQUEST_OFFSET UNITYSDK_OFFSET(0xD1DC060)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_GET_HASPENDINGCOMPLETE_OFFSET UNITYSDK_OFFSET(0xD1DBB40)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xD1DBBA0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xD1DC230)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD1DC7C0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER__ADDORUPDATEPRAYQUEST_OFFSET UNITYSDK_OFFSET(0xD1DC640)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD1DC920)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuestManager_TypeDefinitionIndex = 65090;

	class GridFightPrayQuestManager : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::Queue_1<::RPG::Client::GridFightPrayQuestEvent*>* _PendingCompleteEvents; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPrayQuest*>* _AllPrayQuestByID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasPendingComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_GET_HASPENDINGCOMPLETE_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_953* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_953*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void EnqueuePendingComplete(::RPG::Client::GridFightPrayQuestEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPrayQuestEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_ENQUEUEPENDINGCOMPLETE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::GridFightPrayQuestEvent*>* DrainPendingCompleteEvents()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::GridFightPrayQuestEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_DRAINPENDINGCOMPLETEEVENTS_OFFSET))(this);
		}

		::RPG::Client::GridFightPrayQuest* GetQuest(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPrayQuest*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_GETQUEST_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_455008579EB95638_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_0B17454AE311642E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0B17454AE311642E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_UPDATE_OFFSET))(this, a1);
		}

		::System::Void _AddOrUpdatePrayQuest(::Class_1_EA3716A61EF929AB_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA3716A61EF929AB_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER__ADDORUPDATEPRAYQUEST_OFFSET))(this, a1);
		}
	};
}
