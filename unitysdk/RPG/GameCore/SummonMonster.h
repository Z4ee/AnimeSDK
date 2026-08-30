#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/SummonMonsterUsage.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class VCameraConfig; }

#define RPG_GAMECORE_SUMMONMONSTER_METHOD_3_1D932944641139F6_OFFSET UNITYSDK_OFFSET(0x1D583630)
#define RPG_GAMECORE_SUMMONMONSTER_METHOD_3_7051FBA171FD2690_OFFSET UNITYSDK_OFFSET(0x1D583540)
#define RPG_GAMECORE_SUMMONMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5835D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonMonster_TypeDefinitionIndex = 22401;

	class SummonMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SummonMonsterData*>* SummonMonsterDataList; // 0x18
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* InheritPropertyList; // 0x28
		::System::Boolean InheritAllProperties; // 0x30
		::RPG::GameCore::DynamicFloat* DelayRatio; // 0x38
		::System::Boolean InheritSummonerDelay; // 0x40
		::System::Boolean InheritSummonerWeakness; // 0x41
		::System::Boolean InheritSummonerCurrentStance; // 0x42
		::System::Boolean RefreshTeamLocation; // 0x43
		::System::Boolean AlignYawWithCaster; // 0x44
		::RPG::GameCore::DynamicFloat* InitHP; // 0x48
		::RPG::GameCore::SummonMonsterUsage UsageType; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMonsterCreate; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7051FBA171FD2690(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTER_METHOD_3_7051FBA171FD2690_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D932944641139F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTER_METHOD_3_1D932944641139F6_OFFSET))(a1, a2);
		}
	};
}
