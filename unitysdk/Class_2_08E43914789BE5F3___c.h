#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7A267C1006DF3527_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_08E43914789BE5F3___C_METHOD_1_67B901A57F7CC132_OFFSET UNITYSDK_OFFSET(0x11FD6C80)
#define CLASS_2_08E43914789BE5F3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FD6C30)
#define CLASS_2_08E43914789BE5F3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11FD6C70)

inline static constexpr unsigned int Class_2_08E43914789BE5F3___c_TypeDefinitionIndex = 41123;

class Class_2_08E43914789BE5F3___c : public ::System::Object
{
public:
	static ::Class_2_08E43914789BE5F3___c** StaticGet___9()
	{
		return (::Class_2_08E43914789BE5F3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08E43914789BE5F3___c_TypeDefinitionIndex)->GetStaticField(0x414F0);
	}
	static ::System::Func_2<::Class_3_7A267C1006DF3527_1*, ::System::Int32>** StaticGet___9__51_0()
	{
		return (::System::Func_2<::Class_3_7A267C1006DF3527_1*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08E43914789BE5F3___c_TypeDefinitionIndex)->GetStaticField(0x414F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_08E43914789BE5F3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08E43914789BE5F3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_67B901A57F7CC132(::Class_3_7A267C1006DF3527_1* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_7A267C1006DF3527_1*))((::PBYTE)hIl2Cpp + CLASS_2_08E43914789BE5F3___C_METHOD_1_67B901A57F7CC132_OFFSET))(this, a1);
	}
};
