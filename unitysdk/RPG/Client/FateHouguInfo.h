#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_33;
class Class_1_D17272E82AE804C2_286;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateHouguDataItem; }
namespace RPG::Client { class FateHouguNormalSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHOUGUINFO_ADDHOUGU_OFFSET UNITYSDK_OFFSET(0xA352630)
#define RPG_CLIENT_FATEHOUGUINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3524B0)
#define RPG_CLIENT_FATEHOUGUINFO_GET_ALLHOUGUS_OFFSET UNITYSDK_OFFSET(0xA352890)
#define RPG_CLIENT_FATEHOUGUINFO_GET_SELECTACTION_OFFSET UNITYSDK_OFFSET(0xA3528A0)
#define RPG_CLIENT_FATEHOUGUINFO_REMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0xA3526F0)
#define RPG_CLIENT_FATEHOUGUINFO_SYNCPENDINGHOUGUSELECTACTION_OFFSET UNITYSDK_OFFSET(0xA352520)
#define RPG_CLIENT_FATEHOUGUINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA33CA60)
#define RPG_CLIENT_FATEHOUGUINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA33BAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguInfo_TypeDefinitionIndex = 58946;

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

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_286*>* protoHouguList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_286*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_SYNC_OFFSET))(this, protoHouguList);
		}

		::System::Void SyncPendingHouguSelectAction(::System::UInt32 actionID, ::Class_1_075C34D03AFA1215_33* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_075C34D03AFA1215_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_SYNCPENDINGHOUGUSELECTACTION_OFFSET))(this, actionID, proto);
		}

		::System::Void AddHougu(::Class_1_D17272E82AE804C2_286* protoHougu)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_286*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_ADDHOUGU_OFFSET))(this, protoHougu);
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
