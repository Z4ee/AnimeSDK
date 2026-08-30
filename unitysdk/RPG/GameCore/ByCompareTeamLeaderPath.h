#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_4E2BF34BB2BFB2B8_OFFSET UNITYSDK_OFFSET(0x1BBC7D30)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_CAA1B0E5E6FDC3E0_OFFSET UNITYSDK_OFFSET(0x1BBC7F20)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_CB8E9220CC1A7D57_OFFSET UNITYSDK_OFFSET(0x1BBC7EF0)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_E779B618B43B699D_OFFSET UNITYSDK_OFFSET(0x1BBC7D70)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC7D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamLeaderPath_TypeDefinitionIndex = 21617;

	class ByCompareTeamLeaderPath : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AvatarBaseType PathType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4E2BF34BB2BFB2B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamLeaderPath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamLeaderPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_4E2BF34BB2BFB2B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E779B618B43B699D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamLeaderPath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamLeaderPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_E779B618B43B699D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CB8E9220CC1A7D57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderPath*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_CB8E9220CC1A7D57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CAA1B0E5E6FDC3E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderPath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_CAA1B0E5E6FDC3E0_OFFSET))(a1, a2);
		}
	};
}
