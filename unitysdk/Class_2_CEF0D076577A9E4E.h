#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_87.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_314.h"

class Class_0_16E4307DCC419505_7;
class Class_2_CEF0D076577A9E4E_Class_1_593B89773C2BA19D_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CEF0D076577A9E4E__CTOR_OFFSET UNITYSDK_OFFSET(0x14BFD7F0)

inline static constexpr unsigned int Class_2_CEF0D076577A9E4E_TypeDefinitionIndex = 13803;

class Class_2_CEF0D076577A9E4E : public ::Class_1_5DA2E7556103D5A3_87
{
public:
	::System::Collections::Generic::List_1<::Class_2_CEF0D076577A9E4E_Class_1_593B89773C2BA19D_1*>* Field_2_0; // 0x148
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_2_1; // 0x150
	::System::Int32 Field_2_2; // 0x158

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_314 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_314, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_CEF0D076577A9E4E__CTOR_OFFSET))(this, a1, a2);
	}
};
