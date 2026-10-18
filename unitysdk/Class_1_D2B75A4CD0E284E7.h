#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_DD57899CB8704013;
namespace System { class String; }

#define CLASS_1_D2B75A4CD0E284E7_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x12D08540)
#define CLASS_1_D2B75A4CD0E284E7_GET_PRODUCTPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x12D08560)
#define CLASS_1_D2B75A4CD0E284E7_GET_PRODUCTSTATS_OFFSET UNITYSDK_OFFSET(0x12D08580)
#define CLASS_1_D2B75A4CD0E284E7_METHOD_1_91D8D1394C3376D8_OFFSET UNITYSDK_OFFSET(0x12D085A0)
#define CLASS_1_D2B75A4CD0E284E7_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x12D08550)
#define CLASS_1_D2B75A4CD0E284E7_SET_PRODUCTPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x12D08570)
#define CLASS_1_D2B75A4CD0E284E7_SET_PRODUCTSTATS_OFFSET UNITYSDK_OFFSET(0x12D08590)
#define CLASS_1_D2B75A4CD0E284E7__CTOR_OFFSET UNITYSDK_OFFSET(0x12D08640)

inline static constexpr unsigned int Class_1_D2B75A4CD0E284E7_TypeDefinitionIndex = 80188;

class Class_1_D2B75A4CD0E284E7 : public ::System::Object
{
public:
	::Class_1_DD57899CB8704013* _ProductStats_k__BackingField; // 0x10
	::System::String* _ProductPortraitPath_k__BackingField; // 0x18
	::RPG::Client::TextID _ProductName_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::TextID a1, ::System::String* a2, ::Class_1_DD57899CB8704013* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*, ::Class_1_DD57899CB8704013*))((::PBYTE)hIl2Cpp + CLASS_1_D2B75A4CD0E284E7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::TextID get_ProductName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B75A4CD0E284E7_GET_PRODUCTNAME_OFFSET))(this);
	}

	::System::Void set_ProductName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_D2B75A4CD0E284E7_SET_PRODUCTNAME_OFFSET))(this, a1);
	}

	::System::String* get_ProductPortraitPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B75A4CD0E284E7_GET_PRODUCTPORTRAITPATH_OFFSET))(this);
	}

	::System::Void set_ProductPortraitPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D2B75A4CD0E284E7_SET_PRODUCTPORTRAITPATH_OFFSET))(this, a1);
	}

	::Class_1_DD57899CB8704013* get_ProductStats()
	{
		return ((::Class_1_DD57899CB8704013*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B75A4CD0E284E7_GET_PRODUCTSTATS_OFFSET))(this);
	}

	::System::Void set_ProductStats(::Class_1_DD57899CB8704013* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD57899CB8704013*))((::PBYTE)hIl2Cpp + CLASS_1_D2B75A4CD0E284E7_SET_PRODUCTSTATS_OFFSET))(this, a1);
	}

	static ::Class_1_D2B75A4CD0E284E7* Method_1_91D8D1394C3376D8(::RPG::Client::TextID a1, ::System::String* a2, ::Class_1_DD57899CB8704013* a3)
	{
		return ((::Class_1_D2B75A4CD0E284E7*(*)(::RPG::Client::TextID, ::System::String*, ::Class_1_DD57899CB8704013*))((::PBYTE)hIl2Cpp + CLASS_1_D2B75A4CD0E284E7_METHOD_1_91D8D1394C3376D8_OFFSET))(a1, a2, a3);
	}
};
