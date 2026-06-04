#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_154827FFD44F310A_OFFSET UNITYSDK_OFFSET(0x1953C7A0)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_5374579D5AD86885_OFFSET UNITYSDK_OFFSET(0x1953C620)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_6372F4722A2AF22B_OFFSET UNITYSDK_OFFSET(0x1953C820)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_723DB1B30F22F4E3_OFFSET UNITYSDK_OFFSET(0x1953C550)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1953C5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTurnActionEntityTeamType_TypeDefinitionIndex = 22205;

	class ByCompareTurnActionEntityTeamType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_723DB1B30F22F4E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_723DB1B30F22F4E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5374579D5AD86885(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_5374579D5AD86885_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_154827FFD44F310A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_154827FFD44F310A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6372F4722A2AF22B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_6372F4722A2AF22B_OFFSET))(a1, a2);
		}
	};
}
