#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E7B39FEF49984CE9_Class_1_FA7091ADF2A6A8DC;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_E7B39FEF49984CE9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188D6810)
#define CLASS_2_E7B39FEF49984CE9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188D6840)
#define CLASS_2_E7B39FEF49984CE9___C__GETCONTENT_B__8_0_OFFSET UNITYSDK_OFFSET(0x188D6850)

inline static constexpr unsigned int Class_2_E7B39FEF49984CE9___c_TypeDefinitionIndex = 65736;

class Class_2_E7B39FEF49984CE9___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_E7B39FEF49984CE9_Class_1_FA7091ADF2A6A8DC*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Class_2_E7B39FEF49984CE9_Class_1_FA7091ADF2A6A8DC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7B39FEF49984CE9___c_TypeDefinitionIndex)->GetStaticField(0x481B0);
	}
	static ::Class_2_E7B39FEF49984CE9___c** StaticGet___9()
	{
		return (::Class_2_E7B39FEF49984CE9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7B39FEF49984CE9___c_TypeDefinitionIndex)->GetStaticField(0x481B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E7B39FEF49984CE9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7B39FEF49984CE9___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetContent_b__8_0(::Class_2_E7B39FEF49984CE9_Class_1_FA7091ADF2A6A8DC* a1, ::Class_2_E7B39FEF49984CE9_Class_1_FA7091ADF2A6A8DC* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_E7B39FEF49984CE9_Class_1_FA7091ADF2A6A8DC*, ::Class_2_E7B39FEF49984CE9_Class_1_FA7091ADF2A6A8DC*))((::PBYTE)hIl2Cpp + CLASS_2_E7B39FEF49984CE9___C__GETCONTENT_B__8_0_OFFSET))(this, a1, a2);
	}
};
