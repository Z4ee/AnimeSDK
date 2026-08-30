#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ST_PARKOUR_USESPRINT_METHOD_4_D0C6D4B0CB443A76_OFFSET UNITYSDK_OFFSET(0x1CD63590)
#define RPG_CLIENT_ST_PARKOUR_USESPRINT_METHOD_4_DCB9B1920AE554F7_OFFSET UNITYSDK_OFFSET(0x1CD63550)
#define RPG_CLIENT_ST_PARKOUR_USESPRINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD63580)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_UseSprint_TypeDefinitionIndex = 10253;

	class ST_Parkour_UseSprint : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean ForceUse; // 0x18
		::System::Single MinUseDeltaTime; // 0x1C
		::System::Single MaxUseDeltaTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_USESPRINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DCB9B1920AE554F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_UseSprint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_UseSprint*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_USESPRINT_METHOD_4_DCB9B1920AE554F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D0C6D4B0CB443A76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_UseSprint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_UseSprint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_USESPRINT_METHOD_4_D0C6D4B0CB443A76_OFFSET))(a1, a2);
		}
	};
}
