#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_54B53C04E1CF3EFD___C_METHOD_1_CF25A8E334D2A4E0_OFFSET UNITYSDK_OFFSET(0x12068E80)
#define CLASS_1_54B53C04E1CF3EFD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12068E30)
#define CLASS_1_54B53C04E1CF3EFD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12068E70)

inline static constexpr unsigned int Class_1_54B53C04E1CF3EFD___c_TypeDefinitionIndex = 72254;

class Class_1_54B53C04E1CF3EFD___c : public ::System::Object
{
public:
	static ::Class_1_54B53C04E1CF3EFD___c** StaticGet___9()
	{
		return (::Class_1_54B53C04E1CF3EFD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54B53C04E1CF3EFD___c_TypeDefinitionIndex)->GetStaticField(0x3D6E0);
	}
	static ::System::Comparison_1<::Struct_2_97F90E6FB4F6D559>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Struct_2_97F90E6FB4F6D559>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54B53C04E1CF3EFD___c_TypeDefinitionIndex)->GetStaticField(0x3D6E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54B53C04E1CF3EFD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54B53C04E1CF3EFD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CF25A8E334D2A4E0(::Struct_2_97F90E6FB4F6D559 a1, ::Struct_2_97F90E6FB4F6D559 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_97F90E6FB4F6D559, ::Struct_2_97F90E6FB4F6D559))((::PBYTE)hIl2Cpp + CLASS_1_54B53C04E1CF3EFD___C_METHOD_1_CF25A8E334D2A4E0_OFFSET))(this, a1, a2);
	}
};
