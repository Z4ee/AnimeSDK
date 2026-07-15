#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETTVNOTIFYCONFIG_METHOD_2_E82129229BEB09AE_OFFSET UNITYSDK_OFFSET(0x1C60A550)
#define RPG_GAMECORE_SETTVNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60A630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTVNotifyConfig_TypeDefinitionIndex = 16289;

	class SetTVNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 State; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTVNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E82129229BEB09AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTVNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTVNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTVNOTIFYCONFIG_METHOD_2_E82129229BEB09AE_OFFSET))(a1, a2);
		}
	};
}
