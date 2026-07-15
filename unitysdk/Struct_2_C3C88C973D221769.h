#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierCallbackType.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/Struct_2_EE0B53FB8C01FD79.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define STRUCT_2_C3C88C973D221769_METHOD_2_66E6FD9523937DE4_OFFSET UNITYSDK_OFFSET(0x39CC2F0)
#define STRUCT_2_C3C88C973D221769_METHOD_2_E2FCA77DBD26F1DF_OFFSET UNITYSDK_OFFSET(0x39CC300)

inline static constexpr unsigned int Struct_2_C3C88C973D221769_TypeDefinitionIndex = 52197;

struct alignas(8) Struct_2_C3C88C973D221769
{
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_0; // 0x10
	::Struct_2_EE0B53FB8C01FD79 Field_2_1; // 0x18
	::RPG::GameCore::TurnBasedModifierCallbackType Field_2_2; // 0x1C

	/*
	::System::Boolean Method_2_66E6FD9523937DE4(::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* a1, ::Il2CppArray<::RPG::GameCore::AbilityProperty>* a2, ::Il2CppArray<::RPG::GameCore::StringHash>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>*, ::Il2CppArray<::RPG::GameCore::AbilityProperty>*, ::Il2CppArray<::RPG::GameCore::StringHash>*))((::PBYTE)hIl2Cpp + STRUCT_2_C3C88C973D221769_METHOD_2_66E6FD9523937DE4_OFFSET))(this, a1, a2, a3);
	}
	*/

	::System::Boolean Method_2_E2FCA77DBD26F1DF(::Struct_2_C3C88C973D221769 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C3C88C973D221769))((::PBYTE)hIl2Cpp + STRUCT_2_C3C88C973D221769_METHOD_2_E2FCA77DBD26F1DF_OFFSET))(this, a1);
	}
};
