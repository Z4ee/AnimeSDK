#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_31C98C34FD00136E_OFFSET UNITYSDK_OFFSET(0x1CDC3B00)
#define RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_9D2BB8B676902328_OFFSET UNITYSDK_OFFSET(0x1CDC3930)
#define RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_AD25EC9A8B7FA6F5_OFFSET UNITYSDK_OFFSET(0x1CDC38F0)
#define RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_B3C652BDE3C28748_OFFSET UNITYSDK_OFFSET(0x1CDC3B30)
#define RPG_GAMECORE_BYTARGETALIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC3920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetAliveState_TypeDefinitionIndex = 23180;

	class ByTargetAliveState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AD25EC9A8B7FA6F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetAliveState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetAliveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_AD25EC9A8B7FA6F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D2BB8B676902328(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetAliveState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_9D2BB8B676902328_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_31C98C34FD00136E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_31C98C34FD00136E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3C652BDE3C28748(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_B3C652BDE3C28748_OFFSET))(a1, a2);
		}
	};
}
