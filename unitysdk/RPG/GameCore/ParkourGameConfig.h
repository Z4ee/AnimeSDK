#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURGAMECONFIG_METHOD_3_0595DF97722CFF15_OFFSET UNITYSDK_OFFSET(0x1BB0E800)
#define RPG_GAMECORE_PARKOURGAMECONFIG_METHOD_3_F14643E049C702D8_OFFSET UNITYSDK_OFFSET(0x1BB0E740)
#define RPG_GAMECORE_PARKOURGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0E7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourGameConfig_TypeDefinitionIndex = 16296;

	class ParkourGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::System::String* ConfigAssetPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F14643E049C702D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMECONFIG_METHOD_3_F14643E049C702D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0595DF97722CFF15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourGameConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMECONFIG_METHOD_3_0595DF97722CFF15_OFFSET))(a1, a2);
		}
	};
}
