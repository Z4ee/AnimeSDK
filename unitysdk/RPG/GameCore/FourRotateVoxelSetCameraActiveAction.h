#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_METHOD_3_199DF2D581FFD1E5_OFFSET UNITYSDK_OFFSET(0x1DCB93F0)
#define RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_METHOD_3_8CC8B463EC133B46_OFFSET UNITYSDK_OFFSET(0x1DCB93B0)
#define RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB93E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetCameraActiveAction_TypeDefinitionIndex = 16593;

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

		static ::System::Void Method_3_8CC8B463EC133B46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_METHOD_3_8CC8B463EC133B46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_199DF2D581FFD1E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_METHOD_3_199DF2D581FFD1E5_OFFSET))(a1, a2);
		}
	};
}
