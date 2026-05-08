#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D99A03C58ED2B6E_3;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_6B478E7428C81726___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x11370C70)
#define CLASS_1_6B478E7428C81726___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11370C20)
#define CLASS_1_6B478E7428C81726___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11370C60)

inline static constexpr unsigned int Class_1_6B478E7428C81726___c_TypeDefinitionIndex = 41691;

class Class_1_6B478E7428C81726___c : public ::System::Object
{
public:
	static ::Class_1_6B478E7428C81726___c** StaticGet___9()
	{
		return (::Class_1_6B478E7428C81726___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B478E7428C81726___c_TypeDefinitionIndex)->GetStaticField(0x43A70);
	}
	static ::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_3*>** StaticGet___9__21_0()
	{
		return (::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B478E7428C81726___c_TypeDefinitionIndex)->GetStaticField(0x43A78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B478E7428C81726___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B478E7428C81726___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_6D99A03C58ED2B6E_3* a1, ::Class_2_6D99A03C58ED2B6E_3* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_3*, ::Class_2_6D99A03C58ED2B6E_3*))((::PBYTE)hIl2Cpp + CLASS_1_6B478E7428C81726___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
