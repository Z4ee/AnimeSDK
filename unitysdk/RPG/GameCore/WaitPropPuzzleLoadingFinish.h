#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WAITPROPPUZZLELOADINGFINISH_METHOD_3_4AE7B799289E1DE0_OFFSET UNITYSDK_OFFSET(0x19105750)
#define RPG_GAMECORE_WAITPROPPUZZLELOADINGFINISH_METHOD_3_D8CF9AFD4DD342D9_OFFSET UNITYSDK_OFFSET(0x191057D0)
#define RPG_GAMECORE_WAITPROPPUZZLELOADINGFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x191057A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropPuzzleLoadingFinish_TypeDefinitionIndex = 21036;

	class WaitPropPuzzleLoadingFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPPUZZLELOADINGFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4AE7B799289E1DE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropPuzzleLoadingFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropPuzzleLoadingFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPPUZZLELOADINGFINISH_METHOD_3_4AE7B799289E1DE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D8CF9AFD4DD342D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropPuzzleLoadingFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropPuzzleLoadingFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPPUZZLELOADINGFINISH_METHOD_3_D8CF9AFD4DD342D9_OFFSET))(a1, a2);
		}
	};
}
