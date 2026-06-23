#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace System { class String; }

#define CLASS_2_C04B11307FFB7DC9_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x17A82C80)
#define CLASS_2_C04B11307FFB7DC9_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x17A82B70)
#define CLASS_2_C04B11307FFB7DC9__CTOR_OFFSET UNITYSDK_OFFSET(0x17A82C10)

inline static constexpr unsigned int Class_2_C04B11307FFB7DC9_TypeDefinitionIndex = 70365;

class Class_2_C04B11307FFB7DC9 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::String* Field_2_2; // 0x80
	::System::Boolean Field_2_1; // 0x88
	::System::Boolean Field_2_0; // 0x89

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C04B11307FFB7DC9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C04B11307FFB7DC9_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C04B11307FFB7DC9_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
