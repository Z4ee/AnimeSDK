#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7B044D15E4826ADC.h"
#include "unitysdk/System/Object.h"

class Class_1_275515F210334D06_1;
class Class_1_43BD383C98B4C0C5_29;
class Class_1_D375C91CCE5D3999;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_817A8F69C43FD05F;

#define CLASS_1_682D0140A510D153_METHOD_1_054B8F7AF60506D5_OFFSET UNITYSDK_OFFSET(0x1577E800)
#define CLASS_1_682D0140A510D153_METHOD_1_12BB9F3B2DD41E45_OFFSET UNITYSDK_OFFSET(0x1577E210)
#define CLASS_1_682D0140A510D153_METHOD_1_2097174150E430B8_1_OFFSET UNITYSDK_OFFSET(0x1577E540)
#define CLASS_1_682D0140A510D153_METHOD_1_2097174150E430B8_OFFSET UNITYSDK_OFFSET(0x1577E170)
#define CLASS_1_682D0140A510D153_METHOD_1_C9F58367497BE838_OFFSET UNITYSDK_OFFSET(0x1577E5E0)
#define CLASS_1_682D0140A510D153__CTOR_OFFSET UNITYSDK_OFFSET(0x1577E050)

inline static constexpr unsigned int Class_1_682D0140A510D153_TypeDefinitionIndex = 40616;

class Class_1_682D0140A510D153 : public ::System::Object
{
public:
	::Class_1_D375C91CCE5D3999* Field_1_6; // 0x10
	::Class_2_817A8F69C43FD05F<::Class_1_D375C91CCE5D3999*>* Field_1_10; // 0x18
	::Class_2_817A8F69C43FD05F<::Class_1_D375C91CCE5D3999*>* Field_1_4; // 0x20
	::Class_1_43BD383C98B4C0C5_29* Field_1_9; // 0x28
	::Class_2_817A8F69C43FD05F<::Class_1_D375C91CCE5D3999*>* Field_1_11; // 0x30
	::Class_1_D375C91CCE5D3999* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D375C91CCE5D3999*>* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x48
	::Class_1_275515F210334D06_1* Field_1_15; // 0x50
	::System::Int32 Field_1_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_682D0140A510D153__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2097174150E430B8(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_682D0140A510D153_METHOD_1_2097174150E430B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_12BB9F3B2DD41E45(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_682D0140A510D153_METHOD_1_12BB9F3B2DD41E45_OFFSET))(this, a1);
	}

	::System::Void Method_1_2097174150E430B8_1(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_682D0140A510D153_METHOD_1_2097174150E430B8_1_OFFSET))(this, a1);
	}

	::Class_1_D375C91CCE5D3999* Method_1_C9F58367497BE838(::Enum_3_7B044D15E4826ADC a1)
	{
		return ((::Class_1_D375C91CCE5D3999*(*)(::PVOID, ::Enum_3_7B044D15E4826ADC))((::PBYTE)hIl2Cpp + CLASS_1_682D0140A510D153_METHOD_1_C9F58367497BE838_OFFSET))(this, a1);
	}

	::System::Void Method_1_054B8F7AF60506D5(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_682D0140A510D153_METHOD_1_054B8F7AF60506D5_OFFSET))(this, a1);
	}
};
