#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A987751E60DD5C83.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_475;
namespace System { class Action; }

#define CLASS_1_3B7B61C15BD82C04_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16C05370)
#define CLASS_1_3B7B61C15BD82C04_METHOD_1_B9489D332A757B66_OFFSET UNITYSDK_OFFSET(0x16C05350)
#define CLASS_1_3B7B61C15BD82C04__CTOR_OFFSET UNITYSDK_OFFSET(0x16C05340)

inline static constexpr unsigned int Class_1_3B7B61C15BD82C04_TypeDefinitionIndex = 71430;

class Class_1_3B7B61C15BD82C04 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_475* Field_1_4; // 0x10
	::System::Action* Field_1_11; // 0x18
	::System::Boolean Field_1_6; // 0x20
	::System::Boolean Field_1_0; // 0x21
	::System::Boolean Field_1_5; // 0x22
	::System::Boolean Field_1_7; // 0x23
	::System::UInt32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B7B61C15BD82C04__CTOR_OFFSET))(this);
	}

	::Enum_3_A987751E60DD5C83 Method_1_B9489D332A757B66()
	{
		return ((::Enum_3_A987751E60DD5C83(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B7B61C15BD82C04_METHOD_1_B9489D332A757B66_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B7B61C15BD82C04_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
