#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_189DBDA144C2D559_OFFSET UNITYSDK_OFFSET(0x1CEA9D40)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_215179EAC4F51E76_OFFSET UNITYSDK_OFFSET(0x1CEA9D70)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_67F978C6FE2271CA_OFFSET UNITYSDK_OFFSET(0x1CEA9AD0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_C8D651B5C02C736F_OFFSET UNITYSDK_OFFSET(0x1CEA9B10)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA9B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackModifierValue_TypeDefinitionIndex = 22788;

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

		static ::System::Void Method_4_67F978C6FE2271CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_67F978C6FE2271CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C8D651B5C02C736F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_C8D651B5C02C736F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_189DBDA144C2D559(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_189DBDA144C2D559_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_215179EAC4F51E76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_METHOD_4_215179EAC4F51E76_OFFSET))(a1, a2);
		}
	};
}
