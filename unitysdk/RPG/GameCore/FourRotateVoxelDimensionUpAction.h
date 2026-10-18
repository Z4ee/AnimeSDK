#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_METHOD_4_ABA858951D649CBD_OFFSET UNITYSDK_OFFSET(0x1D6ED550)
#define RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_METHOD_4_E6C0C070CBC695CF_OFFSET UNITYSDK_OFFSET(0x1D6ED5B0)
#define RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ED5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelDimensionUpAction_TypeDefinitionIndex = 16772;

	class FourRotateVoxelDimensionUpAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Immediate; // 0x10
		::System::Single Duration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ABA858951D649CBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelDimensionUpAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelDimensionUpAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_METHOD_4_ABA858951D649CBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E6C0C070CBC695CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelDimensionUpAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelDimensionUpAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_METHOD_4_E6C0C070CBC695CF_OFFSET))(a1, a2);
		}
	};
}
