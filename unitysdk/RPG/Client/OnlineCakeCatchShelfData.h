#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_CREATENORMALSHELFDATA_OFFSET UNITYSDK_OFFSET(0xC2F50F0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_CREATESPECIALSHELFDATA_OFFSET UNITYSDK_OFFSET(0xC2F5290)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_CURRENTINTERACTCOUNT_OFFSET UNITYSDK_OFFSET(0xC2F5650)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISSPECIALSHELF_OFFSET UNITYSDK_OFFSET(0xC2F56B0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC2F56D0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISUSING_OFFSET UNITYSDK_OFFSET(0xC2F5640)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_SHELFICON_OFFSET UNITYSDK_OFFSET(0xC2F5670)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_SHELFNAME_OFFSET UNITYSDK_OFFSET(0xC2F5690)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0xC2F54A0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0xC2F5560)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_CURRENTINTERACTCOUNT_OFFSET UNITYSDK_OFFSET(0xC2F5660)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_ISSPECIALSHELF_OFFSET UNITYSDK_OFFSET(0xC2F56C0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC2F56E0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_SHELFICON_OFFSET UNITYSDK_OFFSET(0xC2F5680)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_SHELFNAME_OFFSET UNITYSDK_OFFSET(0xC2F56A0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2F5280)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlineCakeCatchShelfData_TypeDefinitionIndex = 58935;

	class OnlineCakeCatchShelfData : public ::System::Object
	{
	public:
		::System::String* _ShelfIcon_k__BackingField; // 0x10
		::System::Boolean _IsSpecialShelf_k__BackingField; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x19
		::System::UInt32 _CurrentInteractCount_k__BackingField; // 0x1C
		::RPG::Client::TextID _ShelfName_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::OnlineCakeCatchShelfData* CreateNormalShelfData()
		{
			return ((::RPG::Client::OnlineCakeCatchShelfData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_CREATENORMALSHELFDATA_OFFSET))();
		}

		static ::RPG::Client::OnlineCakeCatchShelfData* CreateSpecialShelfData()
		{
			return ((::RPG::Client::OnlineCakeCatchShelfData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_CREATESPECIALSHELFDATA_OFFSET))();
		}

		::System::Boolean IsSpecialShelfUnlockStatusSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET))(this);
		}

		::System::Void SetSpecialShelfUnlockStatusSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET))(this);
		}

		::System::Boolean get_IsUsing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISUSING_OFFSET))(this);
		}

		::System::UInt32 get_CurrentInteractCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_CURRENTINTERACTCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentInteractCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_CURRENTINTERACTCOUNT_OFFSET))(this, a1);
		}

		::System::String* get_ShelfIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_SHELFICON_OFFSET))(this);
		}

		::System::Void set_ShelfIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_SHELFICON_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ShelfName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_SHELFNAME_OFFSET))(this);
		}

		::System::Void set_ShelfName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_SHELFNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecialShelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISSPECIALSHELF_OFFSET))(this);
		}

		::System::Void set_IsSpecialShelf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_ISSPECIALSHELF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}
	};
}
