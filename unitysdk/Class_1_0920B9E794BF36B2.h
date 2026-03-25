#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_0920B9E794BF36B2_TRIGGER_OFFSET UNITYSDK_OFFSET(0x114EF930)
#define CLASS_1_0920B9E794BF36B2__CTOR_OFFSET UNITYSDK_OFFSET(0x114EF810)

inline static constexpr unsigned int Class_1_0920B9E794BF36B2_TypeDefinitionIndex = 53841;

class Class_1_0920B9E794BF36B2 : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::RPG::Client::MonopolyEffectShowType Field_1_2; // 0x18

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_0920B9E794BF36B2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0920B9E794BF36B2_TRIGGER_OFFSET))(this);
	}
};
