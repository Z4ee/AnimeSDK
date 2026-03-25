#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIDecisionUnitConfig; }

#define RPG_GAMECORE_AIDECISIONGROUP_METHOD_2_FC628F7843CF3E62_OFFSET UNITYSDK_OFFSET(0x16E90230)
#define RPG_GAMECORE_AIDECISIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16E90330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIDecisionGroup_TypeDefinitionIndex = 14186;

	class AIDecisionGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* DecisionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FC628F7843CF3E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIDecisionGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIDecisionGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONGROUP_METHOD_2_FC628F7843CF3E62_OFFSET))(a1, a2);
		}
	};
}
