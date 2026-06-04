#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVENAVMESHSTATE_METHOD_3_3C88E7A54493F6BF_OFFSET UNITYSDK_OFFSET(0x19AC9FA0)
#define RPG_GAMECORE_REMOVENAVMESHSTATE_METHOD_3_7C108FE20C2D378E_OFFSET UNITYSDK_OFFSET(0x19AC9F20)
#define RPG_GAMECORE_REMOVENAVMESHSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC9F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveNavMeshState_TypeDefinitionIndex = 21007;

	class RemoveNavMeshState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVENAVMESHSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C108FE20C2D378E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveNavMeshState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveNavMeshState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVENAVMESHSTATE_METHOD_3_7C108FE20C2D378E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3C88E7A54493F6BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveNavMeshState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveNavMeshState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVENAVMESHSTATE_METHOD_3_3C88E7A54493F6BF_OFFSET))(a1, a2);
		}
	};
}
