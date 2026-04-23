#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class BillboardDataProvider; }
namespace RPG::Client::Billboard { class IBillboardHost; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_CREATETYPETOSHOWDISTANCEMAP_OFFSET UNITYSDK_OFFSET(0x9E992C0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x9E992A0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_HOST_OFFSET UNITYSDK_OFFSET(0x9E991E0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_SHOWINSTORYMODE_OFFSET UNITYSDK_OFFSET(0x9E99280)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_SHOWTOP_OFFSET UNITYSDK_OFFSET(0x9E99260)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_XOFFSET_OFFSET UNITYSDK_OFFSET(0x9E99200)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_YOFFSET_OFFSET UNITYSDK_OFFSET(0x9E99220)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_ZOFFSET_OFFSET UNITYSDK_OFFSET(0x9E99240)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x9E992B0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_HOST_OFFSET UNITYSDK_OFFSET(0x9E991F0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_SHOWINSTORYMODE_OFFSET UNITYSDK_OFFSET(0x9E99290)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_SHOWTOP_OFFSET UNITYSDK_OFFSET(0x9E99270)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_XOFFSET_OFFSET UNITYSDK_OFFSET(0x9E99210)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_YOFFSET_OFFSET UNITYSDK_OFFSET(0x9E99230)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_ZOFFSET_OFFSET UNITYSDK_OFFSET(0x9E99250)
#define RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9E993D0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BillboardNotifyParam_TypeDefinitionIndex = 69040;

	class BillboardNotifyParam : public ::System::Object
	{
	public:
		::RPG::Client::Billboard::BillboardDataProvider* _DataProvider_k__BackingField; // 0x10
		::RPG::Client::Billboard::IBillboardHost* _Host_k__BackingField; // 0x18
		::System::Boolean _ShowTop_k__BackingField; // 0x20
		::System::Boolean _ShowInStoryMode_k__BackingField; // 0x21
		::System::Single _XOffset_k__BackingField; // 0x24
		::System::Single _ZOffset_k__BackingField; // 0x28
		::System::Single _YOffset_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardHost* get_Host()
		{
			return ((::RPG::Client::Billboard::IBillboardHost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::RPG::Client::Billboard::IBillboardHost* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::IBillboardHost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_HOST_OFFSET))(this, value);
		}

		::System::Single get_XOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_XOFFSET_OFFSET))(this);
		}

		::System::Void set_XOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_XOFFSET_OFFSET))(this, value);
		}

		::System::Single get_YOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_YOFFSET_OFFSET))(this);
		}

		::System::Void set_YOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_YOFFSET_OFFSET))(this, value);
		}

		::System::Single get_ZOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_ZOFFSET_OFFSET))(this);
		}

		::System::Void set_ZOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_ZOFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_ShowTop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_SHOWTOP_OFFSET))(this);
		}

		::System::Void set_ShowTop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_SHOWTOP_OFFSET))(this, value);
		}

		::System::Boolean get_ShowInStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_SHOWINSTORYMODE_OFFSET))(this);
		}

		::System::Void set_ShowInStoryMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_SHOWINSTORYMODE_OFFSET))(this, value);
		}

		::RPG::Client::Billboard::BillboardDataProvider* get_DataProvider()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_GET_DATAPROVIDER_OFFSET))(this);
		}

		::System::Void set_DataProvider(::RPG::Client::Billboard::BillboardDataProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardDataProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_SET_DATAPROVIDER_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::BillboardShowType, ::System::Single>* CreateTypeToShowDistanceMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::BillboardShowType, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDNOTIFYPARAM_CREATETYPETOSHOWDISTANCEMAP_OFFSET))(this);
		}
	};
}
