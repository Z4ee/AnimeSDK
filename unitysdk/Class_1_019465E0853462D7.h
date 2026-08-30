#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FCED7C391FCF2F8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_019465E0853462D7_METHOD_1_0C1038AA066C0015_OFFSET UNITYSDK_OFFSET(0x15CF2340)
#define CLASS_1_019465E0853462D7_METHOD_1_12CD8F956BFCC78B_OFFSET UNITYSDK_OFFSET(0x15CF1EB0)
#define CLASS_1_019465E0853462D7_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15CF1E50)
#define CLASS_1_019465E0853462D7__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF2460)

inline static constexpr unsigned int Class_1_019465E0853462D7_TypeDefinitionIndex = 61452;

class Class_1_019465E0853462D7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* MNHHBHHMJLF; // 0x10
	::System::UInt32 MNMHMECGDAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_019465E0853462D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_019465E0853462D7_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_12CD8F956BFCC78B(::Class_1_7FCED7C391FCF2F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FCED7C391FCF2F8*))((::PBYTE)hIl2Cpp + CLASS_1_019465E0853462D7_METHOD_1_12CD8F956BFCC78B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0C1038AA066C0015(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_019465E0853462D7_METHOD_1_0C1038AA066C0015_OFFSET))(this, a1, a2);
	}
};
