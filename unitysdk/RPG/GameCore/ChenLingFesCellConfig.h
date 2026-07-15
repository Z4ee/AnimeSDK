#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCellType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGFESCELLCONFIG_METHOD_3_2E734196BD4CBB30_OFFSET UNITYSDK_OFFSET(0x1C383B60)
#define RPG_GAMECORE_CHENLINGFESCELLCONFIG_METHOD_3_7109CC106C39CA02_OFFSET UNITYSDK_OFFSET(0x1C383BC0)
#define RPG_GAMECORE_CHENLINGFESCELLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C383BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesCellConfig_TypeDefinitionIndex = 17708;

	class ChenLingFesCellConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ChenLingFesCellType Type; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESCELLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E734196BD4CBB30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesCellConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesCellConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESCELLCONFIG_METHOD_3_2E734196BD4CBB30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7109CC106C39CA02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesCellConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESCELLCONFIG_METHOD_3_7109CC106C39CA02_OFFSET))(a1, a2);
		}
	};
}
