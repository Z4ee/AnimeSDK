#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_459;
class Class_2_208CC9941471731A_967;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BFD23B786929AB28_CLASS_1_B95243F097AE8C33__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17286620)
#define CLASS_3_BFD23B786929AB28_CLASS_1_B95243F097AE8C33__CTOR_OFFSET UNITYSDK_OFFSET(0x172865A0)

inline static constexpr unsigned int Class_3_BFD23B786929AB28_Class_1_B95243F097AE8C33_TypeDefinitionIndex = 59522;

class Class_3_BFD23B786929AB28_Class_1_B95243F097AE8C33 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20
	::System::String* Field_1_2; // 0x28
	::System::String* Field_1_1; // 0x30
	::System::Int32 Field_1_0; // 0x38
	::System::Int32 Field_1_7; // 0x3C
	::System::Single Field_1_4; // 0x40

	::System::Void _ctor(::Class_2_208CC9941471731A_967* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_967*))((::PBYTE)hIl2Cpp + CLASS_3_BFD23B786929AB28_CLASS_1_B95243F097AE8C33__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_2_208CC9941471731A_459* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_459*))((::PBYTE)hIl2Cpp + CLASS_3_BFD23B786929AB28_CLASS_1_B95243F097AE8C33__CTOR_1_OFFSET))(this, a1);
	}
};
