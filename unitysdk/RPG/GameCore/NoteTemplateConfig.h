#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NOTETEMPLATECONFIG_METHOD_2_01D04ABCF38A68AC_OFFSET UNITYSDK_OFFSET(0x199D0100)
#define RPG_GAMECORE_NOTETEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199D0140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteTemplateConfig_TypeDefinitionIndex = 16111;

	class NoteTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTETEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_01D04ABCF38A68AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NoteTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NoteTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTETEMPLATECONFIG_METHOD_2_01D04ABCF38A68AC_OFFSET))(a1, a2);
		}
	};
}
