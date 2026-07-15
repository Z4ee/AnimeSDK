#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF41A94FBB43C5D7;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_D00D65DE285A8A8C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16464100)
#define CLASS_1_D00D65DE285A8A8C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16464130)
#define CLASS_1_D00D65DE285A8A8C___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x16464140)

inline static constexpr unsigned int Class_1_D00D65DE285A8A8C___c_TypeDefinitionIndex = 75802;

class Class_1_D00D65DE285A8A8C___c : public ::System::Object
{
public:
	static ::Class_1_D00D65DE285A8A8C___c** StaticGet___9()
	{
		return (::Class_1_D00D65DE285A8A8C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D00D65DE285A8A8C___c_TypeDefinitionIndex)->GetStaticField(0x2B8D0);
	}
	static ::System::Comparison_1<::Class_1_EF41A94FBB43C5D7*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::Class_1_EF41A94FBB43C5D7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D00D65DE285A8A8C___c_TypeDefinitionIndex)->GetStaticField(0x2B8D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__0_0(::Class_1_EF41A94FBB43C5D7* a1, ::Class_1_EF41A94FBB43C5D7* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_EF41A94FBB43C5D7*, ::Class_1_EF41A94FBB43C5D7*))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
	}
};
