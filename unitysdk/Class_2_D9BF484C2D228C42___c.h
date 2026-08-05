#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_D9BF484C2D228C42___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13485490)
#define CLASS_2_D9BF484C2D228C42___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13485440)
#define CLASS_2_D9BF484C2D228C42___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13485480)

inline static constexpr unsigned int Class_2_D9BF484C2D228C42___c_TypeDefinitionIndex = 71039;

class Class_2_D9BF484C2D228C42___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__23_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9BF484C2D228C42___c_TypeDefinitionIndex)->GetStaticField(0x45AC0);
	}
	static ::Class_2_D9BF484C2D228C42___c** StaticGet___9()
	{
		return (::Class_2_D9BF484C2D228C42___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9BF484C2D228C42___c_TypeDefinitionIndex)->GetStaticField(0x45AC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D9BF484C2D228C42___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9BF484C2D228C42___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9BF484C2D228C42___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
