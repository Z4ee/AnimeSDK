#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_9918DD4F0A8E5511_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x18C30200)
#define CLASS_3_9918DD4F0A8E5511_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x18C30520)
#define CLASS_3_9918DD4F0A8E5511_METHOD_3_4C191B51DC300FEC_OFFSET UNITYSDK_OFFSET(0x18C30590)
#define CLASS_3_9918DD4F0A8E5511_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18C30D00)
#define CLASS_3_9918DD4F0A8E5511__CTOR_OFFSET UNITYSDK_OFFSET(0x18C30AD0)

inline static constexpr unsigned int Class_3_9918DD4F0A8E5511_TypeDefinitionIndex = 44047;

class Class_3_9918DD4F0A8E5511 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_5; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_7; // 0x30
	::Class_3_B537A0AA78803363* Field_3_11; // 0x38
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_1; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9918DD4F0A8E5511__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9918DD4F0A8E5511_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_9918DD4F0A8E5511_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4C191B51DC300FEC(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_9918DD4F0A8E5511_METHOD_3_4C191B51DC300FEC_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9918DD4F0A8E5511_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
