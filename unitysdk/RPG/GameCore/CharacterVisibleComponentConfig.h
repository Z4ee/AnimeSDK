#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENTCONFIG_METHOD_3_8D4C99D8B12F143E_OFFSET UNITYSDK_OFFSET(0x1CF9F9C0)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENTCONFIG_METHOD_3_D2295086E6D98C2F_OFFSET UNITYSDK_OFFSET(0x1CF9F920)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9F9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibleComponentConfig_TypeDefinitionIndex = 16387;

	class CharacterVisibleComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D2295086E6D98C2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterVisibleComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterVisibleComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENTCONFIG_METHOD_3_D2295086E6D98C2F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D4C99D8B12F143E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterVisibleComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterVisibleComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENTCONFIG_METHOD_3_8D4C99D8B12F143E_OFFSET))(a1, a2);
		}
	};
}
