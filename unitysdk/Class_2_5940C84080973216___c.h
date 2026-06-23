#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_5940C84080973216___C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x15C7CEE0)
#define CLASS_2_5940C84080973216___C_METHOD_1_EB974738829A6BF5_OFFSET UNITYSDK_OFFSET(0x15C7CED0)
#define CLASS_2_5940C84080973216___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C7CE80)
#define CLASS_2_5940C84080973216___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C7CEC0)

inline static constexpr unsigned int Class_2_5940C84080973216___c_TypeDefinitionIndex = 69378;

class Class_2_5940C84080973216___c : public ::System::Object
{
public:
	static ::Class_2_5940C84080973216___c** StaticGet___9()
	{
		return (::Class_2_5940C84080973216___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5940C84080973216___c_TypeDefinitionIndex)->GetStaticField(0x4BA20);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__36_23()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5940C84080973216___c_TypeDefinitionIndex)->GetStaticField(0x4BA28);
	}
	static ::System::Comparison_1<::System::Boolean>** StaticGet___9__54_0()
	{
		return (::System::Comparison_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5940C84080973216___c_TypeDefinitionIndex)->GetStaticField(0x4BA30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5940C84080973216___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5940C84080973216___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_EB974738829A6BF5(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5940C84080973216___C_METHOD_1_EB974738829A6BF5_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5940C84080973216___C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
