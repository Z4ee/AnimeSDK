#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9BA36423EA524C40_11;
class Class_1_D17272E82AE804C2_943;
class Class_1_D40936EF3BF54118_85;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class RogueMiracleData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLEINFO_ADDMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xDEF5B40)
#define RPG_CLIENT_ROGUEMIRACLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEF5370)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xDEF5ED0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xDEF6160)
#define RPG_CLIENT_ROGUEMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET UNITYSDK_OFFSET(0xDEF6100)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_1_OFFSET UNITYSDK_OFFSET(0xDEF56C0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_2_OFFSET UNITYSDK_OFFSET(0xDEF5910)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_OFFSET UNITYSDK_OFFSET(0xDEF5440)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xDEF5E30)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xDEF5D10)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xDEF5FF0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xDEF60B0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xDEF6180)
#define RPG_CLIENT_ROGUEMIRACLEINFO_SET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xDEF6170)
#define RPG_CLIENT_ROGUEMIRACLEINFO_SYNCACHIVEDMIRACLE_OFFSET UNITYSDK_OFFSET(0xDEF53E0)
#define RPG_CLIENT_ROGUEMIRACLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDEF5330)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleInfo_TypeDefinitionIndex = 67281;

	class RogueMiracleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* _AchivedMiracles_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAchivedMiracle(::Class_1_9BA36423EA524C40_11* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_SYNCACHIVEDMIRACLE_OFFSET))(this, a1);
		}

		::System::Void RefreshAchivedMiracle(::Class_1_D40936EF3BF54118_85* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_OFFSET))(this, a1);
		}

		::System::Void RefreshAchivedMiracle_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_943*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_943*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_1_OFFSET))(this, a1);
		}

		::System::Void RefreshAchivedMiracle_2(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_2_OFFSET))(this, a1);
		}

		::System::Void AddMiracleItem(::Class_1_D17272E82AE804C2_943* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_943*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_ADDMIRACLEITEM_OFFSET))(this, a1);
		}

		::System::Boolean RemoveMiracleItem(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshMiracleItem(::Class_1_D17272E82AE804C2_943* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_943*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET))(this, a1);
		}

		::System::Void ReplaceMiracleItem(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_943* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_943*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMiracleData* GetMiracleDataByMiracleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueMiracleInGame* RPG_Client_IRogueMiracleInfo_GetMiracleDataByMiracleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, a1);
		}

		::System::Boolean IsMiracleAchieved(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* get_AchivedMiracles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET))(this);
		}

		::System::Void set_AchivedMiracles(::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_SET_ACHIVEDMIRACLES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracleInGame*>* RPG_Client_IRogueMiracleInfo_get_AchivedMiracles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET))(this);
		}
	};
}
