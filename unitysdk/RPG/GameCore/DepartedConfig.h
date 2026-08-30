#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEPARTEDCONFIG_METHOD_2_BDC0C94B64C4397B_OFFSET UNITYSDK_OFFSET(0x1D815B50)
#define RPG_GAMECORE_DEPARTEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D815CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DepartedConfig_TypeDefinitionIndex = 23341;

	class DepartedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HideEntity; // 0x10
		::System::Boolean MuteEntityAction; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPARTEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BDC0C94B64C4397B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DepartedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DepartedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPARTEDCONFIG_METHOD_2_BDC0C94B64C4397B_OFFSET))(a1, a2);
		}
	};
}
