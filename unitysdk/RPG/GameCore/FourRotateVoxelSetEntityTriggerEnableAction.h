#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_3_B65D94D9FB82D32E_OFFSET UNITYSDK_OFFSET(0x189309D0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_3_FE287E04D60BB962_OFFSET UNITYSDK_OFFSET(0x189308A0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x189309B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityTriggerEnableAction_TypeDefinitionIndex = 15882;

	class FourRotateVoxelSetEntityTriggerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE287E04D60BB962(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_3_FE287E04D60BB962_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B65D94D9FB82D32E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_3_B65D94D9FB82D32E_OFFSET))(a1, a2);
		}
	};
}
