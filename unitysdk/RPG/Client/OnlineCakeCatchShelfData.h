#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_CREATENORMALSHELFDATA_OFFSET UNITYSDK_OFFSET(0x191CEDB0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_CREATESPECIALSHELFDATA_OFFSET UNITYSDK_OFFSET(0x191CEF50)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_CURRENTINTERACTCOUNT_OFFSET UNITYSDK_OFFSET(0x191CF3D0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISSPECIALSHELF_OFFSET UNITYSDK_OFFSET(0x191CF430)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x191CF450)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISUSING_OFFSET UNITYSDK_OFFSET(0x191CF390)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_SHELFICON_OFFSET UNITYSDK_OFFSET(0x191CF3F0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_SHELFNAME_OFFSET UNITYSDK_OFFSET(0x191CF410)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x191CF1F0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x191CF2B0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_CURRENTINTERACTCOUNT_OFFSET UNITYSDK_OFFSET(0x191CF3E0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_ISSPECIALSHELF_OFFSET UNITYSDK_OFFSET(0x191CF440)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x191CF460)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_SHELFICON_OFFSET UNITYSDK_OFFSET(0x191CF400)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_SHELFNAME_OFFSET UNITYSDK_OFFSET(0x191CF420)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x191CEF40)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlineCakeCatchShelfData_TypeDefinitionIndex = 63054;

	class OnlineCakeCatchShelfData : public ::System::Object
	{
	public:
		::System::String* _ShelfIcon_k__BackingField; // 0x10
		::System::UInt32 _CurrentInteractCount_k__BackingField; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x1C
		::System::Boolean _IsSpecialShelf_k__BackingField; // 0x1D
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
