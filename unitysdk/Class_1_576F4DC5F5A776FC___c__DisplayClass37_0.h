#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_576F4DC5F5A776FC;
class Class_1_60E4AD8B5324F35F;
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define CLASS_1_576F4DC5F5A776FC___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C08710)
#define CLASS_1_576F4DC5F5A776FC___C__DISPLAYCLASS37_0___REQUESTANDAPPLYACTIVITYDATAASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x16C08E30)
#define CLASS_1_576F4DC5F5A776FC___C__DISPLAYCLASS37_0___REQUESTANDAPPLYACTIVITYDATAASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x16C08EC0)

inline static constexpr unsigned int Class_1_576F4DC5F5A776FC___c__DisplayClass37_0_TypeDefinitionIndex = 80404;

class Class_1_576F4DC5F5A776FC___c__DisplayClass37_0 : public ::System::Object
{
public:
	::Class_1_576F4DC5F5A776FC* __4__this; // 0x10
	::RPG::Client::Promises::Promise* requestPromise; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_576F4DC5F5A776FC___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Void __RequestAndApplyActivityDataAsync_b__0(::Class_1_60E4AD8B5324F35F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60E4AD8B5324F35F*))((::PBYTE)hIl2Cpp + CLASS_1_576F4DC5F5A776FC___C__DISPLAYCLASS37_0___REQUESTANDAPPLYACTIVITYDATAASYNC_B__0_OFFSET))(this, a1);
	}

	::System::Void __RequestAndApplyActivityDataAsync_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_576F4DC5F5A776FC___C__DISPLAYCLASS37_0___REQUESTANDAPPLYACTIVITYDATAASYNC_B__1_OFFSET))(this, a1);
	}
};
