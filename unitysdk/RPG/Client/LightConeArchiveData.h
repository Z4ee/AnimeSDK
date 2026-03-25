#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

class Class_1_973F1F5DEEACFA6C;
namespace RPG::Client { class LightConeArchiveEntry; }
namespace RPG::GameCore { class EquipmentAtlasRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEARCHIVEDATA_GETLIGHTCONEARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0x997A190)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9979BB0)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x99797C0)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__CONSTRUCTENTRY_OFFSET UNITYSDK_OFFSET(0x997A6C0)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x997A740)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__INITALLLIGHTCONEENTRIES_OFFSET UNITYSDK_OFFSET(0x9979970)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__ISLIGHTCONESHOULDDISPLAY_OFFSET UNITYSDK_OFFSET(0x997A5B0)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__REFRESHLIGHTCONEENTRIES_OFFSET UNITYSDK_OFFSET(0x9979D70)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__SETLASTIGNORELIGHTCONEIDLIST_OFFSET UNITYSDK_OFFSET(0x997A4C0)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0x997A7C0)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0x997A750)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeArchiveData_TypeDefinitionIndex = 50720;

	class LightConeArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _LastIgnoreLightConeIDList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA_SYNC_OFFSET))(this, data);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA_REFRESH_OFFSET))(this, data);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LightConeArchiveEntry*>* GetLightConeArchiveEntries(::RPG::GameCore::AvatarBaseType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LightConeArchiveEntry*>*(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA_GETLIGHTCONEARCHIVEENTRIES_OFFSET))(this, type);
		}

		::System::Void _InitAllLightConeEntries(::System::Collections::Generic::IList_1<::System::UInt32>* ignoreLightConeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__INITALLLIGHTCONEENTRIES_OFFSET))(this, ignoreLightConeIDList);
		}

		::System::Void _RefreshLightConeEntries(::System::Collections::Generic::IList_1<::System::UInt32>* ignoreLightConeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__REFRESHLIGHTCONEENTRIES_OFFSET))(this, ignoreLightConeIDList);
		}

		::System::Boolean _IsLightConeShouldDisplay(::RPG::GameCore::EquipmentAtlasRow* atlasRow, ::System::Collections::Generic::IList_1<::System::UInt32>* ignoreLightConeIDList)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EquipmentAtlasRow*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__ISLIGHTCONESHOULDDISPLAY_OFFSET))(this, atlasRow, ignoreLightConeIDList);
		}

		::System::Void _ConstructEntry(::System::UInt32 lightconeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__CONSTRUCTENTRY_OFFSET))(this, lightconeID);
		}

		::System::Void _SetLastIgnoreLightConeIDList(::System::Collections::Generic::IList_1<::System::UInt32>* ignoreLightConeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__SETLASTIGNORELIGHTCONEIDLIST_OFFSET))(this, ignoreLightConeIDList);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, P0);
		}
	};
}
