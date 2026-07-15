#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_METHOD_3_A597C9C2006295AB_OFFSET UNITYSDK_OFFSET(0x1B97CF50)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_METHOD_3_B420ED1E7C60502E_OFFSET UNITYSDK_OFFSET(0x1B97D010)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97D000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPlayCameraCurveAction_TypeDefinitionIndex = 16113;

	class FourRotateVoxelPlayCameraCurveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* CurveName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A597C9C2006295AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_METHOD_3_A597C9C2006295AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B420ED1E7C60502E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_METHOD_3_B420ED1E7C60502E_OFFSET))(a1, a2);
		}
	};
}
