#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_22F61666A5A14661_OFFSET UNITYSDK_OFFSET(0x194FE0F0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_767D89BDE5643930_OFFSET UNITYSDK_OFFSET(0x194FE070)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_AB07AC1EC1345C19_OFFSET UNITYSDK_OFFSET(0x194FDD70)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_C8D651B5C02C736F_OFFSET UNITYSDK_OFFSET(0x194FDE40)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x194FDDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackModifierValue_TypeDefinitionIndex = 21793;

	class ByCheckModifierCallBackModifierValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ModifierValueType ValueType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AB07AC1EC1345C19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_AB07AC1EC1345C19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C8D651B5C02C736F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_C8D651B5C02C736F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_767D89BDE5643930(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_767D89BDE5643930_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22F61666A5A14661(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_22F61666A5A14661_OFFSET))(a1, a2);
		}
	};
}
