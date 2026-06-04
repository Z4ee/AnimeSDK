#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RegionContentLevel.h"
#include "unitysdk/RPG/Client/RegionVisibility.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_960171EC79068492_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2BC3750)
#define STRUCT_2_960171EC79068492_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BC36F0)
#define STRUCT_2_960171EC79068492_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2BC3760)
#define STRUCT_2_960171EC79068492_GET_CONTENTLEVEL_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_960171EC79068492_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1E110)
#define STRUCT_2_960171EC79068492_METHOD_2_502C0C74DDECD92A_1_OFFSET UNITYSDK_OFFSET(0x139BAF30)
#define STRUCT_2_960171EC79068492_METHOD_2_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0x139BAEB0)
#define STRUCT_2_960171EC79068492_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x2BC3660)
#define STRUCT_2_960171EC79068492_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2BC37B0)
#define STRUCT_2_960171EC79068492__CCTOR_OFFSET UNITYSDK_OFFSET(0x139BAFC0)
#define STRUCT_2_960171EC79068492__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBE0)
#define STRUCT_2_960171EC79068492___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BC37C0)
#define STRUCT_2_960171EC79068492___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2BC3800)
#define STRUCT_2_960171EC79068492___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2BC38B0)

inline static constexpr unsigned int Struct_2_960171EC79068492_TypeDefinitionIndex = 58170;

struct alignas(4) Struct_2_960171EC79068492
{
	static ::Struct_2_960171EC79068492* StaticGet_Field_2_0()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xD050);
	}
	static ::Struct_2_960171EC79068492* StaticGet_Field_2_1()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xD058);
	}
	static ::Struct_2_960171EC79068492* StaticGet_Field_2_2()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xD060);
	}
	static ::Struct_2_960171EC79068492* StaticGet_Field_2_3()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xD068);
	}
	static ::Struct_2_960171EC79068492* StaticGet_Field_2_4()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xD070);
	}
	static ::Struct_2_960171EC79068492* StaticGet_Field_2_5()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xD078);
	}
	::RPG::Client::RegionContentLevel _ContentLevel_k__BackingField; // 0x10
	::RPG::Client::RegionVisibility _Visibility_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::Client::RegionContentLevel a1, ::RPG::Client::RegionVisibility a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492__CCTOR_OFFSET))();
	}

	::RPG::Client::RegionContentLevel get_ContentLevel()
	{
		return ((::RPG::Client::RegionContentLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492_GET_CONTENTLEVEL_OFFSET))(this);
	}

	::RPG::Client::RegionVisibility get_Visibility()
	{
		return ((::RPG::Client::RegionVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492_GET_VISIBILITY_OFFSET))(this);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492_METHOD_2_77577333B4681208_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_960171EC79068492 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_960171EC79068492))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492_TOSTRING_OFFSET))(this);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A(::Struct_2_960171EC79068492 a1, ::Struct_2_960171EC79068492 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_960171EC79068492, ::Struct_2_960171EC79068492))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492_METHOD_2_502C0C74DDECD92A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A_1(::Struct_2_960171EC79068492 a1, ::Struct_2_960171EC79068492 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_960171EC79068492, ::Struct_2_960171EC79068492))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492_METHOD_2_502C0C74DDECD92A_1_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_960171EC79068492___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
