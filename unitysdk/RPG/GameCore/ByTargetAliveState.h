#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_39029E29FC2F1230_OFFSET UNITYSDK_OFFSET(0x195D8230)
#define RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_9D2BB8B676902328_OFFSET UNITYSDK_OFFSET(0x195D8300)
#define RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_B722EFC961E42506_OFFSET UNITYSDK_OFFSET(0x195D84D0)
#define RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_BFC36DD819A512B5_OFFSET UNITYSDK_OFFSET(0x195D8550)
#define RPG_GAMECORE_BYTARGETALIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x195D82B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetAliveState_TypeDefinitionIndex = 22166;

	class ByTargetAliveState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_39029E29FC2F1230(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetAliveState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetAliveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_39029E29FC2F1230_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D2BB8B676902328(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetAliveState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_9D2BB8B676902328_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B722EFC961E42506(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_B722EFC961E42506_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFC36DD819A512B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_BFC36DD819A512B5_OFFSET))(a1, a2);
		}
	};
}
