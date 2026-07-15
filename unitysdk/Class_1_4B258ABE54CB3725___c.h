#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_285;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_4B258ABE54CB3725___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F9090)
#define CLASS_1_4B258ABE54CB3725___C__COLLECT_B__4_0_OFFSET UNITYSDK_OFFSET(0x1D2F90D0)
#define CLASS_1_4B258ABE54CB3725___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F90C0)

inline static constexpr unsigned int Class_1_4B258ABE54CB3725___c_TypeDefinitionIndex = 41222;

class Class_1_4B258ABE54CB3725___c : public ::System::Object
{
public:
	static ::Class_1_4B258ABE54CB3725___c** StaticGet___9()
	{
		return (::Class_1_4B258ABE54CB3725___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725___c_TypeDefinitionIndex)->GetStaticField(0x1010);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_285*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_285*>*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_285*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_285*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725___c_TypeDefinitionIndex)->GetStaticField(0x1018);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_285*>* _Collect_b__4_0(::Class_0_16E4307DCC419505_285* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_285*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_285*))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725___C__COLLECT_B__4_0_OFFSET))(this, a1);
	}
};
