#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_METHOD_2_6CF52536EB9CDB36_OFFSET UNITYSDK_OFFSET(0x1D81ACE0)
#define RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_METHOD_2_9738FF049E22686A_OFFSET UNITYSDK_OFFSET(0x1D81A990)
#define RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81ACD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceSettingConfigItemBase_TypeDefinitionIndex = 16288;

	class DeviceSettingConfigItemBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SolutionName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9738FF049E22686A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceSettingConfigItemBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceSettingConfigItemBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_METHOD_2_9738FF049E22686A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6CF52536EB9CDB36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceSettingConfigItemBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceSettingConfigItemBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_METHOD_2_6CF52536EB9CDB36_OFFSET))(a1, a2);
		}
	};
}
