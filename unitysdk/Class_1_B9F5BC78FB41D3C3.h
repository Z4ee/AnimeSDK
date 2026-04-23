#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8278C4CB5E7C57A4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9F5BC78FB41D3C3_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17D4ECC0)
#define CLASS_1_B9F5BC78FB41D3C3_METHOD_1_A0BDC44A9D22219F_1_OFFSET UNITYSDK_OFFSET(0x17D3A5C0)
#define CLASS_1_B9F5BC78FB41D3C3_METHOD_1_A0BDC44A9D22219F_OFFSET UNITYSDK_OFFSET(0x17D3A490)
#define CLASS_1_B9F5BC78FB41D3C3__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3A6F0)

inline static constexpr unsigned int Class_1_B9F5BC78FB41D3C3_TypeDefinitionIndex = 34413;

class Class_1_B9F5BC78FB41D3C3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8278C4CB5E7C57A4*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_8278C4CB5E7C57A4*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt64 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F5BC78FB41D3C3__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_A0BDC44A9D22219F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F5BC78FB41D3C3_METHOD_1_A0BDC44A9D22219F_OFFSET))(this);
	}

	::System::String* Method_1_A0BDC44A9D22219F_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F5BC78FB41D3C3_METHOD_1_A0BDC44A9D22219F_1_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F5BC78FB41D3C3_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
