#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_METHOD_3_1B5912AA7AF44600_OFFSET UNITYSDK_OFFSET(0x1DCB4D20)
#define RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_METHOD_3_F63C78B135070852_OFFSET UNITYSDK_OFFSET(0x1DCB4D80)
#define RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB4D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelDimensionUpAction_TypeDefinitionIndex = 16597;

	class FourRotateVoxelDimensionUpAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Immediate; // 0x10
		::System::Single Duration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B5912AA7AF44600(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelDimensionUpAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelDimensionUpAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_METHOD_3_1B5912AA7AF44600_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F63C78B135070852(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelDimensionUpAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelDimensionUpAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_METHOD_3_F63C78B135070852_OFFSET))(a1, a2);
		}
	};
}
