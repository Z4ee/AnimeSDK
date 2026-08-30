#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRolePropertyConfig; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xD304090)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD2F40C0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_CREATE_OFFSET UNITYSDK_OFFSET(0xD303A80)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_FORMAT_OFFSET UNITYSDK_OFFSET(0xD303C90)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD303BE0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0xD303F50)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_FORMATVALUE_OFFSET UNITYSDK_OFFSET(0xD303C00)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0xD303FB0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xD303BA0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xD303BC0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD303BF0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xD303BB0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xD303BD0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0xD304110)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xD303B20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleProperty_TypeDefinitionIndex = 65204;

	class GridFightRoleProperty : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint* StaticGet_Precision()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleProperty_TypeDefinitionIndex)->GetStaticField(0x10310);
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

		static ::RPG::Client::GridFightRoleProperty* Create(::RPG::GameCore::AvatarPropertyValue* a1)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::RPG::GameCore::AvatarPropertyValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightRoleProperty* Create_1(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_CREATE_1_OFFSET))(a1, a2);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Value()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_VALUE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRolePropertyConfig* get_Config()
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightRolePropertyConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRolePropertyConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_SET_CONFIG_OFFSET))(this, a1);
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

		static ::System::String* Format(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_FORMAT_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightRoleProperty* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRoleProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTY_COMPARETO_OFFSET))(this, a1);
		}
	};
}
