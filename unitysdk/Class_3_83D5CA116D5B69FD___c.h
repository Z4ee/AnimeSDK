#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_3_83D5CA116D5B69FD___C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11E5A250)
#define CLASS_3_83D5CA116D5B69FD___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11E5A240)
#define CLASS_3_83D5CA116D5B69FD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E5A1F0)
#define CLASS_3_83D5CA116D5B69FD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E5A230)

inline static constexpr unsigned int Class_3_83D5CA116D5B69FD___c_TypeDefinitionIndex = 77259;

class Class_3_83D5CA116D5B69FD___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_83D5CA116D5B69FD___c_TypeDefinitionIndex)->GetStaticField(0x45070);
	}
	static ::Class_3_83D5CA116D5B69FD___c** StaticGet___9()
	{
		return (::Class_3_83D5CA116D5B69FD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_83D5CA116D5B69FD___c_TypeDefinitionIndex)->GetStaticField(0x45078);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_83D5CA116D5B69FD___c_TypeDefinitionIndex)->GetStaticField(0x45080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD___C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
