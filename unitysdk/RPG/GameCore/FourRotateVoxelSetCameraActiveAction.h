#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_METHOD_4_08D16D568FE43F63_OFFSET UNITYSDK_OFFSET(0x1D6F1CF0)
#define RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_METHOD_4_A671DAC6ACFAFF10_OFFSET UNITYSDK_OFFSET(0x1D6F1D30)
#define RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetCameraActiveAction_TypeDefinitionIndex = 16768;

	class FourRotateVoxelSetCameraActiveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 CameraEntityConfigID; // 0x10
		::System::Boolean IsActive; // 0x14
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* OnCompleteActions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_08D16D568FE43F63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_METHOD_4_08D16D568FE43F63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A671DAC6ACFAFF10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_METHOD_4_A671DAC6ACFAFF10_OFFSET))(a1, a2);
		}
	};
}
