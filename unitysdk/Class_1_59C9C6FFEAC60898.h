#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/RPG/Client/MonopolyEffectTriggerWayType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_59C9C6FFEAC60898_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1910CA40)
#define CLASS_1_59C9C6FFEAC60898_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1910C9F0)
#define CLASS_1_59C9C6FFEAC60898_METHOD_1_8EB9A7947F4A628E_OFFSET UNITYSDK_OFFSET(0x1910C9B0)
#define CLASS_1_59C9C6FFEAC60898_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1910C910)
#define CLASS_1_59C9C6FFEAC60898__CTOR_OFFSET UNITYSDK_OFFSET(0x1910CA80)

inline static constexpr unsigned int Class_1_59C9C6FFEAC60898_TypeDefinitionIndex = 66268;

class Class_1_59C9C6FFEAC60898 : public ::System::Object
{
public:
	::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x10
	::System::UInt32 AIKAPJELHNK; // 0x14
	::RPG::Client::MonopolyEffectTriggerWayType KJELCKIDLOE; // 0x18

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_59C9C6FFEAC60898__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C9C6FFEAC60898_TRIGGER_OFFSET))(this);
	}

	::RPG::Client::MonopolyEffectTriggerWayType Method_1_8EB9A7947F4A628E()
	{
		return ((::RPG::Client::MonopolyEffectTriggerWayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C9C6FFEAC60898_METHOD_1_8EB9A7947F4A628E_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59C9C6FFEAC60898_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C9C6FFEAC60898_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}
};
