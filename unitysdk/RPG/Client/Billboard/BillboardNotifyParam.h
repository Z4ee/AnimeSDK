#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class BillboardDataProvider; }
namespace RPG::Client::Billboard { class IBillboardHost; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_CREATETYPETOSHOWDISTANCEMAP_OFFSET UNITYSDK_OFFSET(0x19FDD450)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x19FDD430)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_HOST_OFFSET UNITYSDK_OFFSET(0x19FDD370)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_SHOWINSTORYMODE_OFFSET UNITYSDK_OFFSET(0x19FDD410)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_SHOWTOP_OFFSET UNITYSDK_OFFSET(0x19FDD3F0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_XOFFSET_OFFSET UNITYSDK_OFFSET(0x19FDD390)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_YOFFSET_OFFSET UNITYSDK_OFFSET(0x19FDD3B0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_ZOFFSET_OFFSET UNITYSDK_OFFSET(0x19FDD3D0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x19FDD440)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_HOST_OFFSET UNITYSDK_OFFSET(0x19FDD380)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_SHOWINSTORYMODE_OFFSET UNITYSDK_OFFSET(0x19FDD420)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_SHOWTOP_OFFSET UNITYSDK_OFFSET(0x19FDD400)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_XOFFSET_OFFSET UNITYSDK_OFFSET(0x19FDD3A0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_YOFFSET_OFFSET UNITYSDK_OFFSET(0x19FDD3C0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_ZOFFSET_OFFSET UNITYSDK_OFFSET(0x19FDD3E0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19FDD4A0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BillboardNotifyParam_TypeDefinitionIndex = 71375;

	class BillboardNotifyParam : public ::System::Object
	{
	public:
		::RPG::Client::Billboard::IBillboardHost* _Host_k__BackingField; // 0x10
		::RPG::Client::Billboard::BillboardDataProvider* _DataProvider_k__BackingField; // 0x18
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
