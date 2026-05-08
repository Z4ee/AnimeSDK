#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_250.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_173.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_13ADC9176EE2A97C_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x16F91E50)
#define CLASS_2_13ADC9176EE2A97C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F912C0)

inline static constexpr unsigned int Class_2_13ADC9176EE2A97C_TypeDefinitionIndex = 14169;

class Class_2_13ADC9176EE2A97C : public ::Class_1_5DA2E7556103D5A3_250
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x88
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* Field_2_2; // 0x90
	::System::Collections::Generic::List_1<::System::String*>* Field_2_5; // 0x98
	::System::Collections::Generic::List_1<::System::Single>* Field_2_6; // 0xA0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_4; // 0xA8
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* Field_2_3; // 0xB0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0xB8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_173 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_173, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_13ADC9176EE2A97C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_13ADC9176EE2A97C_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}
};
