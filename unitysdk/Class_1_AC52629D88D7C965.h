#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_135887623EB95081.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_62B0BA5A964633D6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AC52629D88D7C965_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1170BA60)
#define CLASS_1_AC52629D88D7C965_METHOD_1_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x1170B910)
#define CLASS_1_AC52629D88D7C965_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x1170BCB0)
#define CLASS_1_AC52629D88D7C965_METHOD_1_C0F05879FCE2F7A0_OFFSET UNITYSDK_OFFSET(0x1170BB00)
#define CLASS_1_AC52629D88D7C965_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1170BCA0)
#define CLASS_1_AC52629D88D7C965__CTOR_OFFSET UNITYSDK_OFFSET(0x1170B830)

inline static constexpr unsigned int Class_1_AC52629D88D7C965_TypeDefinitionIndex = 44576;

class Class_1_AC52629D88D7C965 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_11; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x5; // 0x0
	::System::Collections::Generic::List_1<::Class_1_62B0BA5A964633D6*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_62B0BA5A964633D6*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x28
	::System::Single Field_1_7; // 0x30
	::System::Boolean Field_1_14; // 0x34
	::System::Byte Field_1_13; // 0x35
	::System::Boolean Field_1_5; // 0x36
	::System::Int32 Field_1_12; // 0x38
	::UnityEngine::Vector3 Field_1_0; // 0x3C
	::System::Single Field_1_9; // 0x48
	::Enum_3_135887623EB95081 Field_1_8; // 0x4C
	::System::Single Field_1_6; // 0x50
	::System::Single Field_1_10; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC52629D88D7C965__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC52629D88D7C965_METHOD_1_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC52629D88D7C965_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_C0F05879FCE2F7A0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AC52629D88D7C965_METHOD_1_C0F05879FCE2F7A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC52629D88D7C965_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AC52629D88D7C965_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}
};
