#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_23;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_98FB15F590EDB0FF_METHOD_1_41D3E4F30076EB3F_OFFSET UNITYSDK_OFFSET(0x11432BE0)
#define CLASS_1_98FB15F590EDB0FF_METHOD_1_7A51614F23C1DAA9_OFFSET UNITYSDK_OFFSET(0x11432C40)
#define CLASS_1_98FB15F590EDB0FF_METHOD_1_9239663B8D029640_OFFSET UNITYSDK_OFFSET(0x11432BD0)
#define CLASS_1_98FB15F590EDB0FF_METHOD_1_E20365345CC9C440_OFFSET UNITYSDK_OFFSET(0x11432DC0)
#define CLASS_1_98FB15F590EDB0FF__CTOR_OFFSET UNITYSDK_OFFSET(0x11432E30)

inline static constexpr unsigned int Class_1_98FB15F590EDB0FF_TypeDefinitionIndex = 45449;

class Class_1_98FB15F590EDB0FF : public ::System::Object
{
public:
	static ::Class_1_98FB15F590EDB0FF** StaticGet_Field_1_0()
	{
		return (::Class_1_98FB15F590EDB0FF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98FB15F590EDB0FF_TypeDefinitionIndex)->GetStaticField(0x346E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98FB15F590EDB0FF__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_9239663B8D029640()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98FB15F590EDB0FF_METHOD_1_9239663B8D029640_OFFSET))(this);
	}

	::System::String* Method_1_41D3E4F30076EB3F(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98FB15F590EDB0FF_METHOD_1_41D3E4F30076EB3F_OFFSET))(this, a1);
	}

	::Class_1_7A22A3DBEEDD1F80* Method_1_7A51614F23C1DAA9(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
	{
		return ((::Class_1_7A22A3DBEEDD1F80*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_98FB15F590EDB0FF_METHOD_1_7A51614F23C1DAA9_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_23* Method_1_E20365345CC9C440()
	{
		return ((::Class_0_16E4307DCC419505_23*(*)())((::PBYTE)hIl2Cpp + CLASS_1_98FB15F590EDB0FF_METHOD_1_E20365345CC9C440_OFFSET))();
	}
};
