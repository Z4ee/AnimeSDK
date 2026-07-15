#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM_METHOD_3_901A0065ECB36F88_OFFSET UNITYSDK_OFFSET(0x1C2545D0)
#define RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM_METHOD_3_D86ED7AFF6DEB95B_OFFSET UNITYSDK_OFFSET(0x1C254610)
#define RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C254600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearPropagateBeingAttackInTeam_TypeDefinitionIndex = 22380;

	class ClearPropagateBeingAttackInTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_901A0065ECB36F88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearPropagateBeingAttackInTeam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearPropagateBeingAttackInTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM_METHOD_3_901A0065ECB36F88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D86ED7AFF6DEB95B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearPropagateBeingAttackInTeam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearPropagateBeingAttackInTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARPROPAGATEBEINGATTACKINTEAM_METHOD_3_D86ED7AFF6DEB95B_OFFSET))(a1, a2);
		}
	};
}
