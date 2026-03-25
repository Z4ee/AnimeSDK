#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_E668CB18458F38FB_OFFSET UNITYSDK_OFFSET(0x1701BCB0)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_E779B618B43B699D_OFFSET UNITYSDK_OFFSET(0x1701BD80)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1701BD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamLeaderPath_TypeDefinitionIndex = 20034;

	class ByCompareTeamLeaderPath : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AvatarBaseType PathType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E668CB18458F38FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamLeaderPath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamLeaderPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_E668CB18458F38FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E779B618B43B699D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamLeaderPath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamLeaderPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERPATH_METHOD_4_E779B618B43B699D_OFFSET))(a1, a2);
		}
	};
}
