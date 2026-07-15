#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_92B1BD6FC8375724;
class Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_92B1BD6FC8375724___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17536E40)
#define CLASS_1_92B1BD6FC8375724___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__0_OFFSET UNITYSDK_OFFSET(0x175377E0)
#define CLASS_1_92B1BD6FC8375724___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__1_OFFSET UNITYSDK_OFFSET(0x17537870)
#define CLASS_1_92B1BD6FC8375724___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__2_OFFSET UNITYSDK_OFFSET(0x17537950)

inline static constexpr unsigned int Class_1_92B1BD6FC8375724___c__DisplayClass7_0_TypeDefinitionIndex = 66249;

class Class_1_92B1BD6FC8375724___c__DisplayClass7_0 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D*>* sendOnce; // 0x10
	::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* retrySendParams; // 0x18
	::RPG::Client::Promises::Promise_1<::Class_1_296A7AC90F028539*>* promise; // 0x20
	::System::Action_1<::Class_1_296A7AC90F028539*>* __9__2; // 0x28
	::System::Action_1<::System::Exception*>* onError; // 0x30
	::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* sendParams; // 0x38
	::Class_1_92B1BD6FC8375724* __4__this; // 0x40
	::System::UInt32 retries; // 0x48
	::System::UInt32 curRetries; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _SendWithRetry_b__0(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__0_OFFSET))(this, a1);
	}

	::System::Void _SendWithRetry_b__1(::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__1_OFFSET))(this, a1);
	}

	::System::Void _SendWithRetry_b__2(::Class_1_296A7AC90F028539* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__2_OFFSET))(this, a1);
	}
};
