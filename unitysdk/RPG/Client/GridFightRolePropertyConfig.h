#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x9894390)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_DETAILPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x98949E0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0x9894A80)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9894A00)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x9894A40)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISGRIDFIGHTONLY_OFFSET UNITYSDK_OFFSET(0x98949A0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x9894A20)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x9894A60)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x98949C0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9894980)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_DETAILPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x98949F0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0x9894A90)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9894A10)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x9894A50)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISGRIDFIGHTONLY_OFFSET UNITYSDK_OFFSET(0x98949B0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x9894A30)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x9894A70)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x98949D0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9894990)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x98948A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePropertyConfig_TypeDefinitionIndex = 52423;

	class GridFightRolePropertyConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::GridFightRolePropertyConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::GridFightRolePropertyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRolePropertyConfig_TypeDefinitionIndex)->GetStaticField(0x16910);
		}
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _MiniIconPath_k__BackingField; // 0x18
		::System::UInt32 _ExtraEffectID_k__BackingField; // 0x20
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x24
		::System::UInt32 _Order_k__BackingField; // 0x28
		::System::Boolean _IsDisplay_k__BackingField; // 0x2C
		::System::Boolean _IsGridFightOnly_k__BackingField; // 0x2D
		::RPG::Client::TextID _PropertyName_k__BackingField; // 0x30
		::RPG::Client::TextID _DetailPropertyName_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG__CTOR_OFFSET))(this, propertyType);
		}

		static ::RPG::Client::GridFightRolePropertyConfig* GetConfig(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GETCONFIG_OFFSET))(propertyType);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsGridFightOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISGRIDFIGHTONLY_OFFSET))(this);
		}

		::System::Void set_IsGridFightOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISGRIDFIGHTONLY_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_PropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYNAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_DetailPropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_DETAILPROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_DetailPropertyName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_DETAILPROPERTYNAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Void set_MiniIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_MINIICONPATH_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Void set_IsDisplay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISDISPLAY_OFFSET))(this, value);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ORDER_OFFSET))(this, value);
		}

		::System::UInt32 get_ExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_EXTRAEFFECTID_OFFSET))(this);
		}

		::System::Void set_ExtraEffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_EXTRAEFFECTID_OFFSET))(this, value);
		}
	};
}
