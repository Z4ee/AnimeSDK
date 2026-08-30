#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESABILITYCONFIG_METHOD_2_DA01811C41AD3276_OFFSET UNITYSDK_OFFSET(0x1E013670)
#define RPG_GAMECORE_CHENLINGFESABILITYCONFIG_METHOD_2_F3A2E299997BDB96_OFFSET UNITYSDK_OFFSET(0x1E0138F0)
#define RPG_GAMECORE_CHENLINGFESABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0138E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesAbilityConfig_TypeDefinitionIndex = 18230;

	class ChenLingFesAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DA01811C41AD3276(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESABILITYCONFIG_METHOD_2_DA01811C41AD3276_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F3A2E299997BDB96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesAbilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESABILITYCONFIG_METHOD_2_F3A2E299997BDB96_OFFSET))(a1, a2);
		}
	};
}
