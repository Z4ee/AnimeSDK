#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_1367CFE7E28DFA4A_OFFSET UNITYSDK_OFFSET(0x19C14A10)
#define RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_4EF75EE25923E29B_OFFSET UNITYSDK_OFFSET(0x19C14780)
#define RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_CCF6D5A6446E2EF2_OFFSET UNITYSDK_OFFSET(0x19C14990)
#define RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_EEA1B1E98F2EBAF1_OFFSET UNITYSDK_OFFSET(0x19C14850)
#define RPG_GAMECORE_ST_BYHASPATROLPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x19C14800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasPatrolPath_TypeDefinitionIndex = 18946;

	class ST_ByHasPatrolPath : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4EF75EE25923E29B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasPatrolPath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasPatrolPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_4EF75EE25923E29B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEA1B1E98F2EBAF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_EEA1B1E98F2EBAF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CCF6D5A6446E2EF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_CCF6D5A6446E2EF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1367CFE7E28DFA4A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_1367CFE7E28DFA4A_OFFSET))(a1, a2);
		}
	};
}
