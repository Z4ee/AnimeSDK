#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGFESTARGETCONFIG_METHOD_2_10CA704E41BF162D_OFFSET UNITYSDK_OFFSET(0x1C386DB0)
#define RPG_GAMECORE_CHENLINGFESTARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C386FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesTargetConfig_TypeDefinitionIndex = 20692;

	class ChenLingFesTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetType TargetType; // 0x10
		::RPG::GameCore::LittleGameEntityType LittleGameEntityType; // 0x14
		::System::UInt32 TagID; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::System::UInt32 NoTagID; // 0x20
		::System::UInt32 RandomCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESTARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_10CA704E41BF162D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesTargetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESTARGETCONFIG_METHOD_2_10CA704E41BF162D_OFFSET))(a1, a2);
		}
	};
}
