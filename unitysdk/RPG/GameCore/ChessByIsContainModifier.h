#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHESSBYISCONTAINMODIFIER_METHOD_4_0885DFC0BA0AA6A4_OFFSET UNITYSDK_OFFSET(0x1708B410)
#define RPG_GAMECORE_CHESSBYISCONTAINMODIFIER_METHOD_4_B4BECCF81EC8AE94_OFFSET UNITYSDK_OFFSET(0x1708B340)
#define RPG_GAMECORE_CHESSBYISCONTAINMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1708B3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessByIsContainModifier_TypeDefinitionIndex = 21997;

	class ChessByIsContainModifier : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* ModifierName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSBYISCONTAINMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B4BECCF81EC8AE94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessByIsContainModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessByIsContainModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSBYISCONTAINMODIFIER_METHOD_4_B4BECCF81EC8AE94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0885DFC0BA0AA6A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessByIsContainModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessByIsContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSBYISCONTAINMODIFIER_METHOD_4_0885DFC0BA0AA6A4_OFFSET))(a1, a2);
		}
	};
}
