#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CycleScoreRewardRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CYCLESCORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB730840)
#define RPG_CLIENT_CYCLESCORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB730870)
#define RPG_CLIENT_CYCLESCORE___C__GETCANTAKEREWARDSCORERANKS_B__2_1_OFFSET UNITYSDK_OFFSET(0xB730880)
#define RPG_CLIENT_CYCLESCORE___C___GETMAXSCORE_B__8_0_OFFSET UNITYSDK_OFFSET(0xB7308A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CycleScore___c_TypeDefinitionIndex = 59468;

	class CycleScore___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::CycleScoreRewardRow*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::CycleScoreRewardRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CycleScore___c_TypeDefinitionIndex)->GetStaticField(0x2F50);
		}
		static ::RPG::Client::CycleScore___c** StaticGet___9()
		{
			return (::RPG::Client::CycleScore___c**)Il2CppClass::FromTypeDefinitionIndex(CycleScore___c_TypeDefinitionIndex)->GetStaticField(0x2F58);
		}
		static ::System::Func_2<::RPG::GameCore::CycleScoreRewardRow*, ::System::UInt32>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::GameCore::CycleScoreRewardRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CycleScore___c_TypeDefinitionIndex)->GetStaticField(0x2F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetCanTakeRewardScoreRanks_b__2_1(::RPG::GameCore::CycleScoreRewardRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::CycleScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE___C__GETCANTAKEREWARDSCORERANKS_B__2_1_OFFSET))(this, a1);
		}

		::System::UInt32 __GetMaxScore_b__8_0(::RPG::GameCore::CycleScoreRewardRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::CycleScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE___C___GETMAXSCORE_B__8_0_OFFSET))(this, a1);
		}
	};
}
