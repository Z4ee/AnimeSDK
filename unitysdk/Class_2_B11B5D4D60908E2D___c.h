#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_300;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_B11B5D4D60908E2D___C_METHOD_1_70046874308347C8_OFFSET UNITYSDK_OFFSET(0x12921380)
#define CLASS_2_B11B5D4D60908E2D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12921330)
#define CLASS_2_B11B5D4D60908E2D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12921370)

inline static constexpr unsigned int Class_2_B11B5D4D60908E2D___c_TypeDefinitionIndex = 41211;

class Class_2_B11B5D4D60908E2D___c : public ::System::Object
{
public:
	static ::Class_2_B11B5D4D60908E2D___c** StaticGet___9()
	{
		return (::Class_2_B11B5D4D60908E2D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B11B5D4D60908E2D___c_TypeDefinitionIndex)->GetStaticField(0x31D90);
	}
	static ::System::Comparison_1<::Class_1_5DA2E7556103D5A3_300*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_1_5DA2E7556103D5A3_300*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B11B5D4D60908E2D___c_TypeDefinitionIndex)->GetStaticField(0x31D98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B11B5D4D60908E2D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B11B5D4D60908E2D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_70046874308347C8(::Class_1_5DA2E7556103D5A3_300* a1, ::Class_1_5DA2E7556103D5A3_300* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_300*, ::Class_1_5DA2E7556103D5A3_300*))((::PBYTE)hIl2Cpp + CLASS_2_B11B5D4D60908E2D___C_METHOD_1_70046874308347C8_OFFSET))(this, a1, a2);
	}
};
