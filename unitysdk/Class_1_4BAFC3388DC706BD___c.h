#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F79C1AA612159303;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_4BAFC3388DC706BD___C_METHOD_1_B8D06555739F0F08_1_OFFSET UNITYSDK_OFFSET(0x111A5590)
#define CLASS_1_4BAFC3388DC706BD___C_METHOD_1_B8D06555739F0F08_OFFSET UNITYSDK_OFFSET(0x111A5570)
#define CLASS_1_4BAFC3388DC706BD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C4C7C0)
#define CLASS_1_4BAFC3388DC706BD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x111A5560)

inline static constexpr unsigned int Class_1_4BAFC3388DC706BD___c_TypeDefinitionIndex = 68733;

class Class_1_4BAFC3388DC706BD___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_F79C1AA612159303*, ::System::Int32>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::Class_1_F79C1AA612159303*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BAFC3388DC706BD___c_TypeDefinitionIndex)->GetStaticField(0x45200);
	}
	static ::Class_1_4BAFC3388DC706BD___c** StaticGet___9()
	{
		return (::Class_1_4BAFC3388DC706BD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BAFC3388DC706BD___c_TypeDefinitionIndex)->GetStaticField(0x45208);
	}
	static ::System::Func_2<::Class_1_F79C1AA612159303*, ::System::Int32>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::Class_1_F79C1AA612159303*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BAFC3388DC706BD___c_TypeDefinitionIndex)->GetStaticField(0x45210);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_B8D06555739F0F08(::Class_1_F79C1AA612159303* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_F79C1AA612159303*))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD___C_METHOD_1_B8D06555739F0F08_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B8D06555739F0F08_1(::Class_1_F79C1AA612159303* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_F79C1AA612159303*))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD___C_METHOD_1_B8D06555739F0F08_1_OFFSET))(this, a1);
	}
};
