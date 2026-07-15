#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A78CE7582CF7C10E;
class Class_1_F0E9DD085BA6740E_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F963C9FA5FC80637___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160426C0)
#define CLASS_1_F963C9FA5FC80637___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16042700)
#define CLASS_1_F963C9FA5FC80637___C___CTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x16042710)

inline static constexpr unsigned int Class_1_F963C9FA5FC80637___c_TypeDefinitionIndex = 76499;

class Class_1_F963C9FA5FC80637___c : public ::System::Object
{
public:
	static ::Class_1_F963C9FA5FC80637___c** StaticGet___9()
	{
		return (::Class_1_F963C9FA5FC80637___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F963C9FA5FC80637___c_TypeDefinitionIndex)->GetStaticField(0x53900);
	}
	static ::System::Func_2<::Class_1_F0E9DD085BA6740E_1*, ::Class_1_A78CE7582CF7C10E*>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::Class_1_F0E9DD085BA6740E_1*, ::Class_1_A78CE7582CF7C10E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F963C9FA5FC80637___c_TypeDefinitionIndex)->GetStaticField(0x53908);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637___C__CTOR_OFFSET))(this);
	}

	::Class_1_A78CE7582CF7C10E* __ctor_b__7_0(::Class_1_F0E9DD085BA6740E_1* a1)
	{
		return ((::Class_1_A78CE7582CF7C10E*(*)(::PVOID, ::Class_1_F0E9DD085BA6740E_1*))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637___C___CTOR_B__7_0_OFFSET))(this, a1);
	}
};
