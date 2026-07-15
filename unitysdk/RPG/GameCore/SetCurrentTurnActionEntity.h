#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCURRENTTURNACTIONENTITY_METHOD_3_0B6BDA2DC7B96C6D_OFFSET UNITYSDK_OFFSET(0x1C2DB270)
#define RPG_GAMECORE_SETCURRENTTURNACTIONENTITY_METHOD_3_C09D1AEAF3BBC4DC_OFFSET UNITYSDK_OFFSET(0x1C2DB1D0)
#define RPG_GAMECORE_SETCURRENTTURNACTIONENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DB230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCurrentTurnActionEntity_TypeDefinitionIndex = 22817;

	class SetCurrentTurnActionEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCURRENTTURNACTIONENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C09D1AEAF3BBC4DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCurrentTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCurrentTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCURRENTTURNACTIONENTITY_METHOD_3_C09D1AEAF3BBC4DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B6BDA2DC7B96C6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCurrentTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCurrentTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCURRENTTURNACTIONENTITY_METHOD_3_0B6BDA2DC7B96C6D_OFFSET))(a1, a2);
		}
	};
}
