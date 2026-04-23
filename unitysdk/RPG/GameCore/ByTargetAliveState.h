#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_39029E29FC2F1230_OFFSET UNITYSDK_OFFSET(0x187601E0)
#define RPG_GAMECORE_BYTARGETALIVESTATE_METHOD_4_9D2BB8B676902328_OFFSET UNITYSDK_OFFSET(0x187602B0)
#define RPG_GAMECORE_BYTARGETALIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18760260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetAliveState_TypeDefinitionIndex = 22412;

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
	};
}
