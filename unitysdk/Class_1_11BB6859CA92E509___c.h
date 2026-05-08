#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D3CB1F18440FC779;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_11BB6859CA92E509___C_METHOD_1_BF523663C5477DEB_OFFSET UNITYSDK_OFFSET(0x105945B0)
#define CLASS_1_11BB6859CA92E509___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10594560)
#define CLASS_1_11BB6859CA92E509___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105945A0)

inline static constexpr unsigned int Class_1_11BB6859CA92E509___c_TypeDefinitionIndex = 69384;

class Class_1_11BB6859CA92E509___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_D3CB1F18440FC779*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::Class_1_D3CB1F18440FC779*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BB6859CA92E509___c_TypeDefinitionIndex)->GetStaticField(0x482A0);
	}
	static ::Class_1_11BB6859CA92E509___c** StaticGet___9()
	{
		return (::Class_1_11BB6859CA92E509___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BB6859CA92E509___c_TypeDefinitionIndex)->GetStaticField(0x482A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11BB6859CA92E509___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11BB6859CA92E509___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BF523663C5477DEB(::Class_1_D3CB1F18440FC779* a1, ::Class_1_D3CB1F18440FC779* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D3CB1F18440FC779*, ::Class_1_D3CB1F18440FC779*))((::PBYTE)hIl2Cpp + CLASS_1_11BB6859CA92E509___C_METHOD_1_BF523663C5477DEB_OFFSET))(this, a1, a2);
	}
};
