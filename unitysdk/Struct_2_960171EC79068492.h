#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RegionContentLevel.h"
#include "unitysdk/RPG/Client/RegionVisibility.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_960171EC79068492_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AF5D10)
#define STRUCT_2_960171EC79068492_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AF5CB0)
#define STRUCT_2_960171EC79068492_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AF5D20)
#define STRUCT_2_960171EC79068492_GET_CONTENTLEVEL_OFFSET UNITYSDK_OFFSET(0x19050)
#define STRUCT_2_960171EC79068492_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x784260)
#define STRUCT_2_960171EC79068492_METHOD_2_502C0C74DDECD92A_1_OFFSET UNITYSDK_OFFSET(0x1916B6C0)
#define STRUCT_2_960171EC79068492_METHOD_2_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0x1916B640)
#define STRUCT_2_960171EC79068492_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x3AF5C20)
#define STRUCT_2_960171EC79068492_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AF5D70)
#define STRUCT_2_960171EC79068492__CCTOR_OFFSET UNITYSDK_OFFSET(0x1916B750)
#define STRUCT_2_960171EC79068492__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4C20)

inline static constexpr unsigned int Struct_2_960171EC79068492_TypeDefinitionIndex = 62271;

struct alignas(4) Struct_2_960171EC79068492
{
	static ::Struct_2_960171EC79068492* StaticGet_KGJAMKFPOAB()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xF990);
	}
	static ::Struct_2_960171EC79068492* StaticGet_JLHCDBJEIDM()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xF998);
	}
	static ::Struct_2_960171EC79068492* StaticGet_HKEPJLDBGIG()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xF9A0);
	}
	static ::Struct_2_960171EC79068492* StaticGet_NLCDGIPGFDJ()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xF9A8);
	}
	static ::Struct_2_960171EC79068492* StaticGet_DMKJAJLNEBK()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xF9B0);
	}
	static ::Struct_2_960171EC79068492* StaticGet_DEKDLAPIMOH()
	{
		return (::Struct_2_960171EC79068492*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_960171EC79068492_TypeDefinitionIndex)->GetStaticField(0xF9B8);
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
};
