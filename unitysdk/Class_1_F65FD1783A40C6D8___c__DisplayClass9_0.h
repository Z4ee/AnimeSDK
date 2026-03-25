#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F65FD1783A40C6D8;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }

#define CLASS_1_F65FD1783A40C6D8___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B5EAF0)
#define CLASS_1_F65FD1783A40C6D8___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__0_OFFSET UNITYSDK_OFFSET(0x10B5EBA0)
#define CLASS_1_F65FD1783A40C6D8___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__1_OFFSET UNITYSDK_OFFSET(0x10B5ECC0)
#define CLASS_1_F65FD1783A40C6D8___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__2_OFFSET UNITYSDK_OFFSET(0x10B5EDB0)

inline static constexpr unsigned int Class_1_F65FD1783A40C6D8___c__DisplayClass9_0_TypeDefinitionIndex = 62065;

class Class_1_F65FD1783A40C6D8___c__DisplayClass9_0 : public ::System::Object
{
public:
	::System::Action* onFinish; // 0x10
	::System::Object* phaseEnterParam; // 0x18
	::Class_1_F65FD1783A40C6D8* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ExecuteSwitchPhase_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ExecuteSwitchPhase_b__1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__1_OFFSET))(this);
	}

	::System::Void __ExecuteSwitchPhase_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__2_OFFSET))(this);
	}
};
