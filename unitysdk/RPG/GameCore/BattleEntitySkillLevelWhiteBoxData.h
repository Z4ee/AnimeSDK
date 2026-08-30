#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA_METHOD_2_6625D0844F1997B9_OFFSET UNITYSDK_OFFSET(0x1CE6F080)
#define RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6F1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEntitySkillLevelWhiteBoxData_TypeDefinitionIndex = 22495;

	class BattleEntitySkillLevelWhiteBoxData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6625D0844F1997B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEntitySkillLevelWhiteBoxData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEntitySkillLevelWhiteBoxData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYSKILLLEVELWHITEBOXDATA_METHOD_2_6625D0844F1997B9_OFFSET))(a1, a2);
		}
	};
}
