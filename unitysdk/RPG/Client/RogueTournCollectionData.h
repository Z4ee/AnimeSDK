#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_71.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_84;
namespace RPG::Client { class IRogueTournCollectionExhibitionDisplayableData; }
namespace RPG::GameCore { class RogueTournContentCollectionRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x1AF0B810)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0x1AF0B630)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ENTITYRUNTIMEREPLACEARTPREFABID_OFFSET UNITYSDK_OFFSET(0x1AF0BA30)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AF0B4B0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1AF0BAD0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_LISTICONPATH_OFFSET UNITYSDK_OFFSET(0x1AF0B8F0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0x1AF0B990)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AF0B4F0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1AF0B5D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_ISSAMEITEM_OFFSET UNITYSDK_OFFSET(0x1AF0B3D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1AF0B370)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0B360)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionData_TypeDefinitionIndex = 67568;

	class RogueTournCollectionData : public ::System::Object
	{
	public:
		::Enum_3_0A3761FE34514D6C_71 _Status; // 0x10
		::System::UInt32 _CollectionID; // 0x14

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_1CBA230307F9C289_84* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsSameItem(::RPG::Client::IRogueTournCollectionExhibitionDisplayableData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournCollectionExhibitionDisplayableData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_ISSAMEITEM_OFFSET))(this, a1);
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
