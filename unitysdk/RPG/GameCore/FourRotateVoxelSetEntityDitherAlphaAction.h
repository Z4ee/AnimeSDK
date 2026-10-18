#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_METHOD_4_702F686F3D1483C9_OFFSET UNITYSDK_OFFSET(0x1D6F1EA0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_METHOD_4_DB7032AF916ED68C_OFFSET UNITYSDK_OFFSET(0x1D6F1F60)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityDitherAlphaAction_TypeDefinitionIndex = 16775;

	class FourRotateVoxelSetEntityDitherAlphaAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single Alpha; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_702F686F3D1483C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_METHOD_4_702F686F3D1483C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB7032AF916ED68C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_METHOD_4_DB7032AF916ED68C_OFFSET))(a1, a2);
		}
	};
}
