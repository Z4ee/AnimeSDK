#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_71.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_36039D62266A61A1;
class Class_1_DBE1913405A6C120_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournClassicGameLevelRoom; }
namespace RPG::Client { class IRogueTournGameLevelRoom; }
namespace RPG::Client { class IRogueTournGameLevelRoomLinear; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA383350)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xA383F60)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_CURROOM_OFFSET UNITYSDK_OFFSET(0xA384320)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA383FB0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xA384280)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_NUMTEXT_OFFSET UNITYSDK_OFFSET(0xA3842A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xA3842B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_ROOMS_OFFSET UNITYSDK_OFFSET(0xA384300)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA384290)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYERLINEAR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA384080)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYER_GET_CURROOM_OFFSET UNITYSDK_OFFSET(0xA3843C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYER_GET_ROOMS_OFFSET UNITYSDK_OFFSET(0xA384310)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA382F50)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__CREATEROOMBYPROTO_OFFSET UNITYSDK_OFFSET(0xA3840D0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA382F00)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__FILLFROMEXCEL_OFFSET UNITYSDK_OFFSET(0xA3834B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__GETORFILLROOMTOINDEX_OFFSET UNITYSDK_OFFSET(0xA384190)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__SYNCROOMSFULL_OFFSET UNITYSDK_OFFSET(0xA383A90)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__SYNCROOMSINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xA383640)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelLayerData_TypeDefinitionIndex = 55145;

	class RogueTournClassicGameLevelLayerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournClassicGameLevelRoom*>* _Rooms; // 0x10
		::System::UInt32 _LayerID; // 0x18
		::System::UInt32 _CurRoomIndex; // 0x1C
		::System::UInt32 _LayerIndex; // 0x20
		::Enum_3_0A3761FE34514D6C_71 _Status; // 0x24
		::RPG::Client::TextID _NumText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_DBE1913405A6C120_1* proto, ::System::Boolean isIncremental)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DBE1913405A6C120_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_SYNC_OFFSET))(this, proto, isIncremental);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GETDEBUGINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournClassicGameLevelRoom* get_Item(::System::UInt32 roomIndex)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelRoom*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_ITEM_OFFSET))(this, roomIndex);
		}

		::RPG::Client::IRogueTournGameLevelRoomLinear* RPG_Client_IRogueTournGameLevelLayerLinear_get_Item(::System::UInt32 roomIndex)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoomLinear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYERLINEAR_GET_ITEM_OFFSET))(this, roomIndex);
		}

		::System::Void _FillFromExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__FILLFROMEXCEL_OFFSET))(this);
		}

		::System::Void _SyncRoomsFull(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36039D62266A61A1*>* protoRooms)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36039D62266A61A1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__SYNCROOMSFULL_OFFSET))(this, protoRooms);
		}

		::System::Void _SyncRoomsIncremental(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36039D62266A61A1*>* protoRooms)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_36039D62266A61A1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__SYNCROOMSINCREMENTAL_OFFSET))(this, protoRooms);
		}

		::RPG::Client::IRogueTournClassicGameLevelRoom* _GetOrFillRoomToIndex(::System::UInt32 roomIndex)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelRoom*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__GETORFILLROOMTOINDEX_OFFSET))(this, roomIndex);
		}

		::RPG::Client::IRogueTournClassicGameLevelRoom* _CreateRoomByProto(::Class_1_36039D62266A61A1* proto)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelRoom*(*)(::PVOID, ::Class_1_36039D62266A61A1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__CREATEROOMBYPROTO_OFFSET))(this, proto);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_LAYERINDEX_OFFSET))(this);
		}

		::Enum_3_0A3761FE34514D6C_71 get_Status()
		{
			return ((::Enum_3_0A3761FE34514D6C_71(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_STATUS_OFFSET))(this);
		}

		::RPG::Client::TextID get_NumText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_NUMTEXT_OFFSET))(this);
		}

		::System::UInt32 get_RoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_ROOMCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournClassicGameLevelRoom*>* get_Rooms()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournClassicGameLevelRoom*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_ROOMS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoom*>* RPG_Client_IRogueTournGameLevelLayer_get_Rooms()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoom*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYER_GET_ROOMS_OFFSET))(this);
		}

		::RPG::Client::IRogueTournClassicGameLevelRoom* get_CurRoom()
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_CURROOM_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevelRoom* RPG_Client_IRogueTournGameLevelLayer_get_CurRoom()
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYER_GET_CURROOM_OFFSET))(this);
		}
	};
}
