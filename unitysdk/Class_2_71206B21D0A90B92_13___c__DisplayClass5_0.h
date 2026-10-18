#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_71206B21D0A90B92_13;
namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client { class EarlyAccessModule; }
namespace System { class Action; }

#define CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBA7E970)
#define CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS5_0___HANDLEPREMISSIONCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0xBA7EBC0)
#define CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS5_0___HANDLEPREMISSIONCONTENT_B__1_OFFSET UNITYSDK_OFFSET(0xBA7ED30)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_13___c__DisplayClass5_0_TypeDefinitionIndex = 53079;

class Class_2_71206B21D0A90B92_13___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::Client::EarlyAccessModule* earlyAccessModule; // 0x10
	::Class_2_71206B21D0A90B92_13* __4__this; // 0x18
	::RPG::Client::EarlyAccessContent* content; // 0x20
	::System::Action* __9__1; // 0x28
	::System::UInt32 preMissionID; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void __HandlePreMissionContent_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS5_0___HANDLEPREMISSIONCONTENT_B__0_OFFSET))(this);
	}

	::System::Void __HandlePreMissionContent_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS5_0___HANDLEPREMISSIONCONTENT_B__1_OFFSET))(this);
	}
};
