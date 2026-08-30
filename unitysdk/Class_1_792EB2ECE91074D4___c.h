#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_792EB2ECE91074D4;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_792EB2ECE91074D4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12210000)
#define CLASS_1_792EB2ECE91074D4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12210030)
#define CLASS_1_792EB2ECE91074D4___C__INITIALIZE_B__2_0_OFFSET UNITYSDK_OFFSET(0x12210040)
#define CLASS_1_792EB2ECE91074D4___C__INITIALIZE_B__2_1_OFFSET UNITYSDK_OFFSET(0x122100A0)
#define CLASS_1_792EB2ECE91074D4___C___INITTIMESCALEENTITY_B__5_0_OFFSET UNITYSDK_OFFSET(0x12210100)

inline static constexpr unsigned int Class_1_792EB2ECE91074D4___c_TypeDefinitionIndex = 76696;

class Class_1_792EB2ECE91074D4___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_792EB2ECE91074D4*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::Class_1_792EB2ECE91074D4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_792EB2ECE91074D4___c_TypeDefinitionIndex)->GetStaticField(0x53290);
	}
	static ::System::Action_1<::Class_1_792EB2ECE91074D4*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_1_792EB2ECE91074D4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_792EB2ECE91074D4___c_TypeDefinitionIndex)->GetStaticField(0x53298);
	}
	static ::Class_1_792EB2ECE91074D4___c** StaticGet___9()
	{
		return (::Class_1_792EB2ECE91074D4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_792EB2ECE91074D4___c_TypeDefinitionIndex)->GetStaticField(0x532A0);
	}
	static ::System::Action_2<::Class_1_792EB2ECE91074D4*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_1_792EB2ECE91074D4*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_792EB2ECE91074D4___c_TypeDefinitionIndex)->GetStaticField(0x532A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4___C__CTOR_OFFSET))(this);
	}

	::System::Void _Initialize_b__2_0(::Class_1_792EB2ECE91074D4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_792EB2ECE91074D4*))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4___C__INITIALIZE_B__2_0_OFFSET))(this, a1);
	}

	::System::Void _Initialize_b__2_1(::Class_1_792EB2ECE91074D4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_792EB2ECE91074D4*))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4___C__INITIALIZE_B__2_1_OFFSET))(this, a1);
	}

	::System::Void __InitTimeScaleEntity_b__5_0(::Class_1_792EB2ECE91074D4* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_792EB2ECE91074D4*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4___C___INITTIMESCALEENTITY_B__5_0_OFFSET))(this, a1, a2);
	}
};
