#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERHPRATIOCHECK_METHOD_3_01775AE8039C59C5_OFFSET UNITYSDK_OFFSET(0x18C25F90)
#define RPG_GAMECORE_PLAYERHPRATIOCHECK_METHOD_3_256651F8B89CFAC2_OFFSET UNITYSDK_OFFSET(0x18C26010)
#define RPG_GAMECORE_PLAYERHPRATIOCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C25FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerHPRatioCheck_TypeDefinitionIndex = 21882;

	class PlayerHPRatioCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x18
		::RPG::GameCore::CompareType CompareType; // 0x1C
		::RPG::GameCore::FixPoint TargetHPRatio; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERHPRATIOCHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01775AE8039C59C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerHPRatioCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerHPRatioCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERHPRATIOCHECK_METHOD_3_01775AE8039C59C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_256651F8B89CFAC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerHPRatioCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerHPRatioCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERHPRATIOCHECK_METHOD_3_256651F8B89CFAC2_OFFSET))(a1, a2);
		}
	};
}
