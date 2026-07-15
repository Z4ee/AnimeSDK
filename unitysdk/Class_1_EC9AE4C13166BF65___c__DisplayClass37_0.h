#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18255480)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__0_OFFSET UNITYSDK_OFFSET(0x18256AA0)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__1_OFFSET UNITYSDK_OFFSET(0x18256CF0)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__2_OFFSET UNITYSDK_OFFSET(0x18256CB0)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__3_OFFSET UNITYSDK_OFFSET(0x18256CD0)

inline static constexpr unsigned int Class_1_EC9AE4C13166BF65___c__DisplayClass37_0_TypeDefinitionIndex = 72275;

class Class_1_EC9AE4C13166BF65___c__DisplayClass37_0 : public ::System::Object
{
public:
	::System::Action* __9__2; // 0x10
	::System::Action_1<::System::Exception*>* __9__3; // 0x18
	::RPG::Client::Promises::Promise* promise; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Void _HandleStartPVPMatch_b__0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__0_OFFSET))(this, a1, a2);
	}

	::System::Void _HandleStartPVPMatch_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__2_OFFSET))(this);
	}

	::System::Void _HandleStartPVPMatch_b__3(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__3_OFFSET))(this, a1);
	}

	::System::Void _HandleStartPVPMatch_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__1_OFFSET))(this);
	}
};
