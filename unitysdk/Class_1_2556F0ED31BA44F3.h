#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AppVersion; }
namespace Foundation { class VersionFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2556F0ED31BA44F3_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1D891A30)
#define CLASS_1_2556F0ED31BA44F3_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1D891DF0)
#define CLASS_1_2556F0ED31BA44F3_METHOD_1_5C1CF9882D89C6C9_OFFSET UNITYSDK_OFFSET(0x1D891D20)
#define CLASS_1_2556F0ED31BA44F3_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1D891C60)
#define CLASS_1_2556F0ED31BA44F3_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1D891930)
#define CLASS_1_2556F0ED31BA44F3_METHOD_1_E82507BC3E8EA95C_1_OFFSET UNITYSDK_OFFSET(0x1D891C70)
#define CLASS_1_2556F0ED31BA44F3_METHOD_1_E82507BC3E8EA95C_2_OFFSET UNITYSDK_OFFSET(0x1D891E00)
#define CLASS_1_2556F0ED31BA44F3_METHOD_1_E82507BC3E8EA95C_OFFSET UNITYSDK_OFFSET(0x1D891BB0)
#define CLASS_1_2556F0ED31BA44F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8918A0)

inline static constexpr unsigned int Class_1_2556F0ED31BA44F3_TypeDefinitionIndex = 8087;

class Class_1_2556F0ED31BA44F3 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::String* Field_1_4; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_7; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_9; // 0x30
	::System::String* Field_1_5; // 0x38
	::Foundation::AppVersion* Field_1_1; // 0x40
	::System::String* Field_1_6; // 0x48
	::System::Collections::Generic::List_1<::Foundation::VersionFileInfo*>* Field_1_8; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556F0ED31BA44F3__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_E82507BC3E8EA95C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556F0ED31BA44F3_METHOD_1_E82507BC3E8EA95C_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556F0ED31BA44F3_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2556F0ED31BA44F3_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* Method_1_E82507BC3E8EA95C_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556F0ED31BA44F3_METHOD_1_E82507BC3E8EA95C_1_OFFSET))(this);
	}

	::System::String* Method_1_5C1CF9882D89C6C9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556F0ED31BA44F3_METHOD_1_5C1CF9882D89C6C9_OFFSET))(this);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556F0ED31BA44F3_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556F0ED31BA44F3_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_E82507BC3E8EA95C_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556F0ED31BA44F3_METHOD_1_E82507BC3E8EA95C_2_OFFSET))(this);
	}
};
