#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_70.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_53;
class Class_1_5CF1DDAFE12F0E87_6;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicGameRoomInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GETCURROOMINFO_OFFSET UNITYSDK_OFFSET(0xA31CFA0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GETFINISHEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xA31D080)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_CURROOMINDEX_OFFSET UNITYSDK_OFFSET(0xA31D380)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA31D420)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0xA31D340)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xA31D360)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_MAXREQUIREDLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xA3192C0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_NUMTEXT_OFFSET UNITYSDK_OFFSET(0xA31D430)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xA31D3C0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_ROOMINFOCOL_OFFSET UNITYSDK_OFFSET(0xA31D3A0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_CURROOMINDEX_OFFSET UNITYSDK_OFFSET(0xA31D390)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_LAYERID_OFFSET UNITYSDK_OFFSET(0xA31D350)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xA31D370)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_NUMTEXT_OFFSET UNITYSDK_OFFSET(0xA31D440)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_ROOMINFOCOL_OFFSET UNITYSDK_OFFSET(0xA31D3B0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA31C990)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA31C900)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO__SYNCROOMS_OFFSET UNITYSDK_OFFSET(0xA31CB00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameLayerInfo_TypeDefinitionIndex = 54905;

	class RogueMagicGameLayerInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameRoomInfo*>* _RoomInfoCol_k__BackingField; // 0x10
		::System::UInt32 _CurRoomIndex_k__BackingField; // 0x18
		::System::UInt32 _LayerID_k__BackingField; // 0x1C
		::Enum_3_0A3761FE34514D6C_70 _Status; // 0x20
		::System::UInt32 _LayerIndex_k__BackingField; // 0x24
		::RPG::Client::TextID _NumText_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_5CF1DDAFE12F0E87_6* proto, ::System::Boolean isSyncAll)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_6*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SYNC_OFFSET))(this, proto, isSyncAll);
		}

		::RPG::Client::RogueMagicGameRoomInfo* GetCurRoomInfo()
		{
			return ((::RPG::Client::RogueMagicGameRoomInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GETCURROOMINFO_OFFSET))(this);
		}

		::System::UInt32 GetFinishedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GETFINISHEDROOMCOUNT_OFFSET))(this);
		}

		::System::Void _SyncRooms(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_53*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_53*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO__SYNCROOMS_OFFSET))(this, proto);
		}

		::System::UInt32 get_LayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_LAYERID_OFFSET))(this);
		}

		::System::Void set_LayerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_LAYERID_OFFSET))(this, value);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_LAYERINDEX_OFFSET))(this);
		}

		::System::Void set_LayerIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_LAYERINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_CurRoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_CURROOMINDEX_OFFSET))(this);
		}

		::System::Void set_CurRoomIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_CURROOMINDEX_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameRoomInfo*>* get_RoomInfoCol()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameRoomInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_ROOMINFOCOL_OFFSET))(this);
		}

		::System::Void set_RoomInfoCol(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameRoomInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameRoomInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_ROOMINFOCOL_OFFSET))(this, value);
		}

		::System::UInt32 get_RoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_ROOMCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_ISFINISHED_OFFSET))(this);
		}

		::RPG::Client::TextID get_NumText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_NUMTEXT_OFFSET))(this);
		}

		::System::Void set_NumText(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_NUMTEXT_OFFSET))(this, value);
		}

		static ::System::UInt32 get_MaxRequiredLayerIndex()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_MAXREQUIREDLAYERINDEX_OFFSET))();
		}
	};
}
