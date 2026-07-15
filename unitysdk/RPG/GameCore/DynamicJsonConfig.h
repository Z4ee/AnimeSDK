#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DYNAMICJSONCONFIG_METHOD_2_209D7EB5332ED9BD_OFFSET UNITYSDK_OFFSET(0x1BB2A250)
#define RPG_GAMECORE_DYNAMICJSONCONFIG_METHOD_2_C01C3A67C2CCB8F4_OFFSET UNITYSDK_OFFSET(0x1BB2A4A0)
#define RPG_GAMECORE_DYNAMICJSONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB2A490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicJsonConfig_TypeDefinitionIndex = 15833;

	class DynamicJsonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_209D7EB5332ED9BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicJsonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicJsonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSONCONFIG_METHOD_2_209D7EB5332ED9BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C01C3A67C2CCB8F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicJsonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicJsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSONCONFIG_METHOD_2_C01C3A67C2CCB8F4_OFFSET))(a1, a2);
		}
	};
}
