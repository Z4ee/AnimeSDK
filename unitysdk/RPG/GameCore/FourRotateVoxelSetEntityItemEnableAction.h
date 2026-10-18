#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelSceneItemType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_METHOD_4_0FFAE660F08B8D11_OFFSET UNITYSDK_OFFSET(0x1D6C4730)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_METHOD_4_339C1CAC37F6499E_OFFSET UNITYSDK_OFFSET(0x1D6C46E0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C4720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityItemEnableAction_TypeDefinitionIndex = 16774;

	class FourRotateVoxelSetEntityItemEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FourRotateVoxelSceneItemType ItemType; // 0x10
		::System::Boolean IsEnable; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_339C1CAC37F6499E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_METHOD_4_339C1CAC37F6499E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0FFAE660F08B8D11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_METHOD_4_0FFAE660F08B8D11_OFFSET))(a1, a2);
		}
	};
}
