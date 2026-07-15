#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_2E194B0780535D3F_OFFSET UNITYSDK_OFFSET(0x1B2BEE90)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_6746621DAA4B2324_OFFSET UNITYSDK_OFFSET(0x1B2BEC60)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_86FAD0554B1604B9_OFFSET UNITYSDK_OFFSET(0x1B2BEE60)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_B725FE5956ABA819_OFFSET UNITYSDK_OFFSET(0x1B2BECA0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2BEC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsStanceWeakForCurrentHit_TypeDefinitionIndex = 22673;

	class ByTargetIsStanceWeakForCurrentHit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackerType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6746621DAA4B2324(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_6746621DAA4B2324_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B725FE5956ABA819(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_B725FE5956ABA819_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86FAD0554B1604B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_86FAD0554B1604B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E194B0780535D3F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_2E194B0780535D3F_OFFSET))(a1, a2);
		}
	};
}
