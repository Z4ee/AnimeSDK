#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_42590BC615E80FAD___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x124594C0)
#define CLASS_2_42590BC615E80FAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12459470)
#define CLASS_2_42590BC615E80FAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124594B0)

inline static constexpr unsigned int Class_2_42590BC615E80FAD___c_TypeDefinitionIndex = 56568;

class Class_2_42590BC615E80FAD___c : public ::System::Object
{
public:
	static ::Class_2_42590BC615E80FAD___c** StaticGet___9()
	{
		return (::Class_2_42590BC615E80FAD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_42590BC615E80FAD___c_TypeDefinitionIndex)->GetStaticField(0x3E060);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__15_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_42590BC615E80FAD___c_TypeDefinitionIndex)->GetStaticField(0x3E068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_42590BC615E80FAD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42590BC615E80FAD___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42590BC615E80FAD___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
