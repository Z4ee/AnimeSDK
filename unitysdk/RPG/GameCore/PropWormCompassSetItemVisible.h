#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class WormCompassItemXY; }

#define RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_METHOD_3_9041D684094AC502_OFFSET UNITYSDK_OFFSET(0x17572CC0)
#define RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_METHOD_3_B7DE62B233F1AEFF_OFFSET UNITYSDK_OFFSET(0x17572E10)
#define RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17572D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropWormCompassSetItemVisible_TypeDefinitionIndex = 20352;

	class PropWormCompassSetItemVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::WormCompassItemXY*>* Items; // 0x20
		::Il2CppArray<::RPG::GameCore::WormCompassItemXY*>* Blocks; // 0x28
		::System::Boolean Visible; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9041D684094AC502(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropWormCompassSetItemVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropWormCompassSetItemVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_METHOD_3_9041D684094AC502_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7DE62B233F1AEFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropWormCompassSetItemVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropWormCompassSetItemVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_METHOD_3_B7DE62B233F1AEFF_OFFSET))(a1, a2);
		}
	};
}
