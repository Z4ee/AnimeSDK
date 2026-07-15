#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::RelicSmartSuit { class PinDataKey; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_RELICSMARTSUIT_PINDATA_ADDRELICUID_OFFSET UNITYSDK_OFFSET(0x17370540)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1736FDD0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1736FC60)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATA_GETUID_OFFSET UNITYSDK_OFFSET(0x17370020)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x19889680)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATA_GET_RELICUIDS_OFFSET UNITYSDK_OFFSET(0x198896A0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATA_REMOVERELICUID_OFFSET UNITYSDK_OFFSET(0x173706C0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x19889690)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATA_SYNCRELICUIDS_OFFSET UNITYSDK_OFFSET(0x17370100)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATA__CLONERELICUIDS_OFFSET UNITYSDK_OFFSET(0x1736FE40)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1736FD50)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PinData_TypeDefinitionIndex = 71011;

	class PinData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>* _RelicUIDs; // 0x10
		::RPG::Client::RelicSmartSuit::PinDataKey* _Key_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::PinDataKey* get_Key()
		{
			return ((::RPG::Client::RelicSmartSuit::PinDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::RPG::Client::RelicSmartSuit::PinDataKey* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA_SET_KEY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_RelicUIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA_GET_RELICUIDS_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::PinData* Create(::RPG::Client::RelicSmartSuit::PinDataKey* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::RelicSmartSuit::PinData* Clone()
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA_CLONE_OFFSET))(this);
		}

		::System::UInt32 GetUID(::RPG::GameCore::RelicType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA_GETUID_OFFSET))(this, a1);
		}

		::System::Void _CloneRelicUIDs(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA__CLONERELICUIDS_OFFSET))(this, a1);
		}

		::System::Void SyncRelicUIDs(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA_SYNCRELICUIDS_OFFSET))(this, a1);
		}

		::System::Void AddRelicUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA_ADDRELICUID_OFFSET))(this, a1);
		}

		::System::Void RemoveRelicUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATA_REMOVERELICUID_OFFSET))(this, a1);
		}
	};
}
