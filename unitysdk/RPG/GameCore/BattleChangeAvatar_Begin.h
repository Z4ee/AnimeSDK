#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_METHOD_3_B6A5BBBE236312F3_OFFSET UNITYSDK_OFFSET(0x1A3E3F70)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_METHOD_3_BBE9E0D6306778E0_OFFSET UNITYSDK_OFFSET(0x1A3E3E70)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E3F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_Begin_TypeDefinitionIndex = 21956;

	class BattleChangeAvatar_Begin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LeaveStageTarget; // 0x18
		::RPG::GameCore::DynamicFloat* EnterStageIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BBE9E0D6306778E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_Begin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_Begin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_METHOD_3_BBE9E0D6306778E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6A5BBBE236312F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_Begin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_Begin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_METHOD_3_B6A5BBBE236312F3_OFFSET))(a1, a2);
		}
	};
}
