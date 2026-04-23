#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_68.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_54;
namespace RPG::Client { class IRogueTournCollectionExhibitionDisplayableData; }
namespace RPG::GameCore { class RogueTournContentCollectionRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0xB0BC9E0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0xB0BC800)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ENTITYRUNTIMEREPLACEARTPREFABID_OFFSET UNITYSDK_OFFSET(0xB0BCBF0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB0BC6C0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB0BCC90)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_LISTICONPATH_OFFSET UNITYSDK_OFFSET(0xB0BCAB0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0xB0BCB50)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB0BC6D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB0BC7A0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_ISSAMEITEM_OFFSET UNITYSDK_OFFSET(0xB0BC640)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB0BC5E0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0BC5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionData_TypeDefinitionIndex = 62272;

	class RogueTournCollectionData : public ::System::Object
	{
	public:
		::System::UInt32 _CollectionID; // 0x10
		::Enum_3_0A3761FE34514D6C_68 _Status; // 0x14

		::System::Void _ctor(::System::UInt32 collectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA__CTOR_OFFSET))(this, collectionID);
		}

		::System::Void Sync(::Class_1_1CBA230307F9C289_54* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_54*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Boolean IsSameItem(::RPG::Client::IRogueTournCollectionExhibitionDisplayableData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournCollectionExhibitionDisplayableData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_ISSAMEITEM_OFFSET))(this, other);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_EffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_EFFECTDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_BGDESC_OFFSET))(this);
		}

		::System::String* get_ListIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_LISTICONPATH_OFFSET))(this);
		}

		::System::String* get_MapIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_MAPICONPATH_OFFSET))(this);
		}

		::System::Int32 get_EntityRuntimeReplaceArtPrefabID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ENTITYRUNTIMEREPLACEARTPREFABID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournContentCollectionRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournContentCollectionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET__ROW_OFFSET))(this);
		}
	};
}
