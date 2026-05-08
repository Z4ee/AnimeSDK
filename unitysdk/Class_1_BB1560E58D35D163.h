#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AADF24AF29C5ADF.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_2_E87F1D15F1D4AC72;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BB1560E58D35D163__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C72D0)

inline static constexpr unsigned int Class_1_BB1560E58D35D163_TypeDefinitionIndex = 50654;

class Class_1_BB1560E58D35D163 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_7AADF24AF29C5ADF, ::System::Func_2<::Class_2_E87F1D15F1D4AC72*, ::Class_0_16E4307DCC419505_460*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_7AADF24AF29C5ADF, ::System::Func_2<::Class_2_E87F1D15F1D4AC72*, ::Class_0_16E4307DCC419505_460*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB1560E58D35D163_TypeDefinitionIndex)->GetStaticField(0x42D20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB1560E58D35D163__CCTOR_OFFSET))();
	}
};
