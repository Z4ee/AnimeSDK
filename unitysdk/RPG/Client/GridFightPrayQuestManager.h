#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_854;
class Class_1_0B17454AE311642E;
class Class_1_419A79D235B9417C_3;
class Class_1_455008579EB95638_6;
namespace RPG::Client { class GridFightPrayQuest; }
namespace RPG::Client { class GridFightPrayQuestEvent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_DRAINPENDINGCOMPLETEEVENTS_OFFSET UNITYSDK_OFFSET(0x1CA5C020)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_ENQUEUEPENDINGCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CA5BF90)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_GETQUEST_OFFSET UNITYSDK_OFFSET(0x1CA5C100)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_GET_HASPENDINGCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CA5BBF0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1CA5BC50)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0x1CA5C2D0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CA5C860)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER__ADDORUPDATEPRAYQUEST_OFFSET UNITYSDK_OFFSET(0x1CA5C6E0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA5C9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuestManager_TypeDefinitionIndex = 65150;

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

		::System::Void SetCollector(::Class_0_16E4307DCC419505_854* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_854*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SETCOLLECTOR_OFFSET))(this, a1);
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

		::System::Void _AddOrUpdatePrayQuest(::Class_1_419A79D235B9417C_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER__ADDORUPDATEPRAYQUEST_OFFSET))(this, a1);
		}
	};
}
