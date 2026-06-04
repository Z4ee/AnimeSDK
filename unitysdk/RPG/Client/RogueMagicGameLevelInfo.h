#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_57.h"
#include "unitysdk/System/Object.h"

class Class_1_DB9F32FCA772D309_6;
class Class_1_F3CA30716D4FAF92_17;
class Class_1_F3CA30716D4FAF92_18;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicGameLayerInfo; }
namespace RPG::Client { class RogueMagicGameRoomInfo; }
namespace RPG::Client { class RogueMagicLayerEffectInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC79F400)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A2370)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURLAYERINFO_OFFSET UNITYSDK_OFFSET(0xC7A1010)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURROOMINFO_OFFSET UNITYSDK_OFFSET(0xC7A09C0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETFINISHEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A2220)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_CURLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC7A2520)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A2560)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERINFOCOL_OFFSET UNITYSDK_OFFSET(0xC7A2540)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_OPTIONALLAYEREFFECTINFO_OFFSET UNITYSDK_OFFSET(0xC7A25C0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC7A2500)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_CURLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC7A2530)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_LAYERINFOCOL_OFFSET UNITYSDK_OFFSET(0xC7A2550)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_OPTIONALLAYEREFFECTINFO_OFFSET UNITYSDK_OFFSET(0xC7A25D0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xC7A2510)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0xC79FAB0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xC7A03E0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC79EFD0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__SYNCLAYERS_OFFSET UNITYSDK_OFFSET(0xC7A1D90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameLevelInfo_TypeDefinitionIndex = 63027;

	class RogueMagicGameLevelInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicLayerEffectInfo* _OptionalLayerEffectInfo_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>* _LayerInfoCol_k__BackingField; // 0x18
		::System::UInt32 _CurLayerIndex_k__BackingField; // 0x20
		::Enum_3_DB663931210BBC27_57 _Status_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_F3CA30716D4FAF92_17* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::Class_1_F3CA30716D4FAF92_18* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicGameLayerInfo* GetCurLayerInfo()
		{
			return ((::RPG::Client::RogueMagicGameLayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURLAYERINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicGameRoomInfo* GetCurRoomInfo()
		{
			return ((::RPG::Client::RogueMagicGameRoomInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURROOMINFO_OFFSET))(this);
		}

		::System::UInt32 GetFinishedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETFINISHEDROOMCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetAllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETALLROOMCOUNT_OFFSET))(this);
		}

		::System::Void _SyncLayers(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_6*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_6*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__SYNCLAYERS_OFFSET))(this, a1, a2);
		}

		::Enum_3_DB663931210BBC27_57 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_57(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_57 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_57))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_STATUS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_CURLAYERINDEX_OFFSET))(this);
		}

		::System::Void set_CurLayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_CURLAYERINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>* get_LayerInfoCol()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERINFOCOL_OFFSET))(this);
		}

		::System::Void set_LayerInfoCol(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_LAYERINFOCOL_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET))(this);
		}

		::RPG::Client::RogueMagicLayerEffectInfo* get_OptionalLayerEffectInfo()
		{
			return ((::RPG::Client::RogueMagicLayerEffectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_OPTIONALLAYEREFFECTINFO_OFFSET))(this);
		}

		::System::Void set_OptionalLayerEffectInfo(::RPG::Client::RogueMagicLayerEffectInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicLayerEffectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_OPTIONALLAYEREFFECTINFO_OFFSET))(this, a1);
		}
	};
}
