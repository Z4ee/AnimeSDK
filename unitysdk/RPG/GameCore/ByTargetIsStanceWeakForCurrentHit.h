#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_5D7F2FA704590442_OFFSET UNITYSDK_OFFSET(0x195DABF0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_B725FE5956ABA819_OFFSET UNITYSDK_OFFSET(0x195DA9B0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_CDE7E533D9BF2D75_OFFSET UNITYSDK_OFFSET(0x195DAB70)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_F2E26C7132083FE5_OFFSET UNITYSDK_OFFSET(0x195DA8E0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x195DA960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsStanceWeakForCurrentHit_TypeDefinitionIndex = 22233;

	class ByTargetIsStanceWeakForCurrentHit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackerType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F2E26C7132083FE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_F2E26C7132083FE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B725FE5956ABA819(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_B725FE5956ABA819_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CDE7E533D9BF2D75(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_CDE7E533D9BF2D75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D7F2FA704590442(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_5D7F2FA704590442_OFFSET))(a1, a2);
		}
	};
}
