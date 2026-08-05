#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1A50D9EA321B375F;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_A4610D4CAF26D48A___C_METHOD_1_C182346378132F07_OFFSET UNITYSDK_OFFSET(0x141BDA40)
#define CLASS_2_A4610D4CAF26D48A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141BD9F0)
#define CLASS_2_A4610D4CAF26D48A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141BDA30)

inline static constexpr unsigned int Class_2_A4610D4CAF26D48A___c_TypeDefinitionIndex = 45676;

class Class_2_A4610D4CAF26D48A___c : public ::System::Object
{
public:
	static ::Class_2_A4610D4CAF26D48A___c** StaticGet___9()
	{
		return (::Class_2_A4610D4CAF26D48A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4610D4CAF26D48A___c_TypeDefinitionIndex)->GetStaticField(0x3B510);
	}
	static ::System::Comparison_1<::Class_3_1A50D9EA321B375F*>** StaticGet___9__12_0()
	{
		return (::System::Comparison_1<::Class_3_1A50D9EA321B375F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4610D4CAF26D48A___c_TypeDefinitionIndex)->GetStaticField(0x3B518);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A4610D4CAF26D48A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4610D4CAF26D48A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C182346378132F07(::Class_3_1A50D9EA321B375F* a1, ::Class_3_1A50D9EA321B375F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_1A50D9EA321B375F*, ::Class_3_1A50D9EA321B375F*))((::PBYTE)hIl2Cpp + CLASS_2_A4610D4CAF26D48A___C_METHOD_1_C182346378132F07_OFFSET))(this, a1, a2);
	}
};
