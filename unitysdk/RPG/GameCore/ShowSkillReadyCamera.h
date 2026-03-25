#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWSKILLREADYCAMERA_METHOD_3_689FF340E1755C3C_OFFSET UNITYSDK_OFFSET(0x17703BF0)
#define RPG_GAMECORE_SHOWSKILLREADYCAMERA_METHOD_3_F72AA0DA4503B9CA_OFFSET UNITYSDK_OFFSET(0x17703B70)
#define RPG_GAMECORE_SHOWSKILLREADYCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x17703BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSkillReadyCamera_TypeDefinitionIndex = 21052;

	class ShowSkillReadyCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ControlSkillType SkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLREADYCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F72AA0DA4503B9CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSkillReadyCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSkillReadyCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLREADYCAMERA_METHOD_3_F72AA0DA4503B9CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_689FF340E1755C3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSkillReadyCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSkillReadyCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLREADYCAMERA_METHOD_3_689FF340E1755C3C_OFFSET))(a1, a2);
		}
	};
}
