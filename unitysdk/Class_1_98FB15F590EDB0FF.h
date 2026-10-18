#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_8;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_98FB15F590EDB0FF_METHOD_1_6CFA736A4D2E317D_OFFSET UNITYSDK_OFFSET(0x164D2F20)
#define CLASS_1_98FB15F590EDB0FF_METHOD_1_7A51614F23C1DAA9_OFFSET UNITYSDK_OFFSET(0x164D2F90)
#define CLASS_1_98FB15F590EDB0FF_METHOD_1_C8C72C21D4302B18_OFFSET UNITYSDK_OFFSET(0x164D2F30)
#define CLASS_1_98FB15F590EDB0FF_METHOD_1_E20365345CC9C440_OFFSET UNITYSDK_OFFSET(0x164D3110)
#define CLASS_1_98FB15F590EDB0FF__CTOR_OFFSET UNITYSDK_OFFSET(0x164D3180)

inline static constexpr unsigned int Class_1_98FB15F590EDB0FF_TypeDefinitionIndex = 56515;

class Class_1_98FB15F590EDB0FF : public ::System::Object
{
public:
	static ::Class_1_98FB15F590EDB0FF** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_98FB15F590EDB0FF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98FB15F590EDB0FF_TypeDefinitionIndex)->GetStaticField(0x68C90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98FB15F590EDB0FF__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_6CFA736A4D2E317D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98FB15F590EDB0FF_METHOD_1_6CFA736A4D2E317D_OFFSET))(this);
	}

	::System::String* Method_1_C8C72C21D4302B18(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98FB15F590EDB0FF_METHOD_1_C8C72C21D4302B18_OFFSET))(this, a1);
	}

	::Class_1_7A22A3DBEEDD1F80* Method_1_7A51614F23C1DAA9(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
	{
		return ((::Class_1_7A22A3DBEEDD1F80*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_98FB15F590EDB0FF_METHOD_1_7A51614F23C1DAA9_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_8* Method_1_E20365345CC9C440()
	{
		return ((::Class_0_16E4307DCC419505_8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_98FB15F590EDB0FF_METHOD_1_E20365345CC9C440_OFFSET))();
	}
};
