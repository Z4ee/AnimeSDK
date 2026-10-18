#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A3520E3BCB4F735C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_255F5FB2CE4ABA28___C__BUILDGAMESETTLECONTEXT_B__19_0_OFFSET UNITYSDK_OFFSET(0x1586BBC0)
#define CLASS_1_255F5FB2CE4ABA28___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1586BB70)
#define CLASS_1_255F5FB2CE4ABA28___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1586BBB0)
#define CLASS_1_255F5FB2CE4ABA28___C___BUILDOFFLINELEVELDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0x1586BBD0)

inline static constexpr unsigned int Class_1_255F5FB2CE4ABA28___c_TypeDefinitionIndex = 81291;

class Class_1_255F5FB2CE4ABA28___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_A3520E3BCB4F735C*, ::System::Boolean>** StaticGet___9__20_0()
	{
		return (::System::Func_2<::Class_1_A3520E3BCB4F735C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_255F5FB2CE4ABA28___c_TypeDefinitionIndex)->GetStaticField(0x50490);
	}
	static ::Class_1_255F5FB2CE4ABA28___c** StaticGet___9()
	{
		return (::Class_1_255F5FB2CE4ABA28___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_255F5FB2CE4ABA28___c_TypeDefinitionIndex)->GetStaticField(0x50498);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_255F5FB2CE4ABA28___c_TypeDefinitionIndex)->GetStaticField(0x504A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_255F5FB2CE4ABA28___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_255F5FB2CE4ABA28___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _BuildGameSettleContext_b__19_0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_255F5FB2CE4ABA28___C__BUILDGAMESETTLECONTEXT_B__19_0_OFFSET))(this, a1);
	}

	::System::Boolean __BuildOfflineLevelData_b__20_0(::Class_1_A3520E3BCB4F735C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A3520E3BCB4F735C*))((::PBYTE)hIl2Cpp + CLASS_1_255F5FB2CE4ABA28___C___BUILDOFFLINELEVELDATA_B__20_0_OFFSET))(this, a1);
	}
};
