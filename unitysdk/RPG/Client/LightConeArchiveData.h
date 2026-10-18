#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

class Class_1_FF220487FAB45279;
namespace RPG::Client { class LightConeArchiveEntry; }
namespace RPG::GameCore { class EquipmentAtlasRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEARCHIVEDATA_GETLIGHTCONEARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0xD394830)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xD394010)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xD393BA0)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__CONSTRUCTENTRY_OFFSET UNITYSDK_OFFSET(0xD394EE0)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD394F60)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__INITALLLIGHTCONEENTRIES_OFFSET UNITYSDK_OFFSET(0xD393D80)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__ISLIGHTCONESHOULDDISPLAY_OFFSET UNITYSDK_OFFSET(0xD394D80)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__REFRESHLIGHTCONEENTRIES_OFFSET UNITYSDK_OFFSET(0xD394200)
#define RPG_CLIENT_LIGHTCONEARCHIVEDATA__SETLASTIGNORELIGHTCONEIDLIST_OFFSET UNITYSDK_OFFSET(0xD394C20)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeArchiveData_TypeDefinitionIndex = 62429;

	class LightConeArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _LastIgnoreLightConeIDList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FF220487FAB45279* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_FF220487FAB45279* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEDATA_REFRESH_OFFSET))(this, a1);
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
	};
}
