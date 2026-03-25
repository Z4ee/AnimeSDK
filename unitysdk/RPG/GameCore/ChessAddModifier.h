#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHESSADDMODIFIER_METHOD_3_15FA34ED2E8EACE2_OFFSET UNITYSDK_OFFSET(0x1708A530)
#define RPG_GAMECORE_CHESSADDMODIFIER_METHOD_3_8F87D8B0ED801314_OFFSET UNITYSDK_OFFSET(0x1708A5B0)
#define RPG_GAMECORE_CHESSADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1708A580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessAddModifier_TypeDefinitionIndex = 21995;

	class ChessAddModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* ModifierName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSADDMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_15FA34ED2E8EACE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessAddModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessAddModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSADDMODIFIER_METHOD_3_15FA34ED2E8EACE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F87D8B0ED801314(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessAddModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessAddModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSADDMODIFIER_METHOD_3_8F87D8B0ED801314_OFFSET))(a1, a2);
		}
	};
}
