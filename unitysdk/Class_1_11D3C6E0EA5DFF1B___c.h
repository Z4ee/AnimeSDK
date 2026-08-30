#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FD51057495DB654F;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_11D3C6E0EA5DFF1B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3AE110)
#define CLASS_1_11D3C6E0EA5DFF1B___C__CLEANUP_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C3AE160)
#define CLASS_1_11D3C6E0EA5DFF1B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AE150)

inline static constexpr unsigned int Class_1_11D3C6E0EA5DFF1B___c_TypeDefinitionIndex = 40489;

class Class_1_11D3C6E0EA5DFF1B___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_2_FD51057495DB654F*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_2_FD51057495DB654F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11D3C6E0EA5DFF1B___c_TypeDefinitionIndex)->GetStaticField(0x45A10);
	}
	static ::Class_1_11D3C6E0EA5DFF1B___c** StaticGet___9()
	{
		return (::Class_1_11D3C6E0EA5DFF1B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11D3C6E0EA5DFF1B___c_TypeDefinitionIndex)->GetStaticField(0x45A18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B___C__CTOR_OFFSET))(this);
	}

	::System::Void _Cleanup_b__3_0(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B___C__CLEANUP_B__3_0_OFFSET))(this, a1);
	}
};
