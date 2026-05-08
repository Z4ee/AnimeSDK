#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7A267C1006DF3527_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_08E43914789BE5F3___C_METHOD_1_67B901A57F7CC132_OFFSET UNITYSDK_OFFSET(0x14A65FF0)
#define CLASS_2_08E43914789BE5F3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A65FA0)
#define CLASS_2_08E43914789BE5F3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A65FE0)

inline static constexpr unsigned int Class_2_08E43914789BE5F3___c_TypeDefinitionIndex = 56491;

class Class_2_08E43914789BE5F3___c : public ::System::Object
{
public:
	static ::Class_2_08E43914789BE5F3___c** StaticGet___9()
	{
		return (::Class_2_08E43914789BE5F3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08E43914789BE5F3___c_TypeDefinitionIndex)->GetStaticField(0x3E350);
	}
	static ::System::Func_2<::Class_3_7A267C1006DF3527_2*, ::System::Int32>** StaticGet___9__51_0()
	{
		return (::System::Func_2<::Class_3_7A267C1006DF3527_2*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08E43914789BE5F3___c_TypeDefinitionIndex)->GetStaticField(0x3E358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_08E43914789BE5F3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08E43914789BE5F3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_67B901A57F7CC132(::Class_3_7A267C1006DF3527_2* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_7A267C1006DF3527_2*))((::PBYTE)hIl2Cpp + CLASS_2_08E43914789BE5F3___C_METHOD_1_67B901A57F7CC132_OFFSET))(this, a1);
	}
};
