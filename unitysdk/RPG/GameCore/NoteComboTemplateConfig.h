#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NOTECOMBOTEMPLATECONFIG_METHOD_2_05E5C725B4123FF6_OFFSET UNITYSDK_OFFSET(0x17474410)
#define RPG_GAMECORE_NOTECOMBOTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17474450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteComboTemplateConfig_TypeDefinitionIndex = 15539;

	class NoteComboTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_05E5C725B4123FF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NoteComboTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NoteComboTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOTEMPLATECONFIG_METHOD_2_05E5C725B4123FF6_OFFSET))(a1, a2);
		}
	};
}
