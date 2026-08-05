#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6DA289675FB59393;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_E4311406D870152B___C_METHOD_1_007FD772FA979A11_OFFSET UNITYSDK_OFFSET(0x156AE960)
#define CLASS_1_E4311406D870152B___C_METHOD_1_796938E83AB64D1E_OFFSET UNITYSDK_OFFSET(0x156AE890)
#define CLASS_1_E4311406D870152B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156AE840)
#define CLASS_1_E4311406D870152B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156AE880)

inline static constexpr unsigned int Class_1_E4311406D870152B___c_TypeDefinitionIndex = 42885;

class Class_1_E4311406D870152B___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__24_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E4311406D870152B___c_TypeDefinitionIndex)->GetStaticField(0x2D930);
	}
	static ::System::Comparison_1<::Class_2_6DA289675FB59393*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_6DA289675FB59393*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E4311406D870152B___c_TypeDefinitionIndex)->GetStaticField(0x2D938);
	}
	static ::Class_1_E4311406D870152B___c** StaticGet___9()
	{
		return (::Class_1_E4311406D870152B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E4311406D870152B___c_TypeDefinitionIndex)->GetStaticField(0x2D940);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E4311406D870152B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4311406D870152B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_796938E83AB64D1E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4311406D870152B___C_METHOD_1_796938E83AB64D1E_OFFSET))(this);
	}

	::System::Int32 Method_1_007FD772FA979A11(::Class_2_6DA289675FB59393* a1, ::Class_2_6DA289675FB59393* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_6DA289675FB59393*, ::Class_2_6DA289675FB59393*))((::PBYTE)hIl2Cpp + CLASS_1_E4311406D870152B___C_METHOD_1_007FD772FA979A11_OFFSET))(this, a1, a2);
	}
};
