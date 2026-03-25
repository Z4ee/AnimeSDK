#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesAnimComposite; }

#define RPG_GAMECORE_PLANETFESAVATARANIMCONFIG_METHOD_2_B77E3CE308E168AC_OFFSET UNITYSDK_OFFSET(0x174B4DE0)
#define RPG_GAMECORE_PLANETFESAVATARANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174B4F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarAnimConfig_TypeDefinitionIndex = 14871;

	class PlanetFesAvatarAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::Il2CppArray<::RPG::GameCore::PlanetFesAnimComposite*>* AnimComposite; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARANIMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B77E3CE308E168AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAvatarAnimConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAvatarAnimConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARANIMCONFIG_METHOD_2_B77E3CE308E168AC_OFFSET))(a1, a2);
		}
	};
}
