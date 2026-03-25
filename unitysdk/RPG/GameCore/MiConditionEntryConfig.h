#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MICONDITIONENTRYCONFIG_METHOD_2_301726C19AA96963_OFFSET UNITYSDK_OFFSET(0x17412E50)
#define RPG_GAMECORE_MICONDITIONENTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17412E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiConditionEntryConfig_TypeDefinitionIndex = 15639;

	class MiConditionEntryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONENTRYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_301726C19AA96963(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiConditionEntryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionEntryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONENTRYCONFIG_METHOD_2_301726C19AA96963_OFFSET))(a1, a2);
		}
	};
}
