#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SortByModifierValue; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_AIMODIFIERNAMESELECTOR_METHOD_3_C1D5DA2052202F2D_OFFSET UNITYSDK_OFFSET(0x16E90F50)
#define RPG_GAMECORE_AIMODIFIERNAMESELECTOR_METHOD_3_FE708AB4F663429F_OFFSET UNITYSDK_OFFSET(0x16E90E70)
#define RPG_GAMECORE_AIMODIFIERNAMESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16E90EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIModifierNameSelector_TypeDefinitionIndex = 14293;

	class AIModifierNameSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::System::String* ModifierName; // 0x10
		::System::Boolean InverseResultFlag; // 0x18
		::RPG::GameCore::TargetEvaluator* ModifierCaster; // 0x20
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x28
		::RPG::GameCore::SortByModifierValue* SortConfig; // 0x30
		::System::Boolean RandomWhenEquals; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMODIFIERNAMESELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE708AB4F663429F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIModifierNameSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIModifierNameSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMODIFIERNAMESELECTOR_METHOD_3_FE708AB4F663429F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C1D5DA2052202F2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIModifierNameSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIModifierNameSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMODIFIERNAMESELECTOR_METHOD_3_C1D5DA2052202F2D_OFFSET))(a1, a2);
		}
	};
}
