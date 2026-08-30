#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FuncUnlockHint; }

#define CLASS_1_D402A6FC921BA113_METHOD_1_8A225B38846E6E17_OFFSET UNITYSDK_OFFSET(0x18958810)

inline static constexpr unsigned int Class_1_D402A6FC921BA113_TypeDefinitionIndex = 68012;

class Class_1_D402A6FC921BA113 : public ::System::Object
{
public:
	static ::System::Void Method_1_8A225B38846E6E17(::RPG::Client::FuncUnlockHint* a1)
	{
		return ((::System::Void(*)(::RPG::Client::FuncUnlockHint*))((::PBYTE)hIl2Cpp + CLASS_1_D402A6FC921BA113_METHOD_1_8A225B38846E6E17_OFFSET))(a1);
	}
};
