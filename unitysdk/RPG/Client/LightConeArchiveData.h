#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

class Class_1_973F1F5DEEACFA6C;
namespace RPG::Client { class LightConeArchiveEntry; }
namespace RPG::GameCore { class EquipmentAtlasRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEARCHIVEDATA_GETLIGHTCONEARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0xBD71990)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xBD71400)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xBD71010)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__CONSTRUCTENTRY_OFFSET UNITYSDK_OFFSET(0xBD71F80)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD72000)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__INITALLLIGHTCONEENTRIES_OFFSET UNITYSDK_OFFSET(0xBD71170)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__ISLIGHTCONESHOULDDISPLAY_OFFSET UNITYSDK_OFFSET(0xBD71E70)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__REFRESHLIGHTCONEENTRIES_OFFSET UNITYSDK_OFFSET(0xBD71560)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__SETLASTIGNORELIGHTCONEIDLIST_OFFSET UNITYSDK_OFFSET(0xBD71D80)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0xBD72070)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0xBD72010)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeArchiveData_TypeDefinitionIndex = 58411;

	class LightConeArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _LastIgnoreLightConeIDList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LightConeArchiveEntry*>* GetLightConeArchiveEntries(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LightConeArchiveEntry*>*(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA_GETLIGHTCONEARCHIVEENTRIES_OFFSET))(this, a1);
		}

		::System::Void _InitAllLightConeEntries(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__INITALLLIGHTCONEENTRIES_OFFSET))(this, a1);
		}

		::System::Void _RefreshLightConeEntries(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__REFRESHLIGHTCONEENTRIES_OFFSET))(this, a1);
		}

		::System::Boolean _IsLightConeShouldDisplay(::RPG::GameCore::EquipmentAtlasRow* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EquipmentAtlasRow*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__ISLIGHTCONESHOULDDISPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void _ConstructEntry(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__CONSTRUCTENTRY_OFFSET))(this, a1);
		}

		::System::Void _SetLastIgnoreLightConeIDList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__SETLASTIGNORELIGHTCONEIDLIST_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, a1);
		}
	};
}
