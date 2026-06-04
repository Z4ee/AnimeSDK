#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_87B6445D24FE4E47;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ItemAutoConversionRecord; }
namespace RPG::GameCore { class AvatarPathItemTransferRow; }

#define RPG_CLIENT_MULTIPATHAVATARUNLOCKITEMTRANSFER_GET_TRANSFERDESC_OFFSET UNITYSDK_OFFSET(0xC1B8470)
#define RPG_CLIENT_MULTIPATHAVATARUNLOCKITEMTRANSFER_GET_TRANSFERTITLE_OFFSET UNITYSDK_OFFSET(0xC1B8440)
#define RPG_CLIENT_MULTIPATHAVATARUNLOCKITEMTRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0xC1B8380)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarUnlockItemTransfer_TypeDefinitionIndex = 61994;

	class MultiPathAvatarUnlockItemTransfer : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPathItemTransferRow* _ConfigRow; // 0x10
		::RPG::Client::ItemAutoConversionRecord* ItemConversionRecord; // 0x18
		::System::UInt32 AvatarID; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUNLOCKITEMTRANSFER__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_TransferTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUNLOCKITEMTRANSFER_GET_TRANSFERTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TransferDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUNLOCKITEMTRANSFER_GET_TRANSFERDESC_OFFSET))(this);
		}
	};
}
