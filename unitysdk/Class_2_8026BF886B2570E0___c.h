#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_34A82ADD3D230E95;
class Class_1_F50CC8D9599D41DE;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_8026BF886B2570E0___C_METHOD_1_521FF42A136F3888_1_OFFSET UNITYSDK_OFFSET(0x18B76200)
#define CLASS_2_8026BF886B2570E0___C_METHOD_1_521FF42A136F3888_OFFSET UNITYSDK_OFFSET(0x18B761B0)
#define CLASS_2_8026BF886B2570E0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B76160)
#define CLASS_2_8026BF886B2570E0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B761A0)

inline static constexpr unsigned int Class_2_8026BF886B2570E0___c_TypeDefinitionIndex = 44386;

class Class_2_8026BF886B2570E0___c : public ::System::Object
{
public:
	static ::System::Converter_2<::Class_1_34A82ADD3D230E95*, ::System::String*>** StaticGet___9__19_0()
	{
		return (::System::Converter_2<::Class_1_34A82ADD3D230E95*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8026BF886B2570E0___c_TypeDefinitionIndex)->GetStaticField(0x315B0);
	}
	static ::System::Converter_2<::Class_1_F50CC8D9599D41DE*, ::System::String*>** StaticGet___9__19_1()
	{
		return (::System::Converter_2<::Class_1_F50CC8D9599D41DE*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8026BF886B2570E0___c_TypeDefinitionIndex)->GetStaticField(0x315B8);
	}
	static ::Class_2_8026BF886B2570E0___c** StaticGet___9()
	{
		return (::Class_2_8026BF886B2570E0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8026BF886B2570E0___c_TypeDefinitionIndex)->GetStaticField(0x315C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8026BF886B2570E0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8026BF886B2570E0___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_521FF42A136F3888(::Class_1_F50CC8D9599D41DE* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_F50CC8D9599D41DE*))((::PBYTE)hIl2Cpp + CLASS_2_8026BF886B2570E0___C_METHOD_1_521FF42A136F3888_OFFSET))(this, a1);
	}

	::System::String* Method_1_521FF42A136F3888_1(::Class_1_34A82ADD3D230E95* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_34A82ADD3D230E95*))((::PBYTE)hIl2Cpp + CLASS_2_8026BF886B2570E0___C_METHOD_1_521FF42A136F3888_1_OFFSET))(this, a1);
	}
};
