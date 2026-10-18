#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_METHOD_4_43439A491D4A31F0_OFFSET UNITYSDK_OFFSET(0x1D6812B0)
#define RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_METHOD_4_511FDD61B4F37C75_OFFSET UNITYSDK_OFFSET(0x1D681230)
#define RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6812A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimApplyPlayerInteractAction_TypeDefinitionIndex = 18767;

	class FiveDimApplyPlayerInteractAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_511FDD61B4F37C75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_METHOD_4_511FDD61B4F37C75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_43439A491D4A31F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_METHOD_4_43439A491D4A31F0_OFFSET))(a1, a2);
		}
	};
}
