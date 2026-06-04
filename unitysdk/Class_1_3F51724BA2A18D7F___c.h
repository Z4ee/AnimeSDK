#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_04316EB8ECDF7B06;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3F51724BA2A18D7F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14429C10)
#define CLASS_1_3F51724BA2A18D7F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14429C50)
#define CLASS_1_3F51724BA2A18D7F___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x14429C60)

inline static constexpr unsigned int Class_1_3F51724BA2A18D7F___c_TypeDefinitionIndex = 56254;

class Class_1_3F51724BA2A18D7F___c : public ::System::Object
{
public:
	static ::Class_1_3F51724BA2A18D7F___c** StaticGet___9()
	{
		return (::Class_1_3F51724BA2A18D7F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F51724BA2A18D7F___c_TypeDefinitionIndex)->GetStaticField(0x3DD30);
	}
	static ::System::Comparison_1<::Class_1_04316EB8ECDF7B06*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::Class_1_04316EB8ECDF7B06*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F51724BA2A18D7F___c_TypeDefinitionIndex)->GetStaticField(0x3DD38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__0_0(::Class_1_04316EB8ECDF7B06* a1, ::Class_1_04316EB8ECDF7B06* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_04316EB8ECDF7B06*, ::Class_1_04316EB8ECDF7B06*))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
	}
};
