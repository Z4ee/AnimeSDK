#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_PLAYINTERACT_METHOD_4_A3474BC459BCCFDA_OFFSET UNITYSDK_OFFSET(0x18DF4100)
#define RPG_GAMECORE_ST_MAIN_PLAYINTERACT_METHOD_4_D7868C88FE1C1BA8_OFFSET UNITYSDK_OFFSET(0x18DF4030)
#define RPG_GAMECORE_ST_MAIN_PLAYINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF40B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_PlayInteract_TypeDefinitionIndex = 19080;

	class ST_Main_PlayInteract : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean ForceStartMotion; // 0x18
		::System::String* CharacterID; // 0x20
		::System::UInt32 MotionID; // 0x28
		::System::Single Duration; // 0x2C
		::System::Boolean SteerToPlayer; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D7868C88FE1C1BA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_PlayInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_PlayInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYINTERACT_METHOD_4_D7868C88FE1C1BA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A3474BC459BCCFDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_PlayInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_PlayInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYINTERACT_METHOD_4_A3474BC459BCCFDA_OFFSET))(a1, a2);
		}
	};
}
