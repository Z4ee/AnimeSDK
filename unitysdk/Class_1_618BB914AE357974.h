#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1640;
class Class_1_16CEF26E52F4EDEF;
class Class_1_7FF19F6206AF6DD7_42;
class Class_2_189AFED4A29EA967;
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_618BB914AE357974_GET_WAITFULLSYNCFINISH_OFFSET UNITYSDK_OFFSET(0x15D7CE60)
#define CLASS_1_618BB914AE357974_METHOD_1_1D1C5E321C6A9EBF_OFFSET UNITYSDK_OFFSET(0x15D7C7A0)
#define CLASS_1_618BB914AE357974_METHOD_1_7EE2AE967A5596D5_OFFSET UNITYSDK_OFFSET(0x15D7C6E0)
#define CLASS_1_618BB914AE357974_METHOD_1_8985DC1BC61C9D72_OFFSET UNITYSDK_OFFSET(0x15D7C990)
#define CLASS_1_618BB914AE357974_SET_WAITFULLSYNCFINISH_OFFSET UNITYSDK_OFFSET(0x15D7CE70)
#define CLASS_1_618BB914AE357974__CTOR_OFFSET UNITYSDK_OFFSET(0x15D7C6B0)

inline static constexpr unsigned int Class_1_618BB914AE357974_TypeDefinitionIndex = 82070;

class Class_1_618BB914AE357974 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1640* PIACKEOFAOG; // 0x10
	::RPG::Client::Promises::Promise* _WaitFullSyncFinish_k__BackingField; // 0x18
	::Class_1_16CEF26E52F4EDEF* JDGBDKHIEGG; // 0x20
	::Class_2_189AFED4A29EA967* MJHHLOPFDNK; // 0x28
	::System::Boolean IKGLFMGELEN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_618BB914AE357974__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7EE2AE967A5596D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_618BB914AE357974_METHOD_1_7EE2AE967A5596D5_OFFSET))(this);
	}

	::System::Void Method_1_1D1C5E321C6A9EBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_618BB914AE357974_METHOD_1_1D1C5E321C6A9EBF_OFFSET))(this);
	}

	::System::Void Method_1_8985DC1BC61C9D72(::Class_1_7FF19F6206AF6DD7_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_42*))((::PBYTE)hIl2Cpp + CLASS_1_618BB914AE357974_METHOD_1_8985DC1BC61C9D72_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* get_WaitFullSyncFinish()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_618BB914AE357974_GET_WAITFULLSYNCFINISH_OFFSET))(this);
	}

	::System::Void set_WaitFullSyncFinish(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_618BB914AE357974_SET_WAITFULLSYNCFINISH_OFFSET))(this, a1);
	}
};
