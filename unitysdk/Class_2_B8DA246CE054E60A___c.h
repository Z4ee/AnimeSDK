#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A03C9A14CD8D41B5_2;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_B8DA246CE054E60A___C_METHOD_1_BF523663C5477DEB_OFFSET UNITYSDK_OFFSET(0x16025710)
#define CLASS_2_B8DA246CE054E60A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160256C0)
#define CLASS_2_B8DA246CE054E60A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16025700)

inline static constexpr unsigned int Class_2_B8DA246CE054E60A___c_TypeDefinitionIndex = 58037;

class Class_2_B8DA246CE054E60A___c : public ::System::Object
{
public:
	static ::Class_2_B8DA246CE054E60A___c** StaticGet___9()
	{
		return (::Class_2_B8DA246CE054E60A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B8DA246CE054E60A___c_TypeDefinitionIndex)->GetStaticField(0x35580);
	}
	static ::System::Comparison_1<::Class_1_A03C9A14CD8D41B5_2*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::Class_1_A03C9A14CD8D41B5_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B8DA246CE054E60A___c_TypeDefinitionIndex)->GetStaticField(0x35588);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BF523663C5477DEB(::Class_1_A03C9A14CD8D41B5_2* a1, ::Class_1_A03C9A14CD8D41B5_2* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A03C9A14CD8D41B5_2*, ::Class_1_A03C9A14CD8D41B5_2*))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A___C_METHOD_1_BF523663C5477DEB_OFFSET))(this, a1, a2);
	}
};
