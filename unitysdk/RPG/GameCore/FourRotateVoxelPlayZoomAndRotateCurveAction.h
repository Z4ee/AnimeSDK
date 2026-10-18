#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION_METHOD_4_B68668E2F41B8450_OFFSET UNITYSDK_OFFSET(0x1D6F0CE0)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION_METHOD_4_E379DB768EAE6350_OFFSET UNITYSDK_OFFSET(0x1D6F0D40)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F0D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPlayZoomAndRotateCurveAction_TypeDefinitionIndex = 16771;

	class FourRotateVoxelPlayZoomAndRotateCurveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Int32 TargetDirectionIndex; // 0x10
		::System::Int32 MaxRotateLoops; // 0x14
		::System::Int32 FocusEntityID; // 0x18
		::System::String* FocusAnchorName; // 0x20
		::System::String* CurveName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B68668E2F41B8450(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPlayZoomAndRotateCurveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPlayZoomAndRotateCurveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION_METHOD_4_B68668E2F41B8450_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E379DB768EAE6350(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPlayZoomAndRotateCurveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPlayZoomAndRotateCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION_METHOD_4_E379DB768EAE6350_OFFSET))(a1, a2);
		}
	};
}
