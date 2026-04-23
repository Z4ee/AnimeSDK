#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_8.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E1CAE3F13B7E43AD_GET_ICON_OFFSET UNITYSDK_OFFSET(0xD35AEA0)
#define CLASS_1_E1CAE3F13B7E43AD_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD35AEC0)
#define CLASS_1_E1CAE3F13B7E43AD_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD35AE80)
#define CLASS_1_E1CAE3F13B7E43AD_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xD35AEE0)
#define CLASS_1_E1CAE3F13B7E43AD_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xD35AE60)
#define CLASS_1_E1CAE3F13B7E43AD_METHOD_1_A6CBA71AB63A2BFB_OFFSET UNITYSDK_OFFSET(0xD35AD30)
#define CLASS_1_E1CAE3F13B7E43AD_SET_ICON_OFFSET UNITYSDK_OFFSET(0xD35AEB0)
#define CLASS_1_E1CAE3F13B7E43AD_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD35AED0)
#define CLASS_1_E1CAE3F13B7E43AD_SET_NAME_OFFSET UNITYSDK_OFFSET(0xD35AE90)
#define CLASS_1_E1CAE3F13B7E43AD_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xD35AEF0)
#define CLASS_1_E1CAE3F13B7E43AD_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xD35AE70)
#define CLASS_1_E1CAE3F13B7E43AD__CTOR_OFFSET UNITYSDK_OFFSET(0xD35AE50)

inline static constexpr unsigned int Class_1_E1CAE3F13B7E43AD_TypeDefinitionIndex = 70139;

class Class_1_E1CAE3F13B7E43AD : public ::System::Object
{
public:
	::System::String* _Icon_k__BackingField; // 0x10
	::System::Boolean _IsShow_k__BackingField; // 0x18
	::Enum_3_71AA90D596A09AC8_8 _PropertyType_k__BackingField; // 0x1C
	::System::Int32 _Order_k__BackingField; // 0x20
	::RPG::Client::TextID _Name_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD__CTOR_OFFSET))(this);
	}

	static ::Class_1_E1CAE3F13B7E43AD* Method_1_A6CBA71AB63A2BFB(::Enum_3_71AA90D596A09AC8_8 a1)
	{
		return ((::Class_1_E1CAE3F13B7E43AD*(*)(::Enum_3_71AA90D596A09AC8_8))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_METHOD_1_A6CBA71AB63A2BFB_OFFSET))(a1);
	}

	::Enum_3_71AA90D596A09AC8_8 get_PropertyType()
	{
		return ((::Enum_3_71AA90D596A09AC8_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_PropertyType(::Enum_3_71AA90D596A09AC8_8 value)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_8))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_SET_PROPERTYTYPE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_SET_NAME_OFFSET))(this, value);
	}

	::System::String* get_Icon()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_GET_ICON_OFFSET))(this);
	}

	::System::Void set_Icon(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_SET_ICON_OFFSET))(this, value);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_GET_ISSHOW_OFFSET))(this);
	}

	::System::Void set_IsShow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_SET_ISSHOW_OFFSET))(this, value);
	}

	::System::Int32 get_Order()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_GET_ORDER_OFFSET))(this);
	}

	::System::Void set_Order(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E1CAE3F13B7E43AD_SET_ORDER_OFFSET))(this, value);
	}
};
