#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5E091DCE98E3035C;
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_0__ASYNCREQUESTSTARTNODE_B__0_OFFSET UNITYSDK_OFFSET(0xBD44560)
#define CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_0__ASYNCREQUESTSTARTNODE_B__3_OFFSET UNITYSDK_OFFSET(0xBD445F0)
#define CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBD435A0)

inline static constexpr unsigned int Class_1_5E091DCE98E3035C___c__DisplayClass22_0_TypeDefinitionIndex = 74853;

class Class_1_5E091DCE98E3035C___c__DisplayClass22_0 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveNode* node; // 0x10
	::System::Func_1<::RPG::Client::Promises::IPromise*>* onRspReceived; // 0x18
	::Class_1_5E091DCE98E3035C* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _AsyncRequestStartNode_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_0__ASYNCREQUESTSTARTNODE_B__0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _AsyncRequestStartNode_b__3(::System::UInt32 a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_0__ASYNCREQUESTSTARTNODE_B__3_OFFSET))(this, a1);
	}
};
