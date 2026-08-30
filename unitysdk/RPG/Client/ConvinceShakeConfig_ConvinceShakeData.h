#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline { class CameraShakeConfig; }
namespace System { class String; }

#define RPG_CLIENT_CONVINCESHAKECONFIG_CONVINCESHAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCC734B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceShakeConfig_ConvinceShakeData_TypeDefinitionIndex = 60775;

	class ConvinceShakeConfig_ConvinceShakeData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::RPGTools::Timeline::CameraShakeConfig* ShakeConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCESHAKECONFIG_CONVINCESHAKEDATA__CTOR_OFFSET))(this);
		}
	};
}
