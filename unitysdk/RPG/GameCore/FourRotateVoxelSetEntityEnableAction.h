#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_3_32FC3BA7A1F9B1A2_OFFSET UNITYSDK_OFFSET(0x1976B8C0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_3_B96D81A5A663C26E_OFFSET UNITYSDK_OFFSET(0x1976B9F0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1976B9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityEnableAction_TypeDefinitionIndex = 15934;

	class FourRotateVoxelSetEntityEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32FC3BA7A1F9B1A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_3_32FC3BA7A1F9B1A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B96D81A5A663C26E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_3_B96D81A5A663C26E_OFFSET))(a1, a2);
		}
	};
}
