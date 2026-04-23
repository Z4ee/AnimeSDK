#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTERAETHERGYM_METHOD_3_4E807E8DECC94C8F_OFFSET UNITYSDK_OFFSET(0x188AB2A0)
#define RPG_GAMECORE_ENTERAETHERGYM_METHOD_3_D03857E83BA0D8EE_OFFSET UNITYSDK_OFFSET(0x188AB320)
#define RPG_GAMECORE_ENTERAETHERGYM__CTOR_OFFSET UNITYSDK_OFFSET(0x188AB2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterAetherGym_TypeDefinitionIndex = 20521;

	class EnterAetherGym : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GymID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERAETHERGYM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E807E8DECC94C8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterAetherGym*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterAetherGym*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERAETHERGYM_METHOD_3_4E807E8DECC94C8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D03857E83BA0D8EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterAetherGym* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterAetherGym*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERAETHERGYM_METHOD_3_D03857E83BA0D8EE_OFFSET))(a1, a2);
		}
	};
}
