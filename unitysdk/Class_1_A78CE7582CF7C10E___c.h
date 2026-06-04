#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DAF14F72B32D5C3;
class Class_1_668FE281FA72D3E8_4;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_A78CE7582CF7C10E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145546D0)
#define CLASS_1_A78CE7582CF7C10E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14554710)
#define CLASS_1_A78CE7582CF7C10E___C___CTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x14554720)
#define CLASS_1_A78CE7582CF7C10E___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x14554730)

inline static constexpr unsigned int Class_1_A78CE7582CF7C10E___c_TypeDefinitionIndex = 74118;

class Class_1_A78CE7582CF7C10E___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_1DAF14F72B32D5C3*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::Class_1_1DAF14F72B32D5C3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A78CE7582CF7C10E___c_TypeDefinitionIndex)->GetStaticField(0x4E240);
	}
	static ::System::Func_2<::Class_1_668FE281FA72D3E8_4*, ::Class_1_1DAF14F72B32D5C3*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Class_1_668FE281FA72D3E8_4*, ::Class_1_1DAF14F72B32D5C3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A78CE7582CF7C10E___c_TypeDefinitionIndex)->GetStaticField(0x4E248);
	}
	static ::Class_1_A78CE7582CF7C10E___c** StaticGet___9()
	{
		return (::Class_1_A78CE7582CF7C10E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A78CE7582CF7C10E___c_TypeDefinitionIndex)->GetStaticField(0x4E250);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__8_0(::Class_1_1DAF14F72B32D5C3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1DAF14F72B32D5C3*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E___C___CTOR_B__8_0_OFFSET))(this, a1);
	}

	::Class_1_1DAF14F72B32D5C3* __ctor_b__9_0(::Class_1_668FE281FA72D3E8_4* a1)
	{
		return ((::Class_1_1DAF14F72B32D5C3*(*)(::PVOID, ::Class_1_668FE281FA72D3E8_4*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E___C___CTOR_B__9_0_OFFSET))(this, a1);
	}
};
