#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_METHOD_4_7CBC0D1D97AA7BC3_OFFSET UNITYSDK_OFFSET(0x1D6C31C0)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_METHOD_4_A909D4CF9520C846_OFFSET UNITYSDK_OFFSET(0x1D6C3100)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C31B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPlayCameraCurveAction_TypeDefinitionIndex = 16770;

	class FourRotateVoxelPlayCameraCurveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* CurveName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A909D4CF9520C846(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_METHOD_4_A909D4CF9520C846_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7CBC0D1D97AA7BC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_METHOD_4_7CBC0D1D97AA7BC3_OFFSET))(a1, a2);
		}
	};
}
