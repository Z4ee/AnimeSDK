#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST_METHOD_3_87E3BBCEBEC8209E_OFFSET UNITYSDK_OFFSET(0x1D52CBE0)
#define RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST_METHOD_3_C851F19A88B2EBEF_OFFSET UNITYSDK_OFFSET(0x1D52CB90)
#define RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52CBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMazePuzzleChallengeFinishToast_TypeDefinitionIndex = 21764;

	class ShowMazePuzzleChallengeFinishToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSuccess; // 0x18
		::System::Boolean IsPuzzle; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C851F19A88B2EBEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST_METHOD_3_C851F19A88B2EBEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87E3BBCEBEC8209E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST_METHOD_3_87E3BBCEBEC8209E_OFFSET))(a1, a2);
		}
	};
}
