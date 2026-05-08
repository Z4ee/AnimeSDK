#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_275;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_302D18EE1CA1801A_OFFSET UNITYSDK_OFFSET(0xE514150)
#define CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0xE514170)
#define CLASS_2_47F3EABB6C9CDECD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE514100)
#define CLASS_2_47F3EABB6C9CDECD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE514140)

inline static constexpr unsigned int Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex = 45809;

class Class_2_47F3EABB6C9CDECD___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_275*>** StaticGet___9__58_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_275*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex)->GetStaticField(0x340B0);
	}
	static ::System::Converter_2<::Class_2_208CC9941471731A_275*, ::System::String*>** StaticGet___9__59_0()
	{
		return (::System::Converter_2<::Class_2_208CC9941471731A_275*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex)->GetStaticField(0x340B8);
	}
	static ::Class_2_47F3EABB6C9CDECD___c** StaticGet___9()
	{
		return (::Class_2_47F3EABB6C9CDECD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47F3EABB6C9CDECD___c_TypeDefinitionIndex)->GetStaticField(0x340C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_302D18EE1CA1801A(::Class_2_208CC9941471731A_275* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_275*))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_302D18EE1CA1801A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_275* a1, ::Class_2_208CC9941471731A_275* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_275*, ::Class_2_208CC9941471731A_275*))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
