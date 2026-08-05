#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_034E96628B18700D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_C1192000AC1B5640_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x145A8BF0)
#define CLASS_4_C1192000AC1B5640_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x145A8490)
#define CLASS_4_C1192000AC1B5640_METHOD_4_CC4DC8FB65DC8FF4_OFFSET UNITYSDK_OFFSET(0x145A8570)
#define CLASS_4_C1192000AC1B5640_METHOD_4_EC5EE51A67FE2040_OFFSET UNITYSDK_OFFSET(0x145A8750)
#define CLASS_4_C1192000AC1B5640__CTOR_OFFSET UNITYSDK_OFFSET(0x145A88F0)

inline static constexpr unsigned int Class_4_C1192000AC1B5640_TypeDefinitionIndex = 48590;

class Class_4_C1192000AC1B5640 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C1192000AC1B5640__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C1192000AC1B5640_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_CC4DC8FB65DC8FF4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_C1192000AC1B5640_METHOD_4_CC4DC8FB65DC8FF4_OFFSET))(this, a1);
	}

	::System::Void Method_4_EC5EE51A67FE2040(::System::String* a1, ::Class_2_034E96628B18700D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_034E96628B18700D*))((::PBYTE)hIl2Cpp + CLASS_4_C1192000AC1B5640_METHOD_4_EC5EE51A67FE2040_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C1192000AC1B5640_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
