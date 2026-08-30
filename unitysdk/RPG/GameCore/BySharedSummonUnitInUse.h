#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_5C5F7052E52BA38F_OFFSET UNITYSDK_OFFSET(0x1CDC10F0)
#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_89F83B4924ECEC09_OFFSET UNITYSDK_OFFSET(0x1CDC10C0)
#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_E55F76F93549C733_OFFSET UNITYSDK_OFFSET(0x1CDC0F40)
#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_F6E9A0D66960BDBA_OFFSET UNITYSDK_OFFSET(0x1CDC0F00)
#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC0F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySharedSummonUnitInUse_TypeDefinitionIndex = 20921;

	class BySharedSummonUnitInUse : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F6E9A0D66960BDBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySharedSummonUnitInUse*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySharedSummonUnitInUse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_F6E9A0D66960BDBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E55F76F93549C733(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_E55F76F93549C733_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_89F83B4924ECEC09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySharedSummonUnitInUse*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySharedSummonUnitInUse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_89F83B4924ECEC09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5C5F7052E52BA38F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_METHOD_4_5C5F7052E52BA38F_OFFSET))(a1, a2);
		}
	};
}
