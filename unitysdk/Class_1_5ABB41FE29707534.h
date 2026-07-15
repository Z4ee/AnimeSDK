#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }
namespace System { class String; }

#define CLASS_1_5ABB41FE29707534_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xE4EE090)
#define CLASS_1_5ABB41FE29707534_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xE4EE0A0)
#define CLASS_1_5ABB41FE29707534_TRIGGER_OFFSET UNITYSDK_OFFSET(0xE4EDE00)
#define CLASS_1_5ABB41FE29707534__CTOR_OFFSET UNITYSDK_OFFSET(0xE4EDFA0)

inline static constexpr unsigned int Class_1_5ABB41FE29707534_TypeDefinitionIndex = 63279;

class Class_1_5ABB41FE29707534 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::UInt32 _BuffID_k__BackingField; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::System::UInt32 Field_1_3; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::RPG::Client::MonopolyEffectShowType Field_1_5; // 0x20

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_5ABB41FE29707534__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ABB41FE29707534_TRIGGER_OFFSET))(this);
	}

	::System::UInt32 get_BuffID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ABB41FE29707534_GET_BUFFID_OFFSET))(this);
	}

	::System::Void set_BuffID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5ABB41FE29707534_SET_BUFFID_OFFSET))(this, a1);
	}
};
