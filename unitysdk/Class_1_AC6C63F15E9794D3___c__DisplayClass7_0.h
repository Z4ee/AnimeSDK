#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC6C63F15E9794D3;
class Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D;
class Class_1_DDB796240B07BA45;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AC6C63F15E9794D3___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A49230)
#define CLASS_1_AC6C63F15E9794D3___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__0_OFFSET UNITYSDK_OFFSET(0x11A49BD0)
#define CLASS_1_AC6C63F15E9794D3___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__1_OFFSET UNITYSDK_OFFSET(0x11A49C60)
#define CLASS_1_AC6C63F15E9794D3___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__2_OFFSET UNITYSDK_OFFSET(0x11A49D20)

inline static constexpr unsigned int Class_1_AC6C63F15E9794D3___c__DisplayClass7_0_TypeDefinitionIndex = 63927;

class Class_1_AC6C63F15E9794D3___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::Class_1_DDB796240B07BA45*>* promise; // 0x10
	::System::Action_1<::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D*>* sendOnce; // 0x18
	::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D* sendParams; // 0x20
	::System::Action_1<::System::Exception*>* onError; // 0x28
	::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D* retrySendParams; // 0x30
	::Class_1_AC6C63F15E9794D3* __4__this; // 0x38
	::System::Action_1<::Class_1_DDB796240B07BA45*>* __9__2; // 0x40
	::System::UInt32 retries; // 0x48
	::System::UInt32 curRetries; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _SendWithRetry_b__0(::System::Exception* ex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__0_OFFSET))(this, ex);
	}

	::System::Void _SendWithRetry_b__1(::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D* sp)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__1_OFFSET))(this, sp);
	}

	::System::Void _SendWithRetry_b__2(::Class_1_DDB796240B07BA45* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__2_OFFSET))(this, rsp);
	}
};
