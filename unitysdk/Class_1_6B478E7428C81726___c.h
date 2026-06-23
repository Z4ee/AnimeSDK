#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D99A03C58ED2B6E_2;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_6B478E7428C81726___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x1078AFB0)
#define CLASS_1_6B478E7428C81726___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1078AF60)
#define CLASS_1_6B478E7428C81726___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1078AFA0)

inline static constexpr unsigned int Class_1_6B478E7428C81726___c_TypeDefinitionIndex = 56585;

class Class_1_6B478E7428C81726___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_2*>** StaticGet___9__21_0()
	{
		return (::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B478E7428C81726___c_TypeDefinitionIndex)->GetStaticField(0x46210);
	}
	static ::Class_1_6B478E7428C81726___c** StaticGet___9()
	{
		return (::Class_1_6B478E7428C81726___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B478E7428C81726___c_TypeDefinitionIndex)->GetStaticField(0x46218);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B478E7428C81726___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B478E7428C81726___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_6D99A03C58ED2B6E_2* a1, ::Class_2_6D99A03C58ED2B6E_2* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_2*, ::Class_2_6D99A03C58ED2B6E_2*))((::PBYTE)hIl2Cpp + CLASS_1_6B478E7428C81726___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
