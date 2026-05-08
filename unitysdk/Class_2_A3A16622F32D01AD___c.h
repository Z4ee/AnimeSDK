#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_4.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_A3A16622F32D01AD___C_METHOD_1_442BD36408A5FFF0_OFFSET UNITYSDK_OFFSET(0x118FE220)
#define CLASS_2_A3A16622F32D01AD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x118FE1D0)
#define CLASS_2_A3A16622F32D01AD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x118FE210)

inline static constexpr unsigned int Class_2_A3A16622F32D01AD___c_TypeDefinitionIndex = 75379;

class Class_2_A3A16622F32D01AD___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_4>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_4>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3A16622F32D01AD___c_TypeDefinitionIndex)->GetStaticField(0x3B810);
	}
	static ::Class_2_A3A16622F32D01AD___c** StaticGet___9()
	{
		return (::Class_2_A3A16622F32D01AD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3A16622F32D01AD___c_TypeDefinitionIndex)->GetStaticField(0x3B818);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3A16622F32D01AD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3A16622F32D01AD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_442BD36408A5FFF0(::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_4 a1, ::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_4 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_4, ::Class_2_A3A16622F32D01AD_Struct_2_BBD456EBC9087BC2_4))((::PBYTE)hIl2Cpp + CLASS_2_A3A16622F32D01AD___C_METHOD_1_442BD36408A5FFF0_OFFSET))(this, a1, a2);
	}
};
