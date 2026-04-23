#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_502BA065E26E8F2F;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3F51724BA2A18D7F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x93174C0)
#define CLASS_1_3F51724BA2A18D7F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9317500)
#define CLASS_1_3F51724BA2A18D7F___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x9317510)

inline static constexpr unsigned int Class_1_3F51724BA2A18D7F___c_TypeDefinitionIndex = 55503;

class Class_1_3F51724BA2A18D7F___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_502BA065E26E8F2F*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::Class_1_502BA065E26E8F2F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F51724BA2A18D7F___c_TypeDefinitionIndex)->GetStaticField(0x6A810);
	}
	static ::Class_1_3F51724BA2A18D7F___c** StaticGet___9()
	{
		return (::Class_1_3F51724BA2A18D7F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F51724BA2A18D7F___c_TypeDefinitionIndex)->GetStaticField(0x6A818);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__0_0(::Class_1_502BA065E26E8F2F* x, ::Class_1_502BA065E26E8F2F* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_502BA065E26E8F2F*, ::Class_1_502BA065E26E8F2F*))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F___C___CTOR_B__0_0_OFFSET))(this, x, y);
	}
};
