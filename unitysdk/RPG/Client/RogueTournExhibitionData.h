#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_69.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_55;
namespace RPG::Client { class IRogueTournCollectionExhibitionDisplayableData; }
namespace RPG::GameCore { class RogueTournContentExhibitionRow; }
namespace RPG::GameCore { class SceneTVMenuDataRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_EXHIBITIONTYPE_OFFSET UNITYSDK_OFFSET(0xC812610)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC812850)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC812600)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC812A20)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_LISTICONPATH_OFFSET UNITYSDK_OFFSET(0xC812710)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0xC8127B0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET_TEXTUREPATH_OFFSET UNITYSDK_OFFSET(0xC8128F0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET__PROGRAMGROUPROW_OFFSET UNITYSDK_OFFSET(0xC812950)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC8126B0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_ISSAMEITEM_OFFSET UNITYSDK_OFFSET(0xC812580)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC812520)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC812510)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExhibitionData_TypeDefinitionIndex = 63209;

	class RogueTournExhibitionData : public ::System::Object
	{
	public:
		::System::UInt32 _ExhibitionID; // 0x10
		::Enum_3_0A3761FE34514D6C_69 _Status; // 0x14

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_1CBA230307F9C289_55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsSameItem(::RPG::Client::IRogueTournCollectionExhibitionDisplayableData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournCollectionExhibitionDisplayableData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONDATA_ISSAMEITEM_OFFSET))(this, a1);
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
