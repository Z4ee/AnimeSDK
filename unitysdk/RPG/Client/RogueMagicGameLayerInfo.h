#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_71.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_58;
class Class_1_DB9F32FCA772D309_6;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicGameRoomInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GETCURROOMINFO_OFFSET UNITYSDK_OFFSET(0xC7A1920)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GETFINISHEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A19D0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_CURROOMINDEX_OFFSET UNITYSDK_OFFSET(0xC7A1CC0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC7A1D60)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0xC7A1C80)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC7A1CA0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_MAXREQUIREDLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC79DD50)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_NUMTEXT_OFFSET UNITYSDK_OFFSET(0xC7A1D70)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A1D00)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_ROOMINFOCOL_OFFSET UNITYSDK_OFFSET(0xC7A1CE0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_CURROOMINDEX_OFFSET UNITYSDK_OFFSET(0xC7A1CD0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_LAYERID_OFFSET UNITYSDK_OFFSET(0xC7A1C90)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC7A1CB0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_NUMTEXT_OFFSET UNITYSDK_OFFSET(0xC7A1D80)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_ROOMINFOCOL_OFFSET UNITYSDK_OFFSET(0xC7A1CF0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC7A13C0)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A1330)
#define RPG_CLIENT_ROGUEMAGICGAMELAYERINFO__SYNCROOMS_OFFSET UNITYSDK_OFFSET(0xC7A1530)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameLayerInfo_TypeDefinitionIndex = 63026;

	class RogueMagicGameLayerInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameRoomInfo*>* _RoomInfoCol_k__BackingField; // 0x10
		::RPG::Client::TextID _NumText_k__BackingField; // 0x18
		::System::UInt32 _CurRoomIndex_k__BackingField; // 0x28
		::Enum_3_0A3761FE34514D6C_71 _Status; // 0x2C
		::System::UInt32 _LayerIndex_k__BackingField; // 0x30
		::System::UInt32 _LayerID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_DB9F32FCA772D309_6* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB9F32FCA772D309_6*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMagicGameRoomInfo* GetCurRoomInfo()
		{
			return ((::RPG::Client::RogueMagicGameRoomInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GETCURROOMINFO_OFFSET))(this);
		}

		::System::UInt32 GetFinishedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GETFINISHEDROOMCOUNT_OFFSET))(this);
		}

		::System::Void _SyncRooms(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_58*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_58*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO__SYNCROOMS_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_LAYERID_OFFSET))(this);
		}

		::System::Void set_LayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_LAYERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_LAYERINDEX_OFFSET))(this);
		}

		::System::Void set_LayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_LAYERINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurRoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_CURROOMINDEX_OFFSET))(this);
		}

		::System::Void set_CurRoomIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_CURROOMINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameRoomInfo*>* get_RoomInfoCol()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameRoomInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_ROOMINFOCOL_OFFSET))(this);
		}

		::System::Void set_RoomInfoCol(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameRoomInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameRoomInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_ROOMINFOCOL_OFFSET))(this, a1);
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

		::System::Void set_NumText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_SET_NUMTEXT_OFFSET))(this, a1);
		}

		static ::System::UInt32 get_MaxRequiredLayerIndex()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELAYERINFO_GET_MAXREQUIREDLAYERINDEX_OFFSET))();
		}
	};
}
