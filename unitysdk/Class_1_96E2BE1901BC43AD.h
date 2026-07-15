#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_9.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_96E2BE1901BC43AD_GET_ICON_OFFSET UNITYSDK_OFFSET(0x16500660)
#define CLASS_1_96E2BE1901BC43AD_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x16500680)
#define CLASS_1_96E2BE1901BC43AD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16500640)
#define CLASS_1_96E2BE1901BC43AD_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x165006A0)
#define CLASS_1_96E2BE1901BC43AD_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x16500620)
#define CLASS_1_96E2BE1901BC43AD_METHOD_1_A6CBA71AB63A2BFB_OFFSET UNITYSDK_OFFSET(0x165004F0)
#define CLASS_1_96E2BE1901BC43AD_SET_ICON_OFFSET UNITYSDK_OFFSET(0x16500670)
#define CLASS_1_96E2BE1901BC43AD_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x16500690)
#define CLASS_1_96E2BE1901BC43AD_SET_NAME_OFFSET UNITYSDK_OFFSET(0x16500650)
#define CLASS_1_96E2BE1901BC43AD_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x165006B0)
#define CLASS_1_96E2BE1901BC43AD_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x16500630)
#define CLASS_1_96E2BE1901BC43AD__CTOR_OFFSET UNITYSDK_OFFSET(0x16500610)

inline static constexpr unsigned int Class_1_96E2BE1901BC43AD_TypeDefinitionIndex = 72464;

class Class_1_96E2BE1901BC43AD : public ::System::Object
{
public:
	::System::String* _Icon_k__BackingField; // 0x10
	::RPG::Client::TextID _Name_k__BackingField; // 0x18
	::System::Boolean _IsShow_k__BackingField; // 0x28
	::Enum_3_71AA90D596A09AC8_9 _PropertyType_k__BackingField; // 0x2C
	::System::Int32 _Order_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD__CTOR_OFFSET))(this);
	}

	static ::Class_1_96E2BE1901BC43AD* Method_1_A6CBA71AB63A2BFB(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::Class_1_96E2BE1901BC43AD*(*)(::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_METHOD_1_A6CBA71AB63A2BFB_OFFSET))(a1);
	}

	::Enum_3_71AA90D596A09AC8_9 get_PropertyType()
	{
		return ((::Enum_3_71AA90D596A09AC8_9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_PropertyType(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_SET_PROPERTYTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_Icon()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_GET_ICON_OFFSET))(this);
	}

	::System::Void set_Icon(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_SET_ICON_OFFSET))(this, a1);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_GET_ISSHOW_OFFSET))(this);
	}

	::System::Void set_IsShow(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_SET_ISSHOW_OFFSET))(this, a1);
	}

	::System::Int32 get_Order()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_GET_ORDER_OFFSET))(this);
	}

	::System::Void set_Order(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_96E2BE1901BC43AD_SET_ORDER_OFFSET))(this, a1);
	}
};
