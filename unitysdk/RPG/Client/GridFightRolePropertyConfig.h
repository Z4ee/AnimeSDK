#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xBBE3360)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_DETAILPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xBBE3A90)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xBBE3B30)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBBE3AB0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xBBE3AF0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISGRIDFIGHTONLY_OFFSET UNITYSDK_OFFSET(0xBBE3A50)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xBBE3AD0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xBBE3B10)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xBBE3A70)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xBBE3A30)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_DETAILPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xBBE3AA0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xBBE3B40)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBBE3AC0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xBBE3B00)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISGRIDFIGHTONLY_OFFSET UNITYSDK_OFFSET(0xBBE3A60)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xBBE3AE0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xBBE3B20)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xBBE3A80)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xBBE3A40)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE3950)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePropertyConfig_TypeDefinitionIndex = 60315;

	class GridFightRolePropertyConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::GridFightRolePropertyConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::GridFightRolePropertyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRolePropertyConfig_TypeDefinitionIndex)->GetStaticField(0x32CE0);
		}
		::System::String* _MiniIconPath_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::UInt32 _ExtraEffectID_k__BackingField; // 0x20
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x24
		::RPG::Client::TextID _PropertyName_k__BackingField; // 0x28
		::RPG::Client::TextID _DetailPropertyName_k__BackingField; // 0x38
		::System::Boolean _IsDisplay_k__BackingField; // 0x48
		::System::Boolean _IsGridFightOnly_k__BackingField; // 0x49
		::System::UInt32 _Order_k__BackingField; // 0x4C

		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightRolePropertyConfig* GetConfig(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGridFightOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISGRIDFIGHTONLY_OFFSET))(this);
		}

		::System::Void set_IsGridFightOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISGRIDFIGHTONLY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DetailPropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_DETAILPROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_DetailPropertyName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_DETAILPROPERTYNAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Void set_MiniIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_MINIICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Void set_IsDisplay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISDISPLAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ORDER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_EXTRAEFFECTID_OFFSET))(this);
		}

		::System::Void set_ExtraEffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_EXTRAEFFECTID_OFFSET))(this, a1);
		}
	};
}
