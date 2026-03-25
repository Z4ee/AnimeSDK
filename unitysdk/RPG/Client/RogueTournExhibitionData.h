#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_68.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_50;
namespace RPG::Client { class IRogueTournCollectionExhibitionDisplayableData; }
namespace RPG::GameCore { class RogueTournContentExhibitionRow; }
namespace RPG::GameCore { class SceneTVMenuDataRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_EXHIBITIONTYPE_OFFSET UNITYSDK_OFFSET(0xA38B5C0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xA38B800)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA38B5B0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA38B9D0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_LISTICONPATH_OFFSET UNITYSDK_OFFSET(0xA38B6C0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0xA38B760)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_TEXTUREPATH_OFFSET UNITYSDK_OFFSET(0xA38B8A0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET__PROGRAMGROUPROW_OFFSET UNITYSDK_OFFSET(0xA38B900)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA38B660)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_ISSAMEITEM_OFFSET UNITYSDK_OFFSET(0xA38B530)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA38B4D0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA38B4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExhibitionData_TypeDefinitionIndex = 55088;

	class RogueTournExhibitionData : public ::System::Object
	{
	public:
		::System::UInt32 _ExhibitionID; // 0x10
		::Enum_3_0A3761FE34514D6C_68 _Status; // 0x14

		::System::Void _ctor(::System::UInt32 exhibitionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA__CTOR_OFFSET))(this, exhibitionID);
		}

		::System::Void Sync(::Class_1_352A8B3482C80E7D_50* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Boolean IsSameItem(::RPG::Client::IRogueTournCollectionExhibitionDisplayableData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournCollectionExhibitionDisplayableData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_ISSAMEITEM_OFFSET))(this, other);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::RogueExhibitionType get_ExhibitionType()
		{
			return ((::RPG::GameCore::RogueExhibitionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_EXHIBITIONTYPE_OFFSET))(this);
		}

		::System::String* get_ListIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_LISTICONPATH_OFFSET))(this);
		}

		::System::String* get_MapIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_MAPICONPATH_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_FIGUREPATH_OFFSET))(this);
		}

		::System::String* get_TexturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_TEXTUREPATH_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournContentExhibitionRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournContentExhibitionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::SceneTVMenuDataRow* get__ProgramGroupRow()
		{
			return ((::RPG::GameCore::SceneTVMenuDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET__PROGRAMGROUPROW_OFFSET))(this);
		}
	};
}
