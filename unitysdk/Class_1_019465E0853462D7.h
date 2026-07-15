#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_590EC2E573209D50;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_019465E0853462D7_METHOD_1_0C1038AA066C0015_OFFSET UNITYSDK_OFFSET(0x15F12E80)
#define CLASS_1_019465E0853462D7_METHOD_1_12CD8F956BFCC78B_OFFSET UNITYSDK_OFFSET(0x15F129F0)
#define CLASS_1_019465E0853462D7_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15F12990)
#define CLASS_1_019465E0853462D7__CTOR_OFFSET UNITYSDK_OFFSET(0x15F12FA0)

inline static constexpr unsigned int Class_1_019465E0853462D7_TypeDefinitionIndex = 58621;

class Class_1_019465E0853462D7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_019465E0853462D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_019465E0853462D7_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_12CD8F956BFCC78B(::Class_1_590EC2E573209D50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_590EC2E573209D50*))((::PBYTE)hIl2Cpp + CLASS_1_019465E0853462D7_METHOD_1_12CD8F956BFCC78B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0C1038AA066C0015(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_019465E0853462D7_METHOD_1_0C1038AA066C0015_OFFSET))(this, a1, a2);
	}
};
