#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_83;
class Class_1_EB91F58AEEF3F578_5;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::RelicSmartSuit { class PinData; }
namespace RPG::Client::RelicSmartSuit { class PinDataKey; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define RPG_CLIENT_RELICSMARTSUIT_PININFO_CREATE_OFFSET UNITYSDK_OFFSET(0xC6F1AD0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_1_OFFSET UNITYSDK_OFFSET(0xC6F2090)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_2_OFFSET UNITYSDK_OFFSET(0xC6F2140)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_OFFSET UNITYSDK_OFFSET(0xC6F1FA0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_GETPINDATA_OFFSET UNITYSDK_OFFSET(0xC6F1C70)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC6F1990)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_PINDATAKEYS_OFFSET UNITYSDK_OFFSET(0xC6F19B0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC6F19A0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_1_OFFSET UNITYSDK_OFFSET(0xC6F1DC0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_OFFSET UNITYSDK_OFFSET(0xC6F1D50)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC6F1BE0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO__GETORCREATEPINDATA_OFFSET UNITYSDK_OFFSET(0xC6F1E40)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PinInfo_TypeDefinitionIndex = 69490;

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

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::RelicSmartSuit::PinDataKey*>* get_PinDataKeys()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::RelicSmartSuit::PinDataKey*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_PINDATAKEYS_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::PinInfo* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_CREATE_OFFSET))(a1);
		}

		::RPG::Client::RelicSmartSuit::PinData* GetPinData(::RPG::Client::RelicSmartSuit::PinDataKey* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_GETPINDATA_OFFSET))(this, a1);
		}

		::System::Void SyncPinData(::Class_1_455008579EB95638_83* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_OFFSET))(this, a1);
		}

		::System::Void SyncPinData_1(::Class_1_EB91F58AEEF3F578_5* a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EB91F58AEEF3F578_5*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_1_OFFSET))(this, a1, a2);
		}

		::System::Void DeletePinData(::Class_1_455008579EB95638_83* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_OFFSET))(this, a1);
		}

		::System::Void DeletePinData_1(::Class_1_EB91F58AEEF3F578_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EB91F58AEEF3F578_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_1_OFFSET))(this, a1);
		}

		::System::Void DeletePinData_2(::RPG::Client::RelicSmartSuit::PinDataKey* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_2_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::PinData* _GetOrCreatePinData(::RPG::Client::RelicSmartSuit::PinDataKey* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO__GETORCREATEPINDATA_OFFSET))(this, a1);
		}
	};
}
