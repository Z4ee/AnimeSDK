#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F38F1DFDC2D5A336;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_2233CF21855EB1E6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1550C660)
#define CLASS_1_2233CF21855EB1E6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1550C6A0)
#define CLASS_1_2233CF21855EB1E6___C__GETDISPLAYDATAID_B__3_0_OFFSET UNITYSDK_OFFSET(0x1550C6B0)

inline static constexpr unsigned int Class_1_2233CF21855EB1E6___c_TypeDefinitionIndex = 68276;

class Class_1_2233CF21855EB1E6___c : public ::System::Object
{
public:
	static ::System::Func_3<::Class_1_F38F1DFDC2D5A336*, ::Class_1_F38F1DFDC2D5A336*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Func_3<::Class_1_F38F1DFDC2D5A336*, ::Class_1_F38F1DFDC2D5A336*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2233CF21855EB1E6___c_TypeDefinitionIndex)->GetStaticField(0x40FE0);
	}
	static ::Class_1_2233CF21855EB1E6___c** StaticGet___9()
	{
		return (::Class_1_2233CF21855EB1E6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2233CF21855EB1E6___c_TypeDefinitionIndex)->GetStaticField(0x40FE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2233CF21855EB1E6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2233CF21855EB1E6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetDisplayDataID_b__3_0(::Class_1_F38F1DFDC2D5A336* a1, ::Class_1_F38F1DFDC2D5A336* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_F38F1DFDC2D5A336*, ::Class_1_F38F1DFDC2D5A336*))((::PBYTE)hIl2Cpp + CLASS_1_2233CF21855EB1E6___C__GETDISPLAYDATAID_B__3_0_OFFSET))(this, a1, a2);
	}
};
