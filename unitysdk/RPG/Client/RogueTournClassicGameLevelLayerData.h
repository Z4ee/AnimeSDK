#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_72.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_02098A44CBBFEEE1_2;
class Class_1_2E64892306548DEA_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournClassicGameLevelRoom; }
namespace RPG::Client { class IRogueTournGameLevelRoom; }
namespace RPG::Client { class IRogueTournGameLevelRoomLinear; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC809D60)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xC80A9D0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_CURROOM_OFFSET UNITYSDK_OFFSET(0xC80AE20)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xC80AA20)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC80AD80)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_NUMTEXT_OFFSET UNITYSDK_OFFSET(0xC80ADA0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC80ADB0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_ROOMS_OFFSET UNITYSDK_OFFSET(0xC80AE00)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC80AD90)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYERLINEAR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xC80AB00)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYER_GET_CURROOM_OFFSET UNITYSDK_OFFSET(0xC80AEB0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYER_GET_ROOMS_OFFSET UNITYSDK_OFFSET(0xC80AE10)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC8098F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__CREATEROOMBYPROTO_OFFSET UNITYSDK_OFFSET(0xC80AB50)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8098A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__FILLFROMEXCEL_OFFSET UNITYSDK_OFFSET(0xC809EB0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__GETORFILLROOMTOINDEX_OFFSET UNITYSDK_OFFSET(0xC80AC10)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__SYNCROOMSFULL_OFFSET UNITYSDK_OFFSET(0xC80A480)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__SYNCROOMSINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xC80A040)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelLayerData_TypeDefinitionIndex = 63266;

	class RogueTournClassicGameLevelLayerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournClassicGameLevelRoom*>* _Rooms; // 0x10
		::System::UInt32 _LayerIndex; // 0x18
		::System::UInt32 _CurRoomIndex; // 0x1C
		::RPG::Client::TextID _NumText; // 0x20
		::System::UInt32 _LayerID; // 0x30
		::Enum_3_0A3761FE34514D6C_72 _Status; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_2E64892306548DEA_1* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E64892306548DEA_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_SYNC_OFFSET))(this, a1, a2);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GETDEBUGINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournClassicGameLevelRoom* get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelRoom*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_ITEM_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournGameLevelRoomLinear* RPG_Client_IRogueTournGameLevelLayerLinear_get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoomLinear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_RPG_CLIENT_IROGUETOURNGAMELEVELLAYERLINEAR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void _FillFromExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__FILLFROMEXCEL_OFFSET))(this);
		}

		::System::Void _SyncRoomsFull(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_02098A44CBBFEEE1_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_02098A44CBBFEEE1_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__SYNCROOMSFULL_OFFSET))(this, a1);
		}

		::System::Void _SyncRoomsIncremental(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_02098A44CBBFEEE1_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_02098A44CBBFEEE1_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__SYNCROOMSINCREMENTAL_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournClassicGameLevelRoom* _GetOrFillRoomToIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelRoom*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__GETORFILLROOMTOINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournClassicGameLevelRoom* _CreateRoomByProto(::Class_1_02098A44CBBFEEE1_2* a1)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelRoom*(*)(::PVOID, ::Class_1_02098A44CBBFEEE1_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA__CREATEROOMBYPROTO_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_LAYERINDEX_OFFSET))(this);
		}

		::Enum_3_0A3761FE34514D6C_72 get_Status()
		{
			return ((::Enum_3_0A3761FE34514D6C_72(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA_GET_STATUS_OFFSET))(this);
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
