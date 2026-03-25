#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3D62C8268D1C8C01;
namespace RPG::Client { class RogueTournPersonaTalentNodeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_CREATEDATA_OFFSET UNITYSDK_OFFSET(0xA3C9570)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA3C9770)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA3C9730)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA3C97B0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA3C9790)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA3C9750)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA3C9780)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA3C9740)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA3C97C0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA3C97A0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xA3C9760)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA3C95F0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C9530)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaTalentGroupData_TypeDefinitionIndex = 55265;

	class RogueTournPersonaTalentGroupData : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x18
		::System::UInt32 _MaxLevel_k__BackingField; // 0x1C
		::RPG::Client::TextID _Title_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor(::Class_1_3D62C8268D1C8C01* row)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3D62C8268D1C8C01*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA__CTOR_OFFSET))(this, row);
		}

		static ::RPG::Client::RogueTournPersonaTalentGroupData* CreateData(::Class_1_3D62C8268D1C8C01* row)
		{
			return ((::RPG::Client::RogueTournPersonaTalentGroupData*(*)(::Class_1_3D62C8268D1C8C01*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_CREATEDATA_OFFSET))(row);
		}

		::System::Void Sync(::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>* talents)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SYNC_OFFSET))(this, talents);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_TITLE_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_MAXLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_LEVEL_OFFSET))(this, value);
		}
	};
}
