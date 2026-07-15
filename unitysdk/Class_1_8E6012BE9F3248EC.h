#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define CLASS_1_8E6012BE9F3248EC_METHOD_1_911AB3B3832740C9_OFFSET UNITYSDK_OFFSET(0x181A7FD0)
#define CLASS_1_8E6012BE9F3248EC__CTOR_OFFSET UNITYSDK_OFFSET(0x181A80C0)

inline static constexpr unsigned int Class_1_8E6012BE9F3248EC_TypeDefinitionIndex = 53085;

class Class_1_8E6012BE9F3248EC : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E6012BE9F3248EC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_911AB3B3832740C9(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_8E6012BE9F3248EC_METHOD_1_911AB3B3832740C9_OFFSET))(this, a1);
	}
};
