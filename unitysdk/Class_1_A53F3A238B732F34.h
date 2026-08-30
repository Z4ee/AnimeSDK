#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdvEffectParamSource.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A53F3A238B732F34__CTOR_OFFSET UNITYSDK_OFFSET(0xC3BBF80)

inline static constexpr unsigned int Class_1_A53F3A238B732F34_TypeDefinitionIndex = 69882;

class Class_1_A53F3A238B732F34 : public ::System::Object
{
public:
	::RPG::Client::AdvEffectParamSource DDGHHBLOCLO; // 0x10
	::System::UInt32 IHHIOGFBMJK; // 0x14
	::System::UInt32 NIKDDAOHOKL; // 0x18
	::System::Boolean JJDDNOMCCLB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A53F3A238B732F34__CTOR_OFFSET))(this);
	}
};
