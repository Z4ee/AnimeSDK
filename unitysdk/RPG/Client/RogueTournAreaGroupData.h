#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2, typename T3> class RogueInstanceCacheManager_3; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x198428D0)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0x19844300)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA_GET_NAMEWITHROGUEMODE_OFFSET UNITYSDK_OFFSET(0x19844340)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19844320)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA_GET_NULL_OFFSET UNITYSDK_OFFSET(0x19843F50)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0x19844310)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA_SET_NAMEWITHROGUEMODE_OFFSET UNITYSDK_OFFSET(0x19844350)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x19844330)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19844210)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19844360)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0x19844050)
#define RPG_CLIENT_ROGUETOURNAREAGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19843F40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaGroupData_TypeDefinitionIndex = 64500;

	class RogueTournAreaGroupData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournAreaGroupData** StaticGet__Null()
		{
			return (::RPG::Client::RogueTournAreaGroupData**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaGroupData_TypeDefinitionIndex)->GetStaticField(0x28850);
		}
		static ::RPG::Client::RogueInstanceCacheManager_3<::RPG::GameCore::RogueTournAreaGroupID, ::RPG::GameCore::RogueTournMode, ::RPG::Client::RogueTournAreaGroupData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_3<::RPG::GameCore::RogueTournAreaGroupID, ::RPG::GameCore::RogueTournMode, ::RPG::Client::RogueTournAreaGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaGroupData_TypeDefinitionIndex)->GetStaticField(0x28858);
		}
		::RPG::Client::TextID _NameWithRogueMode_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::RPG::GameCore::RogueTournAreaGroupID _AreaGroup_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournAreaGroupData* get_Null()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA_GET_NULL_OFFSET))();
		}

		static ::RPG::Client::RogueTournAreaGroupData* GetData(::RPG::GameCore::RogueTournAreaGroupID a1, ::RPG::GameCore::RogueTournMode a2)
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::RPG::GameCore::RogueTournAreaGroupID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA_GETDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournAreaGroupData* _CreateData(::RPG::GameCore::RogueTournAreaGroupID a1, ::RPG::GameCore::RogueTournMode a2)
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::RPG::GameCore::RogueTournAreaGroupID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA__CREATEDATA_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA_TOSTRING_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournAreaGroupID get_AreaGroup()
		{
			return ((::RPG::GameCore::RogueTournAreaGroupID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::GameCore::RogueTournAreaGroupID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournAreaGroupID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA_SET_AREAGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NameWithRogueMode()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA_GET_NAMEWITHROGUEMODE_OFFSET))(this);
		}

		::System::Void set_NameWithRogueMode(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREAGROUPDATA_SET_NAMEWITHROGUEMODE_OFFSET))(this, a1);
		}
	};
}
