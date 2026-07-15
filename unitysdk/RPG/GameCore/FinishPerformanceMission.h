#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingStratageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FINISHPERFORMANCEMISSION_METHOD_3_52B7913CCC5DCF7F_OFFSET UNITYSDK_OFFSET(0x1BA820F0)
#define RPG_GAMECORE_FINISHPERFORMANCEMISSION_METHOD_3_EFE7E5648A0B15B5_OFFSET UNITYSDK_OFFSET(0x1BA82130)
#define RPG_GAMECORE_FINISHPERFORMANCEMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA82120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishPerformanceMission_TypeDefinitionIndex = 20303;

	class FinishPerformanceMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Key; // 0x18
		::System::UInt32 MainMissionID; // 0x20
		::System::Boolean KeepScreenTransferUntilGroupRefresh; // 0x24
		::System::Boolean UseSpecifiedLoading; // 0x25
		::RPG::GameCore::LoadingStratageType StratageType; // 0x28
		::RPG::GameCore::TransitionLoadingType LoadingType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCEMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_52B7913CCC5DCF7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishPerformanceMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishPerformanceMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCEMISSION_METHOD_3_52B7913CCC5DCF7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EFE7E5648A0B15B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishPerformanceMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishPerformanceMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCEMISSION_METHOD_3_EFE7E5648A0B15B5_OFFSET))(a1, a2);
		}
	};
}
