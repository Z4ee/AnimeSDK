#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_68D35877E89AFD95_OFFSET UNITYSDK_OFFSET(0x170234C0)
#define RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_84B40662F38CC2D2_OFFSET UNITYSDK_OFFSET(0x170235E0)
#define RPG_GAMECORE_BYHASBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x17023560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasBillboard_TypeDefinitionIndex = 20618;

	class ByHasBillboard : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_68D35877E89AFD95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasBillboard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasBillboard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_68D35877E89AFD95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_84B40662F38CC2D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_84B40662F38CC2D2_OFFSET))(a1, a2);
		}
	};
}
