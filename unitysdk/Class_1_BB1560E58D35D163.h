#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F32457E56C42566.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_676;
class Class_2_E87F1D15F1D4AC72;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BB1560E58D35D163__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6348D0)

inline static constexpr unsigned int Class_1_BB1560E58D35D163_TypeDefinitionIndex = 80407;

class Class_1_BB1560E58D35D163 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_5F32457E56C42566, ::System::Func_2<::Class_2_E87F1D15F1D4AC72*, ::Class_0_16E4307DCC419505_676*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_5F32457E56C42566, ::System::Func_2<::Class_2_E87F1D15F1D4AC72*, ::Class_0_16E4307DCC419505_676*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB1560E58D35D163_TypeDefinitionIndex)->GetStaticField(0x3F700);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB1560E58D35D163__CCTOR_OFFSET))();
	}
};
