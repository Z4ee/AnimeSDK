#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_46;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_7341DEFE3947C973_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18891B10)
#define CLASS_1_7341DEFE3947C973_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18891B50)
#define CLASS_1_7341DEFE3947C973_1___C__LOAD_B__4_0_OFFSET UNITYSDK_OFFSET(0x18891B60)

inline static constexpr unsigned int Class_1_7341DEFE3947C973_1___c_TypeDefinitionIndex = 38558;

class Class_1_7341DEFE3947C973_1___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_21DCD4640D389503_46*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_1_21DCD4640D389503_46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7341DEFE3947C973_1___c_TypeDefinitionIndex)->GetStaticField(0x18240);
	}
	static ::Class_1_7341DEFE3947C973_1___c** StaticGet___9()
	{
		return (::Class_1_7341DEFE3947C973_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7341DEFE3947C973_1___c_TypeDefinitionIndex)->GetStaticField(0x18248);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7341DEFE3947C973_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7341DEFE3947C973_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _Load_b__4_0(::Class_1_21DCD4640D389503_46* a1, ::Class_1_21DCD4640D389503_46* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_21DCD4640D389503_46*, ::Class_1_21DCD4640D389503_46*))((::PBYTE)hIl2Cpp + CLASS_1_7341DEFE3947C973_1___C__LOAD_B__4_0_OFFSET))(this, a1, a2);
	}
};
