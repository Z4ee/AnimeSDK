#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_29;
class Class_1_FA4F4A67B1C04320_277;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateHouguDataItem; }
namespace RPG::Client { class FateHouguNormalSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHOUGUINFO_ADDHOUGU_OFFSET UNITYSDK_OFFSET(0x9692BC0)
#define RPG_CLIENT_FATEHOUGUINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9692A40)
#define RPG_CLIENT_FATEHOUGUINFO_GET_ALLHOUGUS_OFFSET UNITYSDK_OFFSET(0x9692E20)
#define RPG_CLIENT_FATEHOUGUINFO_GET_SELECTACTION_OFFSET UNITYSDK_OFFSET(0x9692E30)
#define RPG_CLIENT_FATEHOUGUINFO_REMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0x9692C80)
#define RPG_CLIENT_FATEHOUGUINFO_SYNCPENDINGHOUGUSELECTACTION_OFFSET UNITYSDK_OFFSET(0x9692AB0)
#define RPG_CLIENT_FATEHOUGUINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x967D0C0)
#define RPG_CLIENT_FATEHOUGUINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x967C260)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguInfo_TypeDefinitionIndex = 51997;

	class FateHouguInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* _OwnedHougus; // 0x10
		::RPG::Client::FateHouguNormalSelectAction* _SelectAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_277*>* protoHouguList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_277*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_SYNC_OFFSET))(this, protoHouguList);
		}

		::System::Void SyncPendingHouguSelectAction(::System::UInt32 actionID, ::Class_1_6E708EAB438EC183_29* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_6E708EAB438EC183_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_SYNCPENDINGHOUGUSELECTACTION_OFFSET))(this, actionID, proto);
		}

		::System::Void AddHougu(::Class_1_FA4F4A67B1C04320_277* protoHougu)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_ADDHOUGU_OFFSET))(this, protoHougu);
		}

		::System::Void RemoveHougu(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_REMOVEHOUGU_OFFSET))(this, uniqueID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* get_AllHougus()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_GET_ALLHOUGUS_OFFSET))(this);
		}

		::RPG::Client::FateHouguNormalSelectAction* get_SelectAction()
		{
			return ((::RPG::Client::FateHouguNormalSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_GET_SELECTACTION_OFFSET))(this);
		}
	};
}
