#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }

#define CLASS_1_4F9AC8D6A424FAE5___C__DISPLAYCLASS1_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x171F2830)
#define CLASS_1_4F9AC8D6A424FAE5___C__DISPLAYCLASS1_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0x171F2850)
#define CLASS_1_4F9AC8D6A424FAE5___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171F1FD0)

inline static constexpr unsigned int Class_1_4F9AC8D6A424FAE5___c__DisplayClass1_0_TypeDefinitionIndex = 74439;

class Class_1_4F9AC8D6A424FAE5___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10
	::System::Action* onFinishAll; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F9AC8D6A424FAE5___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _Create_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F9AC8D6A424FAE5___C__DISPLAYCLASS1_0__CREATE_B__0_OFFSET))(this);
	}

	::System::Void _Create_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_4F9AC8D6A424FAE5___C__DISPLAYCLASS1_0__CREATE_B__1_OFFSET))(this, a1);
	}
};
