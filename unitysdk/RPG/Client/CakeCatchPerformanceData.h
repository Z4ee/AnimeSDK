#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchCatData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class CakePerformanceConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB474D50)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB476360)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETACTORCATDATALIST_OFFSET UNITYSDK_OFFSET(0xB4763A0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETLOCALAVAILABLECATDATALIST_OFFSET UNITYSDK_OFFSET(0xB4765D0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETREWARDITEMDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB4768B0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ACTORIDS_OFFSET UNITYSDK_OFFSET(0xB476520)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_CANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xB476E40)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB476C10)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB476C30)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xB476A50)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB476CB0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCENAME_OFFSET UNITYSDK_OFFSET(0xB476D60)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_QUESTDATA_OFFSET UNITYSDK_OFFSET(0xB4736A0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB476C50)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_ISUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0xB4739A0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SETUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0xB476AF0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SETUNLOCK_OFFSET UNITYSDK_OFFSET(0xB474F70)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB476C20)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB476C40)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_TRYTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xB476970)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB476350)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchPerformanceData_TypeDefinitionIndex = 58933;

	class CakeCatchPerformanceData : public ::System::Object
	{
	public:
		::System::Boolean _IsUnlocked_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeCatchPerformanceData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeCatchPerformanceData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SETUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetActorCatDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETACTORCATDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetLocalAvailableCatDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETLOCALAVAILABLECATDATALIST_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* GetRewardItemDisplayData()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETREWARDITEMDISPLAYDATA_OFFSET))(this);
		}

		::System::Void TryTakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_TRYTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean IsUnlockStatusSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_ISUNLOCKSTATUSSEEN_OFFSET))(this);
		}

		::System::Void SetUnlockStatusSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SETUNLOCKSTATUSSEEN_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ActorIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ACTORIDS_OFFSET))(this);
		}

		::System::UInt32 get_PerformanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCEID_OFFSET))(this);
		}

		::System::String* get_PerformanceImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCEIMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_PerformanceName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCENAME_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_QuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_QUESTDATA_OFFSET))(this);
		}

		::System::Boolean get_CanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_CANTAKEREWARD_OFFSET))(this);
		}

		::RPG::GameCore::CakePerformanceConfigRow* get__Row()
		{
			return ((::RPG::GameCore::CakePerformanceConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET__ROW_OFFSET))(this);
		}
	};
}
