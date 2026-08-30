#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define CLASS_1_CEACAB9E91EC3167_1_METHOD_1_EB6D6F7FD5786BC8_OFFSET UNITYSDK_OFFSET(0xB9E29C0)
#define CLASS_1_CEACAB9E91EC3167_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB9E2AC0)

inline static constexpr unsigned int Class_1_CEACAB9E91EC3167_1_TypeDefinitionIndex = 77812;

class Class_1_CEACAB9E91EC3167_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEACAB9E91EC3167_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraDuelBubbleEventType Method_1_EB6D6F7FD5786BC8(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelBubbleEventType(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + CLASS_1_CEACAB9E91EC3167_1_METHOD_1_EB6D6F7FD5786BC8_OFFSET))(this, a1);
	}
};
