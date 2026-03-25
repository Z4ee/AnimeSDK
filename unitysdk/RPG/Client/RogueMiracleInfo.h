#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43D95BDB5AB51D37_2;
class Class_1_C3C5C0E033C47270_14;
class Class_1_E7C4009BCC22497A_70;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class RogueMiracleData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLEINFO_ADDMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xA339CD0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA339700)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xA33A010)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xA33A2D0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET UNITYSDK_OFFSET(0xA33A270)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_1_OFFSET UNITYSDK_OFFSET(0xA339970)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_2_OFFSET UNITYSDK_OFFSET(0xA339B00)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_OFFSET UNITYSDK_OFFSET(0xA3397D0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xA339F70)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xA339E50)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xA33A160)
#define RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xA33A220)
#define RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xA33A2F0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_SET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xA33A2E0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_SYNCACHIVEDMIRACLE_OFFSET UNITYSDK_OFFSET(0xA339770)
#define RPG_CLIENT_ROGUEMIRACLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3396C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleInfo_TypeDefinitionIndex = 54798;

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

		::System::Void SyncAchivedMiracle(::Class_1_C3C5C0E033C47270_14* gameMiracleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_SYNCACHIVEDMIRACLE_OFFSET))(this, gameMiracleInfo);
		}

		::System::Void RefreshAchivedMiracle(::Class_1_E7C4009BCC22497A_70* miracleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_70*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_OFFSET))(this, miracleInfo);
		}

		::System::Void RefreshAchivedMiracle_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_43D95BDB5AB51D37_2*>* miracleList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_43D95BDB5AB51D37_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_1_OFFSET))(this, miracleList);
		}

		::System::Void RefreshAchivedMiracle_2(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* miracleList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_2_OFFSET))(this, miracleList);
		}

		::System::Void AddMiracleItem(::Class_1_43D95BDB5AB51D37_2* miracleProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43D95BDB5AB51D37_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_ADDMIRACLEITEM_OFFSET))(this, miracleProto);
		}

		::System::Boolean RemoveMiracleItem(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET))(this, miracleID);
		}

		::System::Void RefreshMiracleItem(::Class_1_43D95BDB5AB51D37_2* miralceProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43D95BDB5AB51D37_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET))(this, miralceProto);
		}

		::System::Void ReplaceMiracleItem(::System::UInt32 oldMiracleID, ::Class_1_43D95BDB5AB51D37_2* newMiracle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_43D95BDB5AB51D37_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET))(this, oldMiracleID, newMiracle);
		}

		::RPG::Client::RogueMiracleData* GetMiracleDataByMiracleID(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, miracleID);
		}

		::RPG::Client::IRogueMiracleInGame* RPG_Client_IRogueMiracleInfo_GetMiracleDataByMiracleID(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, miracleID);
		}

		::System::Boolean IsMiracleAchieved(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET))(this, miracleID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* get_AchivedMiracles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET))(this);
		}

		::System::Void set_AchivedMiracles(::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_SET_ACHIVEDMIRACLES_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracleInGame*>* RPG_Client_IRogueMiracleInfo_get_AchivedMiracles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET))(this);
		}
	};
}
