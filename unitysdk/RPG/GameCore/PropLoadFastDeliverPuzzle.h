#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_METHOD_3_65C33BD357B93CF2_OFFSET UNITYSDK_OFFSET(0x1D369450)
#define RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_METHOD_3_DAAD30216562B992_OFFSET UNITYSDK_OFFSET(0x1D3693D0)
#define RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D369420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropLoadFastDeliverPuzzle_TypeDefinitionIndex = 21902;

	class PropLoadFastDeliverPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAAD30216562B992(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropLoadFastDeliverPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropLoadFastDeliverPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_METHOD_3_DAAD30216562B992_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65C33BD357B93CF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropLoadFastDeliverPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropLoadFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_METHOD_3_65C33BD357B93CF2_OFFSET))(a1, a2);
		}
	};
}
