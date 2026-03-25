#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRolePropertyConfig; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x98947E0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_CREATE_1_OFFSET UNITYSDK_OFFSET(0x988A1D0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_CREATE_OFFSET UNITYSDK_OFFSET(0x98942E0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_FORMAT_OFFSET UNITYSDK_OFFSET(0x98944E0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9894430)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x9894750)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_FORMATVALUE_OFFSET UNITYSDK_OFFSET(0x9894450)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x98947A0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x98943F0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9894410)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9894440)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9894400)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9894420)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0x9894860)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x9894380)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleProperty_TypeDefinitionIndex = 52894;

	class GridFightRoleProperty : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint* StaticGet_Precision()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleProperty_TypeDefinitionIndex)->GetStaticField(0x71D0);
		}
		::RPG::Client::GridFightRolePropertyConfig* _Config_k__BackingField; // 0x10
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _Value_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY__CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightRoleProperty* Create(::RPG::GameCore::AvatarPropertyValue* propertyValue)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::RPG::GameCore::AvatarPropertyValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_CREATE_OFFSET))(propertyValue);
		}

		static ::RPG::Client::GridFightRoleProperty* Create_1(::RPG::GameCore::AvatarPropertyType type, ::RPG::GameCore::FixPoint value)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_CREATE_1_OFFSET))(type, value);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_PROPERTYTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_Value()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_VALUE_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRolePropertyConfig* get_Config()
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightRolePropertyConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRolePropertyConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_CONFIG_OFFSET))(this, value);
		}

		::System::String* get_FormatValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_FORMATVALUE_OFFSET))(this);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_FLOATVALUE_OFFSET))(this);
		}

		::System::Int32 get_IntValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_INTVALUE_OFFSET))(this);
		}

		static ::System::String* Format(::RPG::GameCore::AvatarPropertyType type, ::RPG::GameCore::FixPoint value)
		{
			return ((::System::String*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_FORMAT_OFFSET))(type, value);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightRoleProperty* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRoleProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_COMPARETO_OFFSET))(this, other);
		}
	};
}
