#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class InventoryModule; }

#define CLASS_1_C19EC36961ACBA64_METHOD_1_E2ACF3FF064F9810_OFFSET UNITYSDK_OFFSET(0x15875250)
#define CLASS_1_C19EC36961ACBA64__CTOR_OFFSET UNITYSDK_OFFSET(0x15875240)

inline static constexpr unsigned int Class_1_C19EC36961ACBA64_TypeDefinitionIndex = 74945;

class Class_1_C19EC36961ACBA64 : public ::System::Object
{
public:
	::RPG::Client::InventoryModule* COLDADJMPBM; // 0x10
	::System::UInt32 AHINLNKPBNC; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::InventoryModule* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::InventoryModule*))((::PBYTE)hIl2Cpp + CLASS_1_C19EC36961ACBA64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_E2ACF3FF064F9810()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C19EC36961ACBA64_METHOD_1_E2ACF3FF064F9810_OFFSET))(this);
	}
};
