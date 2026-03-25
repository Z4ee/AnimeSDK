#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELPRESETTEAMCONFIG_METHOD_2_47F4F91F30990E56_OFFSET UNITYSDK_OFFSET(0x170A28F0)
#define RPG_GAMECORE_CHIMERADUELPRESETTEAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170A2C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPresetTeamConfig_TypeDefinitionIndex = 14722;

	class ChimeraDuelPresetTeamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* ChimeraPresetPaths; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETTEAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_47F4F91F30990E56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelPresetTeamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelPresetTeamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETTEAMCONFIG_METHOD_2_47F4F91F30990E56_OFFSET))(a1, a2);
		}
	};
}
