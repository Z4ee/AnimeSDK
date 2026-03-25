#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERANIMZONECONFIG_METHOD_3_2EAA624C67680C4D_OFFSET UNITYSDK_OFFSET(0x170653F0)
#define RPG_GAMECORE_CHARACTERANIMZONECONFIG_METHOD_3_8AFE23C0B91C63D9_OFFSET UNITYSDK_OFFSET(0x17065310)
#define RPG_GAMECORE_CHARACTERANIMZONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170653E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAnimZoneConfig_TypeDefinitionIndex = 15166;

	class CharacterAnimZoneConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::String* AnimZoneConfigPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8AFE23C0B91C63D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterAnimZoneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterAnimZoneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONECONFIG_METHOD_3_8AFE23C0B91C63D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EAA624C67680C4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterAnimZoneConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterAnimZoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONECONFIG_METHOD_3_2EAA624C67680C4D_OFFSET))(a1, a2);
		}
	};
}
