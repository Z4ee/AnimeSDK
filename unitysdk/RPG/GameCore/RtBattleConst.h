#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtBattleUnitRow; }
namespace RPG::GameCore { class RtBehaviorFlagStateAction; }
namespace RPG::GameCore { class RtDamageConstConfig; }
namespace RPG::GameCore { class RtDamageTextConfigGroup; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTBATTLECONST_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18DC4EE0)
#define RPG_GAMECORE_RTBATTLECONST_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18DC4F60)
#define RPG_GAMECORE_RTBATTLECONST_METHOD_2_FBABC0B2AD8E53BF_OFFSET UNITYSDK_OFFSET(0x18DC3F60)
#define RPG_GAMECORE_RTBATTLECONST__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC4810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleConst_TypeDefinitionIndex = 17142;

	class RtBattleConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::RPG::GameCore::RtBattleConst** StaticGet_Config()
		{
			return (::RPG::GameCore::RtBattleConst**)Il2CppClass::FromTypeDefinitionIndex(RtBattleConst_TypeDefinitionIndex)->GetStaticField(0x82A0);
		}
		::System::String* MainLevelGraphPath; // 0x10
		::RPG::GameCore::FixPoint BaseTimeScale; // 0x18
		::RPG::GameCore::FixPoint TeamUltraMaxSP; // 0x20
		::System::String* GridPrefabPath; // 0x28
		::Il2CppArray<::RPG::GameCore::RtBattleUnitRow*>* UnitList; // 0x30
		::System::UInt32 AvatarIDMin; // 0x38
		::System::UInt32 AvatarIDMax; // 0x3C
		::System::UInt32 MonsterIDMin; // 0x40
		::System::UInt32 MonsterIDMax; // 0x44
		::System::Int32 LightTeamMaxSkillCountInExclusivePerform; // 0x48
		::System::Int32 DarkTeamMaxSkillCountInExclusivePerform; // 0x4C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeEnterBattle; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterEnterBattle; // 0x58
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlagStateAction*>* FlagActions; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* UltraBeginAction; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* UltraEndAction; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CameraFocusChangeAction; // 0x78
		::System::Single CameraLoopSwitchInterval; // 0x80
		::System::Single BreakMoveEndNormalizedTime; // 0x84
		::System::Single BreakMoveMinSpeed; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtDamageTextConfigGroup*>* DamageTextConfigGroups; // 0x90
		::RPG::GameCore::RtDamageConstConfig* DamageConst; // 0x98
		::Il2CppArray<::RPG::GameCore::RtAbilityProperty>* SummonCharacterInheritPropertyList; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECONST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FBABC0B2AD8E53BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleConst*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleConst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECONST_METHOD_2_FBABC0B2AD8E53BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECONST_METHOD_2_5790A55946AA509D_OFFSET))();
		}

		static ::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECONST_METHOD_2_832295EC279E5994_OFFSET))();
		}
	};
}
