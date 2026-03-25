#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_METHOD_3_65C33BD357B93CF2_OFFSET UNITYSDK_OFFSET(0x1751FC00)
#define RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_METHOD_3_FC389FA7CE215FE4_OFFSET UNITYSDK_OFFSET(0x1751FAB0)
#define RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1751FB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropLoadFastDeliverPuzzle_TypeDefinitionIndex = 20335;

	class PropLoadFastDeliverPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC389FA7CE215FE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropLoadFastDeliverPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropLoadFastDeliverPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_METHOD_3_FC389FA7CE215FE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65C33BD357B93CF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropLoadFastDeliverPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropLoadFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_METHOD_3_65C33BD357B93CF2_OFFSET))(a1, a2);
		}
	};
}
