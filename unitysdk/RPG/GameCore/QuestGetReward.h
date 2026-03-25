#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_QUESTGETREWARD_METHOD_3_737C45B40060A617_OFFSET UNITYSDK_OFFSET(0x175772D0)
#define RPG_GAMECORE_QUESTGETREWARD_METHOD_3_90241F6B7B0E2266_OFFSET UNITYSDK_OFFSET(0x17577250)
#define RPG_GAMECORE_QUESTGETREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x175772A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestGetReward_TypeDefinitionIndex = 20053;

	class QuestGetReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* QuestIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTGETREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90241F6B7B0E2266(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QuestGetReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QuestGetReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTGETREWARD_METHOD_3_90241F6B7B0E2266_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_737C45B40060A617(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QuestGetReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTGETREWARD_METHOD_3_737C45B40060A617_OFFSET))(a1, a2);
		}
	};
}
