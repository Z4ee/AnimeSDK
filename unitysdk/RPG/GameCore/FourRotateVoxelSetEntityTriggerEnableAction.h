#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_3_A7D4717D7F8518AB_OFFSET UNITYSDK_OFFSET(0x1B97DF50)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_3_B65D94D9FB82D32E_OFFSET UNITYSDK_OFFSET(0x1B97E030)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97E020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityTriggerEnableAction_TypeDefinitionIndex = 16112;

	class FourRotateVoxelSetEntityTriggerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A7D4717D7F8518AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_3_A7D4717D7F8518AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B65D94D9FB82D32E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_3_B65D94D9FB82D32E_OFFSET))(a1, a2);
		}
	};
}
