#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BC31367C4C352A5F_Struct_2_04C26CA3FB0A8AD7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_446;
class Class_0_16E4307DCC419505_491;
class Class_2_D1346D6684F717E3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BC31367C4C352A5F_METHOD_1_29E5A15A60BBB9CB_OFFSET UNITYSDK_OFFSET(0x14255720)
#define CLASS_1_BC31367C4C352A5F_METHOD_1_5C775A6AFC4069EF_OFFSET UNITYSDK_OFFSET(0x14255520)
#define CLASS_1_BC31367C4C352A5F_METHOD_1_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0x14255630)
#define CLASS_1_BC31367C4C352A5F__CTOR_OFFSET UNITYSDK_OFFSET(0x14255980)

inline static constexpr unsigned int Class_1_BC31367C4C352A5F_TypeDefinitionIndex = 51624;

class Class_1_BC31367C4C352A5F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BC31367C4C352A5F_Struct_2_04C26CA3FB0A8AD7>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC31367C4C352A5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5C775A6AFC4069EF(::Class_0_16E4307DCC419505_491* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_491*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BC31367C4C352A5F_METHOD_1_5C775A6AFC4069EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D599D6C5F28E144(::Class_0_16E4307DCC419505_491* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_491*))((::PBYTE)hIl2Cpp + CLASS_1_BC31367C4C352A5F_METHOD_1_7D599D6C5F28E144_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_446* Method_1_29E5A15A60BBB9CB(::Class_2_D1346D6684F717E3* a1)
	{
		return ((::Class_0_16E4307DCC419505_446*(*)(::PVOID, ::Class_2_D1346D6684F717E3*))((::PBYTE)hIl2Cpp + CLASS_1_BC31367C4C352A5F_METHOD_1_29E5A15A60BBB9CB_OFFSET))(this, a1);
	}
};
