#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3D62C8268D1C8C01_1;
namespace RPG::Client { class RogueTournPersonaTalentNodeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_CREATEDATA_OFFSET UNITYSDK_OFFSET(0x1C7B1A80)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C7B1C80)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C7B1C40)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C7B1CC0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1C7B1CA0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C7B1C60)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C7B1C90)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C7B1C50)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C7B1CD0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1C7B1CB0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C7B1C70)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1C7B1B00)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B1A40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaTalentGroupData_TypeDefinitionIndex = 67758;

	class RogueTournPersonaTalentGroupData : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Title_k__BackingField; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::UInt32 _MaxLevel_k__BackingField; // 0x30

		::System::Void _ctor(::Class_1_3D62C8268D1C8C01_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3D62C8268D1C8C01_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournPersonaTalentGroupData* CreateData(::Class_1_3D62C8268D1C8C01_1* a1)
		{
			return ((::RPG::Client::RogueTournPersonaTalentGroupData*(*)(::Class_1_3D62C8268D1C8C01_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_CREATEDATA_OFFSET))(a1);
		}

		::System::Void Sync(::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_TITLE_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTGROUPDATA_SET_LEVEL_OFFSET))(this, a1);
		}
	};
}
