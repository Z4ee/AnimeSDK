#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAFDD5F0)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__0_OFFSET UNITYSDK_OFFSET(0xAFDD600)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__1_OFFSET UNITYSDK_OFFSET(0xAFDD890)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__2_OFFSET UNITYSDK_OFFSET(0xAFDD850)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__3_OFFSET UNITYSDK_OFFSET(0xAFDD870)

inline static constexpr unsigned int Class_1_EC9AE4C13166BF65___c__DisplayClass37_0_TypeDefinitionIndex = 69950;

class Class_1_EC9AE4C13166BF65___c__DisplayClass37_0 : public ::System::Object
{
public:
	::System::Action_1<::System::Exception*>* __9__3; // 0x10
	::System::Action* __9__2; // 0x18
	::RPG::Client::Promises::Promise* promise; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Void _HandleStartPVPMatch_b__0(::System::UInt16 cmd, ::System::Object* rspObject)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__0_OFFSET))(this, cmd, rspObject);
	}

	::System::Void _HandleStartPVPMatch_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__2_OFFSET))(this);
	}

	::System::Void _HandleStartPVPMatch_b__3(::System::Exception* e)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__3_OFFSET))(this, e);
	}

	::System::Void _HandleStartPVPMatch_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__1_OFFSET))(this);
	}
};
