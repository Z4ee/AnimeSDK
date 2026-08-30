#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_2B9CEF6A344A892C_TypeDefinitionIndex = 57067;

struct alignas(8) Struct_2_2B9CEF6A344A892C
{
	::System::Boolean DFKJCMCDMEI; // 0x10
	::System::String* IFNAGLOMHBK; // 0x18
	::System::String* PKAOFONGEOD; // 0x20
	::RPG::GameCore::SpecialBPDisplayStyle CONJNAGLPDO; // 0x28
	::System::Boolean IMMKHFDJNDM; // 0x2C
	::System::Int32 AALMDFKKIMK; // 0x30
	::RPG::GameCore::TurnBasedModifierInstance* EEMOLALELEI; // 0x38
};
