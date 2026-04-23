#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_METHOD_3_19BC27478A940D3B_OFFSET UNITYSDK_OFFSET(0x186F0260)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_METHOD_3_B6A5BBBE236312F3_OFFSET UNITYSDK_OFFSET(0x186F0380)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x186F0300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_Begin_TypeDefinitionIndex = 21680;

	class BattleChangeAvatar_Begin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LeaveStageTarget; // 0x18
		::RPG::GameCore::DynamicFloat* EnterStageIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_19BC27478A940D3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_Begin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_Begin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_METHOD_3_19BC27478A940D3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6A5BBBE236312F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_Begin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_Begin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_METHOD_3_B6A5BBBE236312F3_OFFSET))(a1, a2);
		}
	};
}
