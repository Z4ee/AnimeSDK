#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SetComponentAssetAnimStateConfig; }
namespace RPG::GameCore { class SetComponentAssetLoadState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE_METHOD_3_2CCAEB995ABB0AFB_OFFSET UNITYSDK_OFFSET(0x176B0810)
#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE_METHOD_3_8F734A944FEB00A7_OFFSET UNITYSDK_OFFSET(0x176B08E0)
#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176B0890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetComponentAssetLoadStateWithAnimState_TypeDefinitionIndex = 21007;

	class SetComponentAssetLoadStateWithAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SetComponentAssetLoadState* SetConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::SetComponentAssetAnimStateConfig*>* StateConfigs; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessTaskList; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2CCAEB995ABB0AFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE_METHOD_3_2CCAEB995ABB0AFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F734A944FEB00A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATEWITHANIMSTATE_METHOD_3_8F734A944FEB00A7_OFFSET))(a1, a2);
		}
	};
}
