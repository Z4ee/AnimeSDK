#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_3BBF042176610B82_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xBF42DD0)
#define CLASS_1_3BBF042176610B82_TRIGGER_OFFSET UNITYSDK_OFFSET(0xBF42CA0)
#define CLASS_1_3BBF042176610B82__CTOR_OFFSET UNITYSDK_OFFSET(0xBF42D40)

inline static constexpr unsigned int Class_1_3BBF042176610B82_TypeDefinitionIndex = 66265;

class Class_1_3BBF042176610B82 : public ::System::Object
{
public:
	::System::UInt32 AIKAPJELHNK; // 0x10
	::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x14

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_3BBF042176610B82__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BBF042176610B82_TRIGGER_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3BBF042176610B82_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}
};
