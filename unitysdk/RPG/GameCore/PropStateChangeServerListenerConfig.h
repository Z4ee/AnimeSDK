#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG_METHOD_3_1713B7DFE5B87298_OFFSET UNITYSDK_OFFSET(0x18C798B0)
#define RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG_METHOD_3_8A22794A92C5A9BF_OFFSET UNITYSDK_OFFSET(0x18C79840)
#define RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C79880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateChangeServerListenerConfig_TypeDefinitionIndex = 19353;

	class PropStateChangeServerListenerConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A22794A92C5A9BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateChangeServerListenerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateChangeServerListenerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG_METHOD_3_8A22794A92C5A9BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1713B7DFE5B87298(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateChangeServerListenerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateChangeServerListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG_METHOD_3_1713B7DFE5B87298_OFFSET))(a1, a2);
		}
	};
}
