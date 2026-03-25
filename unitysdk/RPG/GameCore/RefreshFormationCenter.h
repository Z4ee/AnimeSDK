#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REFRESHFORMATIONCENTER_METHOD_3_02D88F0894B9EF34_OFFSET UNITYSDK_OFFSET(0x17588F70)
#define RPG_GAMECORE_REFRESHFORMATIONCENTER_METHOD_3_6BD2E44E52A5ABA5_OFFSET UNITYSDK_OFFSET(0x17588FF0)
#define RPG_GAMECORE_REFRESHFORMATIONCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17588FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshFormationCenter_TypeDefinitionIndex = 21111;

	class RefreshFormationCenter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFORMATIONCENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02D88F0894B9EF34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshFormationCenter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshFormationCenter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFORMATIONCENTER_METHOD_3_02D88F0894B9EF34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BD2E44E52A5ABA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshFormationCenter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshFormationCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFORMATIONCENTER_METHOD_3_6BD2E44E52A5ABA5_OFFSET))(a1, a2);
		}
	};
}
