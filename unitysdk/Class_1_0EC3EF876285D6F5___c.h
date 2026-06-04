#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A3520E3BCB4F735C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_0EC3EF876285D6F5___C__BUILDGAMESETTLECONTEXT_B__19_0_OFFSET UNITYSDK_OFFSET(0x137D5910)
#define CLASS_1_0EC3EF876285D6F5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x137D58C0)
#define CLASS_1_0EC3EF876285D6F5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x137D5900)
#define CLASS_1_0EC3EF876285D6F5___C___BUILDOFFLINELEVELDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0x137D5920)

inline static constexpr unsigned int Class_1_0EC3EF876285D6F5___c_TypeDefinitionIndex = 73948;

class Class_1_0EC3EF876285D6F5___c : public ::System::Object
{
public:
	static ::Class_1_0EC3EF876285D6F5___c** StaticGet___9()
	{
		return (::Class_1_0EC3EF876285D6F5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EC3EF876285D6F5___c_TypeDefinitionIndex)->GetStaticField(0x5AF60);
	}
	static ::System::Func_2<::Class_1_A3520E3BCB4F735C*, ::System::Boolean>** StaticGet___9__20_0()
	{
		return (::System::Func_2<::Class_1_A3520E3BCB4F735C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EC3EF876285D6F5___c_TypeDefinitionIndex)->GetStaticField(0x5AF68);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EC3EF876285D6F5___c_TypeDefinitionIndex)->GetStaticField(0x5AF70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EC3EF876285D6F5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EC3EF876285D6F5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _BuildGameSettleContext_b__19_0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0EC3EF876285D6F5___C__BUILDGAMESETTLECONTEXT_B__19_0_OFFSET))(this, a1);
	}

	::System::Boolean __BuildOfflineLevelData_b__20_0(::Class_1_A3520E3BCB4F735C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A3520E3BCB4F735C*))((::PBYTE)hIl2Cpp + CLASS_1_0EC3EF876285D6F5___C___BUILDOFFLINELEVELDATA_B__20_0_OFFSET))(this, a1);
	}
};
