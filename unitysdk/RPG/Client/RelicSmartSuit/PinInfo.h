#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_443A92A86A85B606_4;
class Class_1_5FEFAED860528596_78;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::RelicSmartSuit { class PinData; }
namespace RPG::Client::RelicSmartSuit { class PinDataKey; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define RPG_CLIENT_RELICSMARTSUIT_PININFO_CREATE_OFFSET UNITYSDK_OFFSET(0xA2AF320)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_1_OFFSET UNITYSDK_OFFSET(0xA2AF880)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_2_OFFSET UNITYSDK_OFFSET(0xA2AF930)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_OFFSET UNITYSDK_OFFSET(0xA2AF810)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_GETPINDATA_OFFSET UNITYSDK_OFFSET(0xA2AF4C0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA2AF280)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_PINDATAKEYS_OFFSET UNITYSDK_OFFSET(0xA2AF2A0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA2AF290)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_1_OFFSET UNITYSDK_OFFSET(0xA2AF620)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_OFFSET UNITYSDK_OFFSET(0xA2AF5B0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2AF430)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO__GETORCREATEPINDATA_OFFSET UNITYSDK_OFFSET(0xA2AF6A0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PinInfo_TypeDefinitionIndex = 61167;

	class PinInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicSmartSuit::PinDataKey*, ::RPG::Client::RelicSmartSuit::PinData*>* _PinDatas; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_SET_AVATARID_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::RelicSmartSuit::PinDataKey*>* get_PinDataKeys()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::RelicSmartSuit::PinDataKey*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_PINDATAKEYS_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::PinInfo* Create(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_CREATE_OFFSET))(avatarID);
		}

		::RPG::Client::RelicSmartSuit::PinData* GetPinData(::RPG::Client::RelicSmartSuit::PinDataKey* pinDataKey)
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_GETPINDATA_OFFSET))(this, pinDataKey);
		}

		::System::Void SyncPinData(::Class_1_5FEFAED860528596_78* severPinData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_OFFSET))(this, severPinData);
		}

		::System::Void SyncPinData_1(::Class_1_443A92A86A85B606_4* serverPinDataKey, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* relicUIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606_4*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_1_OFFSET))(this, serverPinDataKey, relicUIDs);
		}

		::System::Void DeletePinData(::Class_1_5FEFAED860528596_78* serverPinData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_OFFSET))(this, serverPinData);
		}

		::System::Void DeletePinData_1(::Class_1_443A92A86A85B606_4* serverPinKey)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_1_OFFSET))(this, serverPinKey);
		}

		::System::Void DeletePinData_2(::RPG::Client::RelicSmartSuit::PinDataKey* pinDataKey)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_2_OFFSET))(this, pinDataKey);
		}

		::RPG::Client::RelicSmartSuit::PinData* _GetOrCreatePinData(::RPG::Client::RelicSmartSuit::PinDataKey* key)
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO__GETORCREATEPINDATA_OFFSET))(this, key);
		}
	};
}
