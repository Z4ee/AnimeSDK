#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define CLASS_1_CEACAB9E91EC3167_METHOD_1_EB6D6F7FD5786BC8_OFFSET UNITYSDK_OFFSET(0x171FDC20)
#define CLASS_1_CEACAB9E91EC3167__CTOR_OFFSET UNITYSDK_OFFSET(0x171FDD10)

inline static constexpr unsigned int Class_1_CEACAB9E91EC3167_TypeDefinitionIndex = 74325;

class Class_1_CEACAB9E91EC3167 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEACAB9E91EC3167__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraDuelBubbleEventType Method_1_EB6D6F7FD5786BC8(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelBubbleEventType(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + CLASS_1_CEACAB9E91EC3167_METHOD_1_EB6D6F7FD5786BC8_OFFSET))(this, a1);
	}
};
