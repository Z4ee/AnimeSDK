#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_QUESTGETREWARD_METHOD_3_737C45B40060A617_OFFSET UNITYSDK_OFFSET(0x1D37AA10)
#define RPG_GAMECORE_QUESTGETREWARD_METHOD_3_E7AB5389F232CD5C_OFFSET UNITYSDK_OFFSET(0x1D37A9D0)
#define RPG_GAMECORE_QUESTGETREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D37AA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestGetReward_TypeDefinitionIndex = 21636;

	class QuestGetReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* QuestIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTGETREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7AB5389F232CD5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QuestGetReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QuestGetReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTGETREWARD_METHOD_3_E7AB5389F232CD5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_737C45B40060A617(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QuestGetReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTGETREWARD_METHOD_3_737C45B40060A617_OFFSET))(a1, a2);
		}
	};
}
