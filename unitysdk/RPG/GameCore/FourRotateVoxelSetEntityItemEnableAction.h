#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelSceneItemType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_METHOD_3_6D549633FFA9D409_OFFSET UNITYSDK_OFFSET(0x1DCB9820)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_METHOD_3_C66C1F68F90BD68F_OFFSET UNITYSDK_OFFSET(0x1DCB9880)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB9870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityItemEnableAction_TypeDefinitionIndex = 16599;

	class FourRotateVoxelSetEntityItemEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FourRotateVoxelSceneItemType ItemType; // 0x10
		::System::Boolean IsEnable; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6D549633FFA9D409(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_METHOD_3_6D549633FFA9D409_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C66C1F68F90BD68F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_METHOD_3_C66C1F68F90BD68F_OFFSET))(a1, a2);
		}
	};
}
