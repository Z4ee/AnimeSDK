#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_4_7EF8B4D916CCFEC3_OFFSET UNITYSDK_OFFSET(0x1D6C4930)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_4_AB467C8B14434B46_OFFSET UNITYSDK_OFFSET(0x1D6C4850)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C4920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityTriggerEnableAction_TypeDefinitionIndex = 16769;

	class FourRotateVoxelSetEntityTriggerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AB467C8B14434B46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_4_AB467C8B14434B46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EF8B4D916CCFEC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_METHOD_4_7EF8B4D916CCFEC3_OFFSET))(a1, a2);
		}
	};
}
