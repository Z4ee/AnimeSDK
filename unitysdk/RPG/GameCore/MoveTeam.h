#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MOVETEAM_METHOD_3_1CE182A74579C0C0_OFFSET UNITYSDK_OFFSET(0x1D88F7D0)
#define RPG_GAMECORE_MOVETEAM_METHOD_3_723D197141B8C5CF_OFFSET UNITYSDK_OFFSET(0x1D88F820)
#define RPG_GAMECORE_MOVETEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D88F810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveTeam_TypeDefinitionIndex = 22637;

	class MoveTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::MVector3 Offset; // 0x28
		::System::Boolean IsLocalOffset; // 0x34
		::System::Boolean RevertLastRecordOffset; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1CE182A74579C0C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveTeam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAM_METHOD_3_1CE182A74579C0C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_723D197141B8C5CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveTeam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAM_METHOD_3_723D197141B8C5CF_OFFSET))(a1, a2);
		}
	};
}
