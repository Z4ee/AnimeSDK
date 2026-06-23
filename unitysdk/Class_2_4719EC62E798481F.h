#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_E0707159A4819BEE.h"

class Class_2_167BB37617B940E3;
class Class_3_783F0B97013CC576;
namespace System { class String; }

#define CLASS_2_4719EC62E798481F_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x127B5B30)
#define CLASS_2_4719EC62E798481F_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x127B58C0)
#define CLASS_2_4719EC62E798481F_METHOD_2_418B038717020A3A_OFFSET UNITYSDK_OFFSET(0x127B5900)
#define CLASS_2_4719EC62E798481F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x127B5660)
#define CLASS_2_4719EC62E798481F_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x127B5780)
#define CLASS_2_4719EC62E798481F_METHOD_2_C976FC3C8221DA6B_OFFSET UNITYSDK_OFFSET(0x127B5810)
#define CLASS_2_4719EC62E798481F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x127B5B80)
#define CLASS_2_4719EC62E798481F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127B5A90)
#define CLASS_2_4719EC62E798481F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x127B52A0)
#define CLASS_2_4719EC62E798481F__CCTOR_OFFSET UNITYSDK_OFFSET(0x127B5700)
#define CLASS_2_4719EC62E798481F__CTOR_OFFSET UNITYSDK_OFFSET(0x127B5770)

inline static constexpr unsigned int Class_2_4719EC62E798481F_TypeDefinitionIndex = 71492;

class Class_2_4719EC62E798481F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0xD1; // 0x0
	::System::String* Field_2_3; // 0x20
	::System::String* Field_2_0; // 0x28
	::Enum_3_E0707159A4819BEE Field_2_2; // 0x30
	::System::Boolean Field_2_6; // 0x34
	::System::Boolean Field_2_1; // 0x35
	::System::Int32 Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_C976FC3C8221DA6B(::System::String* a1, ::Enum_3_E0707159A4819BEE a2, ::System::String* a3, ::System::Int32 a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_E0707159A4819BEE, ::System::String*, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F_METHOD_2_C976FC3C8221DA6B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_418B038717020A3A(::Class_2_167BB37617B940E3* a1, ::Class_3_783F0B97013CC576* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_167BB37617B940E3*, ::Class_3_783F0B97013CC576*))((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F_METHOD_2_418B038717020A3A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4719EC62E798481F_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
