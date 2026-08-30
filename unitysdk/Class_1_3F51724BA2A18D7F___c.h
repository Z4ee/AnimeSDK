#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C67F599303150E7F;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3F51724BA2A18D7F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A794770)
#define CLASS_1_3F51724BA2A18D7F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7947B0)
#define CLASS_1_3F51724BA2A18D7F___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A7947C0)

inline static constexpr unsigned int Class_1_3F51724BA2A18D7F___c_TypeDefinitionIndex = 60310;

class Class_1_3F51724BA2A18D7F___c : public ::System::Object
{
public:
	static ::Class_1_3F51724BA2A18D7F___c** StaticGet___9()
	{
		return (::Class_1_3F51724BA2A18D7F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F51724BA2A18D7F___c_TypeDefinitionIndex)->GetStaticField(0x54800);
	}
	static ::System::Comparison_1<::Class_1_C67F599303150E7F*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::Class_1_C67F599303150E7F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F51724BA2A18D7F___c_TypeDefinitionIndex)->GetStaticField(0x54808);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__0_0(::Class_1_C67F599303150E7F* a1, ::Class_1_C67F599303150E7F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C67F599303150E7F*, ::Class_1_C67F599303150E7F*))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
	}
};
