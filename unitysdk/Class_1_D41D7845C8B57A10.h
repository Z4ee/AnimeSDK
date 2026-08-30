#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define CLASS_1_D41D7845C8B57A10_METHOD_1_DA80763B2CB15B3A_OFFSET UNITYSDK_OFFSET(0xB4A05B0)
#define CLASS_1_D41D7845C8B57A10__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A06F0)

inline static constexpr unsigned int Class_1_D41D7845C8B57A10_TypeDefinitionIndex = 55792;

class Class_1_D41D7845C8B57A10 : public ::System::Object
{
public:
	::System::String* IFNAGLOMHBK; // 0x10
	::System::Int32 BJOBFAIMJAE; // 0x18
	::System::UInt32 KPLDHNOGLDC; // 0x1C
	::System::UInt32 OMIPHFPGKAC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D7845C8B57A10__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DA80763B2CB15B3A(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_D41D7845C8B57A10_METHOD_1_DA80763B2CB15B3A_OFFSET))(this, a1);
	}
};
