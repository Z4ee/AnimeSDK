#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_31;
class Class_1_D17272E82AE804C2_327;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateHouguDataItem; }
namespace RPG::Client { class FateHouguNormalSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHOUGUINFO_ADDHOUGU_OFFSET UNITYSDK_OFFSET(0x1A5B1720)
#define RPG_CLIENT_FATEHOUGUINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B13C0)
#define RPG_CLIENT_FATEHOUGUINFO_GET_ALLHOUGUS_OFFSET UNITYSDK_OFFSET(0x1A5B19E0)
#define RPG_CLIENT_FATEHOUGUINFO_GET_SELECTACTION_OFFSET UNITYSDK_OFFSET(0x1A5B1A20)
#define RPG_CLIENT_FATEHOUGUINFO_REMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0x1A5B1840)
#define RPG_CLIENT_FATEHOUGUINFO_SYNCPENDINGHOUGUSELECTACTION_OFFSET UNITYSDK_OFFSET(0x1A5B1610)
#define RPG_CLIENT_FATEHOUGUINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1A5B1450)
#define RPG_CLIENT_FATEHOUGUINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B1380)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguInfo_TypeDefinitionIndex = 61161;

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

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_327*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_327*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncPendingHouguSelectAction(::System::UInt32 a1, ::Class_1_075C34D03AFA1215_31* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_075C34D03AFA1215_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_SYNCPENDINGHOUGUSELECTACTION_OFFSET))(this, a1, a2);
		}

		::System::Void AddHougu(::Class_1_D17272E82AE804C2_327* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_327*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_ADDHOUGU_OFFSET))(this, a1);
		}

		::System::Void RemoveHougu(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_REMOVEHOUGU_OFFSET))(this, a1);
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
