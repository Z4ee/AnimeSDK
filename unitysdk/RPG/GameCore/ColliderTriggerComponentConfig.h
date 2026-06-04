#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENTCONFIG_METHOD_3_6E0637666EBE6D2D_OFFSET UNITYSDK_OFFSET(0x19667180)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENTCONFIG_METHOD_3_D9842F77CE5AEF48_OFFSET UNITYSDK_OFFSET(0x196670E0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19667170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ColliderTriggerComponentConfig_TypeDefinitionIndex = 15742;

	class ColliderTriggerComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9842F77CE5AEF48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ColliderTriggerComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ColliderTriggerComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENTCONFIG_METHOD_3_D9842F77CE5AEF48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E0637666EBE6D2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ColliderTriggerComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ColliderTriggerComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENTCONFIG_METHOD_3_6E0637666EBE6D2D_OFFSET))(a1, a2);
		}
	};
}
