#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_34;
class Class_0_16E4307DCC419505_811;
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C2937544035FD07F_METHOD_1_11FA05CACB7AA98D_OFFSET UNITYSDK_OFFSET(0x13E421F0)
#define CLASS_1_C2937544035FD07F_METHOD_1_533620DD947842C5_OFFSET UNITYSDK_OFFSET(0x13E42CE0)
#define CLASS_1_C2937544035FD07F_METHOD_1_8D248181D7FE6805_OFFSET UNITYSDK_OFFSET(0x13E425A0)
#define CLASS_1_C2937544035FD07F_METHOD_1_942AFACCFEB6EF25_OFFSET UNITYSDK_OFFSET(0x13E42AD0)
#define CLASS_1_C2937544035FD07F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13E42310)
#define CLASS_1_C2937544035FD07F_METHOD_1_D7971CCD9703A834_OFFSET UNITYSDK_OFFSET(0x13E42BF0)
#define CLASS_1_C2937544035FD07F_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x13E42350)
#define CLASS_1_C2937544035FD07F_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x13E427B0)
#define CLASS_1_C2937544035FD07F__CTOR_OFFSET UNITYSDK_OFFSET(0x13E41DC0)

inline static constexpr unsigned int Class_1_C2937544035FD07F_TypeDefinitionIndex = 88167;

class Class_1_C2937544035FD07F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::Class_0_16E4307DCC419505_34*, ::System::Boolean>*>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::UInt16>* Field_1_7; // 0x18
	::Class_0_16E4307DCC419505_811* Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C2937544035FD07F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_11FA05CACB7AA98D(::Class_0_16E4307DCC419505_34* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_34*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C2937544035FD07F_METHOD_1_11FA05CACB7AA98D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2937544035FD07F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2937544035FD07F_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_1_8D248181D7FE6805(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C2937544035FD07F_METHOD_1_8D248181D7FE6805_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2937544035FD07F_METHOD_1_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_1_942AFACCFEB6EF25(::System::UInt16 a1, ::System::Action_1<::Class_0_16E4307DCC419505_34*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_34*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Action_1<::Class_0_16E4307DCC419505_34*>*, ::System::Action_1<::Class_0_16E4307DCC419505_34*>*))((::PBYTE)hIl2Cpp + CLASS_1_C2937544035FD07F_METHOD_1_942AFACCFEB6EF25_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D7971CCD9703A834(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_C2937544035FD07F_METHOD_1_D7971CCD9703A834_OFFSET))(this, a1);
	}

	::System::Void Method_1_533620DD947842C5(::Class_0_16E4307DCC419505_34* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_34*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C2937544035FD07F_METHOD_1_533620DD947842C5_OFFSET))(this, a1, a2);
	}
};
