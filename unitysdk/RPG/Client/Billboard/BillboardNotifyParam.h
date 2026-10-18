#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class BillboardDataProvider; }
namespace RPG::Client::Billboard { class IBillboardHost; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_CREATETYPETOSHOWDISTANCEMAP_OFFSET UNITYSDK_OFFSET(0xC881A60)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xC881A40)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_HOST_OFFSET UNITYSDK_OFFSET(0xC881980)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_SHOWINSTORYMODE_OFFSET UNITYSDK_OFFSET(0xC881A20)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_SHOWTOP_OFFSET UNITYSDK_OFFSET(0xC881A00)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_XOFFSET_OFFSET UNITYSDK_OFFSET(0xC8819A0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_YOFFSET_OFFSET UNITYSDK_OFFSET(0xC8819C0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_ZOFFSET_OFFSET UNITYSDK_OFFSET(0xC8819E0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xC881A50)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_HOST_OFFSET UNITYSDK_OFFSET(0xC881990)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_SHOWINSTORYMODE_OFFSET UNITYSDK_OFFSET(0xC881A30)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_SHOWTOP_OFFSET UNITYSDK_OFFSET(0xC881A10)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_XOFFSET_OFFSET UNITYSDK_OFFSET(0xC8819B0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_YOFFSET_OFFSET UNITYSDK_OFFSET(0xC8819D0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_ZOFFSET_OFFSET UNITYSDK_OFFSET(0xC8819F0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC881AB0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BillboardNotifyParam_TypeDefinitionIndex = 74973;

	class BillboardNotifyParam : public ::System::Object
	{
	public:
		::RPG::Client::Billboard::BillboardDataProvider* _DataProvider_k__BackingField; // 0x10
		::RPG::Client::Billboard::IBillboardHost* _Host_k__BackingField; // 0x18
		::System::Single _ZOffset_k__BackingField; // 0x20
		::System::Single _XOffset_k__BackingField; // 0x24
		::System::Single _YOffset_k__BackingField; // 0x28
		::System::Boolean _ShowTop_k__BackingField; // 0x2C
		::System::Boolean _ShowInStoryMode_k__BackingField; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardHost* get_Host()
		{
			return ((::RPG::Client::Billboard::IBillboardHost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::RPG::Client::Billboard::IBillboardHost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::IBillboardHost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_HOST_OFFSET))(this, a1);
		}

		::System::Single get_XOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_XOFFSET_OFFSET))(this);
		}

		::System::Void set_XOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_XOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_YOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_YOFFSET_OFFSET))(this);
		}

		::System::Void set_YOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_YOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_ZOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_ZOFFSET_OFFSET))(this);
		}

		::System::Void set_ZOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_ZOFFSET_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowTop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_SHOWTOP_OFFSET))(this);
		}

		::System::Void set_ShowTop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_SHOWTOP_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowInStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_SHOWINSTORYMODE_OFFSET))(this);
		}

		::System::Void set_ShowInStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_SHOWINSTORYMODE_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* get_DataProvider()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_DATAPROVIDER_OFFSET))(this);
		}

		::System::Void set_DataProvider(::RPG::Client::Billboard::BillboardDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardDataProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_DATAPROVIDER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::BillboardShowType, ::System::Single>* CreateTypeToShowDistanceMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::BillboardShowType, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_CREATETYPETOSHOWDISTANCEMAP_OFFSET))(this);
		}
	};
}
