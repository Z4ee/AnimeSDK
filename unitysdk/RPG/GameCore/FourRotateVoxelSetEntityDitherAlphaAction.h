#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_METHOD_3_65094762B4CA6B55_OFFSET UNITYSDK_OFFSET(0x1DCB9620)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_METHOD_3_AF60BA507FFB7518_OFFSET UNITYSDK_OFFSET(0x1DCB9560)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB9610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityDitherAlphaAction_TypeDefinitionIndex = 16591;

	class FourRotateVoxelSetEntityDitherAlphaAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single Alpha; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AF60BA507FFB7518(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_METHOD_3_AF60BA507FFB7518_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65094762B4CA6B55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_METHOD_3_65094762B4CA6B55_OFFSET))(a1, a2);
		}
	};
}
