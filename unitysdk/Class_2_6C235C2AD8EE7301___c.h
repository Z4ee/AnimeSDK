#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_169;
class Class_1_C6CFD545CB9F30D6;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_6C235C2AD8EE7301___C_METHOD_1_1C6F00DAE95A25A9_OFFSET UNITYSDK_OFFSET(0x14062390)
#define CLASS_2_6C235C2AD8EE7301___C_METHOD_1_BF523663C5477DEB_OFFSET UNITYSDK_OFFSET(0x140623F0)
#define CLASS_2_6C235C2AD8EE7301___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14062340)
#define CLASS_2_6C235C2AD8EE7301___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14062380)

inline static constexpr unsigned int Class_2_6C235C2AD8EE7301___c_TypeDefinitionIndex = 77817;

class Class_2_6C235C2AD8EE7301___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_169*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_169*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C235C2AD8EE7301___c_TypeDefinitionIndex)->GetStaticField(0x39720);
	}
	static ::System::Comparison_1<::Class_1_C6CFD545CB9F30D6*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::Class_1_C6CFD545CB9F30D6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C235C2AD8EE7301___c_TypeDefinitionIndex)->GetStaticField(0x39728);
	}
	static ::Class_2_6C235C2AD8EE7301___c** StaticGet___9()
	{
		return (::Class_2_6C235C2AD8EE7301___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C235C2AD8EE7301___c_TypeDefinitionIndex)->GetStaticField(0x39730);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6C235C2AD8EE7301___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C235C2AD8EE7301___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_1C6F00DAE95A25A9(::Class_0_16E4307DCC419505_169* a1, ::Class_0_16E4307DCC419505_169* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_169*, ::Class_0_16E4307DCC419505_169*))((::PBYTE)hIl2Cpp + CLASS_2_6C235C2AD8EE7301___C_METHOD_1_1C6F00DAE95A25A9_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_BF523663C5477DEB(::Class_1_C6CFD545CB9F30D6* a1, ::Class_1_C6CFD545CB9F30D6* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C6CFD545CB9F30D6*, ::Class_1_C6CFD545CB9F30D6*))((::PBYTE)hIl2Cpp + CLASS_2_6C235C2AD8EE7301___C_METHOD_1_BF523663C5477DEB_OFFSET))(this, a1, a2);
	}
};
