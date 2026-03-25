#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraPhaseCondition; }

#define RPG_GAMECORE_CHIMERAPHASECONDITIONCONFIG_METHOD_2_D83170B07782E3C6_OFFSET UNITYSDK_OFFSET(0x170AA050)
#define RPG_GAMECORE_CHIMERAPHASECONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170AA150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraPhaseConditionConfig_TypeDefinitionIndex = 14580;

	class ChimeraPhaseConditionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraPhaseCondition*>* Conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASECONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D83170B07782E3C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraPhaseConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraPhaseConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASECONDITIONCONFIG_METHOD_2_D83170B07782E3C6_OFFSET))(a1, a2);
		}
	};
}
