#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA_METHOD_2_6C0245E14DA926CB_OFFSET UNITYSDK_OFFSET(0x186F3CE0)
#define RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x186F3E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEntitySkillLevelWhiteBoxData_TypeDefinitionIndex = 21654;

	class BattleEntitySkillLevelWhiteBoxData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6C0245E14DA926CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEntitySkillLevelWhiteBoxData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEntitySkillLevelWhiteBoxData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA_METHOD_2_6C0245E14DA926CB_OFFSET))(a1, a2);
		}
	};
}
