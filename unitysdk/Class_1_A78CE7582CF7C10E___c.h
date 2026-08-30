#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_19;
class Class_1_916A609943E0EE80_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_A78CE7582CF7C10E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D12F20)
#define CLASS_1_A78CE7582CF7C10E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D12F60)
#define CLASS_1_A78CE7582CF7C10E___C___CTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x18D12F70)
#define CLASS_1_A78CE7582CF7C10E___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x18D12F80)

inline static constexpr unsigned int Class_1_A78CE7582CF7C10E___c_TypeDefinitionIndex = 80134;

class Class_1_A78CE7582CF7C10E___c : public ::System::Object
{
public:
	static ::Class_1_A78CE7582CF7C10E___c** StaticGet___9()
	{
		return (::Class_1_A78CE7582CF7C10E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A78CE7582CF7C10E___c_TypeDefinitionIndex)->GetStaticField(0x63B00);
	}
	static ::System::Func_2<::Class_1_1CBA230307F9C289_19*, ::Class_1_916A609943E0EE80_2*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Class_1_1CBA230307F9C289_19*, ::Class_1_916A609943E0EE80_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A78CE7582CF7C10E___c_TypeDefinitionIndex)->GetStaticField(0x63B08);
	}
	static ::System::Func_2<::Class_1_916A609943E0EE80_2*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::Class_1_916A609943E0EE80_2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A78CE7582CF7C10E___c_TypeDefinitionIndex)->GetStaticField(0x63B10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__8_0(::Class_1_916A609943E0EE80_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_916A609943E0EE80_2*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E___C___CTOR_B__8_0_OFFSET))(this, a1);
	}

	::Class_1_916A609943E0EE80_2* __ctor_b__9_0(::Class_1_1CBA230307F9C289_19* a1)
	{
		return ((::Class_1_916A609943E0EE80_2*(*)(::PVOID, ::Class_1_1CBA230307F9C289_19*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E___C___CTOR_B__9_0_OFFSET))(this, a1);
	}
};
