#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_58.h"
#include "unitysdk/System/Object.h"

class Class_1_0C0F9366B7D3B580_3;
class Class_1_F3CA30716D4FAF92_16;
class Class_1_F3CA30716D4FAF92_17;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicGameLayerInfo; }
namespace RPG::Client { class RogueMagicGameRoomInfo; }
namespace RPG::Client { class RogueMagicLayerEffectInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B6913A0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B694870)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURLAYERINFO_OFFSET UNITYSDK_OFFSET(0x1B693340)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURROOMINFO_OFFSET UNITYSDK_OFFSET(0x1B692CB0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETFINISHEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B694720)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_CURLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1B694A20)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B694A60)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERINFOCOL_OFFSET UNITYSDK_OFFSET(0x1B694A40)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_OPTIONALLAYEREFFECTINFO_OFFSET UNITYSDK_OFFSET(0x1B694AC0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B694A00)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_CURLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1B694A30)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_LAYERINFOCOL_OFFSET UNITYSDK_OFFSET(0x1B694A50)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_OPTIONALLAYEREFFECTINFO_OFFSET UNITYSDK_OFFSET(0x1B694AD0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B694A10)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0x1B691A50)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1B692600)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B690F70)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__SYNCLAYERS_OFFSET UNITYSDK_OFFSET(0x1B694170)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameLevelInfo_TypeDefinitionIndex = 67390;

	class RogueMagicGameLevelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>* _LayerInfoCol_k__BackingField; // 0x10
		::RPG::Client::RogueMagicLayerEffectInfo* _OptionalLayerEffectInfo_k__BackingField; // 0x18
		::Enum_3_DB663931210BBC27_58 _Status_k__BackingField; // 0x20
		::System::UInt32 _CurLayerIndex_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_F3CA30716D4FAF92_16* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::Class_1_F3CA30716D4FAF92_17* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCUPDATE_OFFSET))(this, a1);
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

		::System::Void _SyncLayers(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0C0F9366B7D3B580_3*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0C0F9366B7D3B580_3*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__SYNCLAYERS_OFFSET))(this, a1, a2);
		}

		::Enum_3_DB663931210BBC27_58 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_58(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_58 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_58))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_STATUS_OFFSET))(this, a1);
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
