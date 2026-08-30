#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARHPSHAREDGROUP_METHOD_3_B6FA188A071E67B5_OFFSET UNITYSDK_OFFSET(0x1E3481F0)
#define RPG_GAMECORE_CLEARHPSHAREDGROUP_METHOD_3_F2EDB0FBFB695D82_OFFSET UNITYSDK_OFFSET(0x1E3481B0)
#define RPG_GAMECORE_CLEARHPSHAREDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3481E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearHPSharedGroup_TypeDefinitionIndex = 22569;

	class ClearHPSharedGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* MainTarget; // 0x18
		::RPG::GameCore::TeamType TargetTeam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARHPSHAREDGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F2EDB0FBFB695D82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearHPSharedGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearHPSharedGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARHPSHAREDGROUP_METHOD_3_F2EDB0FBFB695D82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6FA188A071E67B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearHPSharedGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearHPSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARHPSHAREDGROUP_METHOD_3_B6FA188A071E67B5_OFFSET))(a1, a2);
		}
	};
}
