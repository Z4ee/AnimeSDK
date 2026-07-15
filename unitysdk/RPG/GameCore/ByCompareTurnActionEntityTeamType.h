#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_05E2C1FFBABACDBF_OFFSET UNITYSDK_OFFSET(0x1A8B10A0)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_2FFA64A91D228A20_OFFSET UNITYSDK_OFFSET(0x1A8B0EE0)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_5374579D5AD86885_OFFSET UNITYSDK_OFFSET(0x1A8B0F20)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_EE350C9C1E23AFB8_OFFSET UNITYSDK_OFFSET(0x1A8B10D0)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8B0F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTurnActionEntityTeamType_TypeDefinitionIndex = 22642;

	class ByCompareTurnActionEntityTeamType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2FFA64A91D228A20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_2FFA64A91D228A20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5374579D5AD86885(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_5374579D5AD86885_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05E2C1FFBABACDBF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_05E2C1FFBABACDBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EE350C9C1E23AFB8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_METHOD_4_EE350C9C1E23AFB8_OFFSET))(a1, a2);
		}
	};
}
