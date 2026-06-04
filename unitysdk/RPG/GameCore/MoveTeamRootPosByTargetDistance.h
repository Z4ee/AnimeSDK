#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FormationTargetDistanceConfig; }

#define RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE_METHOD_3_3F35EEB83E42320D_OFFSET UNITYSDK_OFFSET(0x199B4030)
#define RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE_METHOD_3_79CE1D2F7C66B332_OFFSET UNITYSDK_OFFSET(0x199B3FB0)
#define RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x199B4000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveTeamRootPosByTargetDistance_TypeDefinitionIndex = 21401;

	class MoveTeamRootPosByTargetDistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MoveTarget; // 0x18
		::System::Boolean Reset; // 0x19
		::Il2CppArray<::RPG::GameCore::FormationTargetDistanceConfig*>* DistanceConfigList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79CE1D2F7C66B332(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveTeamRootPosByTargetDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveTeamRootPosByTargetDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE_METHOD_3_79CE1D2F7C66B332_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3F35EEB83E42320D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveTeamRootPosByTargetDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveTeamRootPosByTargetDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETEAMROOTPOSBYTARGETDISTANCE_METHOD_3_3F35EEB83E42320D_OFFSET))(a1, a2);
		}
	};
}
