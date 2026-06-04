#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG_METHOD_3_2C3CE1417EF56378_OFFSET UNITYSDK_OFFSET(0x19DFCA80)
#define RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG_METHOD_3_D5D7832C6C8DCF5D_OFFSET UNITYSDK_OFFSET(0x19DFCB20)
#define RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DFCB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransformComponentConfig_TypeDefinitionIndex = 15735;

	class TransformComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C3CE1417EF56378(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TransformComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TransformComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG_METHOD_3_2C3CE1417EF56378_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5D7832C6C8DCF5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TransformComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TransformComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENTCONFIG_METHOD_3_D5D7832C6C8DCF5D_OFFSET))(a1, a2);
		}
	};
}
