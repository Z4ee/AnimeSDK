#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TASKCONFIG_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x1E1CA1B0)
#define RPG_GAMECORE_TASKCONFIG_METHOD_2_577BAC1DE9DE59A7_OFFSET UNITYSDK_OFFSET(0x1E1CA0E0)
#define RPG_GAMECORE_TASKCONFIG_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E1CA1A0)
#define RPG_GAMECORE_TASKCONFIG_METHOD_2_F43B9582D847EAFC_OFFSET UNITYSDK_OFFSET(0x1E1CA0A0)
#define RPG_GAMECORE_TASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BE660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TaskConfig_TypeDefinitionIndex = 23465;

	class TaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean TaskEnabled; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F43B9582D847EAFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_METHOD_2_F43B9582D847EAFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_577BAC1DE9DE59A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_METHOD_2_577BAC1DE9DE59A7_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_GET_ISCLIENTONLY_OFFSET))(this);
		}
	};
}
