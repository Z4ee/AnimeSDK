#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicStyleTypeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB058F30)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION_GETAVAILABLESTYLETYPEINFO_OFFSET UNITYSDK_OFFSET(0xB0674F0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION_GETSTYLETYPEINFO_OFFSET UNITYSDK_OFFSET(0xB0671F0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION_GET_UNLOCKEDSTYLETYPELIST_OFFSET UNITYSDK_OFFSET(0xB067A20)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION_SYNCUNLOCKINFO_OFFSET UNITYSDK_OFFSET(0xB05C200)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB057FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicStyleTypeCollection_TypeDefinitionIndex = 62140;

	class RogueMagicStyleTypeCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicStyleType, ::RPG::Client::RogueMagicStyleTypeInfo*>* _StyleTypeInfoDict; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedStyleTypeList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueMagicStyleTypeInfo* GetStyleTypeInfo(::RPG::GameCore::RogueMagicStyleType type)
		{
			return ((::RPG::Client::RogueMagicStyleTypeInfo*(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION_GETSTYLETYPEINFO_OFFSET))(this, type);
		}

		::RPG::Client::RogueMagicStyleTypeInfo* GetAvailableStyleTypeInfo()
		{
			return ((::RPG::Client::RogueMagicStyleTypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION_GETAVAILABLESTYLETYPEINFO_OFFSET))(this);
		}

		::System::Void SyncUnlockInfo(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* protoUnlockTypeList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION_SYNCUNLOCKINFO_OFFSET))(this, protoUnlockTypeList);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedStyleTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPECOLLECTION_GET_UNLOCKEDSTYLETYPELIST_OFFSET))(this);
		}
	};
}
