#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class UniverseData; }
namespace RPG::GameCore { class WorldDataConfigRow; }
namespace RPG::GameCore { class WorldUnlockConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_NAVMAP_WORLDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD96E7B0)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0xD96E0B0)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD972260)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD9722D0)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0xD96DC00)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD972050)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_ISTRAINWORLD_OFFSET UNITYSDK_OFFSET(0xD972420)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD9721F0)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_NEEDSHOWSPACETYPE_OFFSET UNITYSDK_OFFSET(0xD972370)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_PREWORLDID_OFFSET UNITYSDK_OFFSET(0xD972510)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_SHOWTABS_OFFSET UNITYSDK_OFFSET(0xD96DA30)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_SPACETYPELIST_OFFSET UNITYSDK_OFFSET(0xD972320)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_TABS_OFFSET UNITYSDK_OFFSET(0xD972400)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_TRAINSPACETYPE_OFFSET UNITYSDK_OFFSET(0xD9724C0)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xD96BCD0)
#define RPG_CLIENT_NAVMAP_WORLDDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0xD9721D0)
#define RPG_CLIENT_NAVMAP_WORLDDATA_SET_TABS_OFFSET UNITYSDK_OFFSET(0xD972410)
#define RPG_CLIENT_NAVMAP_WORLDDATA_SET_WORLDID_OFFSET UNITYSDK_OFFSET(0xD9721E0)
#define RPG_CLIENT_NAVMAP_WORLDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD9721C0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int WorldData_TypeDefinitionIndex = 74644;

	class WorldData : public ::System::Object
	{
	public:
		::RPG::GameCore::WorldDataConfigRow* _Row; // 0x10
		::RPG::Client::NavMap::UniverseData* UniverseData; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>* _Tabs_k__BackingField; // 0x20
		::RPG::GameCore::WorldUnlockConfigRow* _UnlockRow; // 0x28
		::System::UInt32 _WorldID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::WorldData* Create(::System::UInt32 a1, ::RPG::Client::NavMap::UniverseData* a2)
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::System::UInt32, ::RPG::Client::NavMap::UniverseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::SubMissionData* GetTrackingSubMissionForShow()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET))(this);
		}

		::System::UInt32 get_WorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_WORLDID_OFFSET))(this);
		}

		::System::Void set_WorldID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_SET_WORLDID_OFFSET))(this, a1);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_VERSEPARAM_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::MapSpaceType>* get_SpaceTypeList()
		{
			return ((::Il2CppArray<::RPG::GameCore::MapSpaceType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_SPACETYPELIST_OFFSET))(this);
		}

		::System::Boolean get_NeedShowSpaceType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_NEEDSHOWSPACETYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>* get_Tabs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_TABS_OFFSET))(this);
		}

		::System::Void set_Tabs(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_SET_TABS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>* get_ShowTabs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_SHOWTABS_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::Boolean get_IsTrainWorld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_ISTRAINWORLD_OFFSET))(this);
		}

		::RPG::GameCore::MapSpaceType get_TrainSpaceType()
		{
			return ((::RPG::GameCore::MapSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_TRAINSPACETYPE_OFFSET))(this);
		}

		::System::UInt32 get_PreWorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA_GET_PREWORLDID_OFFSET))(this);
		}
	};
}
