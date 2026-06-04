#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowIntensity.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HITTIMESLOWCONFIG_METHOD_2_F4DECC6D30B99A5B_OFFSET UNITYSDK_OFFSET(0x19838C20)
#define RPG_GAMECORE_HITTIMESLOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19838DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitTimeSlowConfig_TypeDefinitionIndex = 16231;

	class HitTimeSlowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HitTimeSlowType Type; // 0x10
		::RPG::GameCore::HitTimeSlowIntensity Intensity; // 0x14
		::System::String* CurveName; // 0x18
		::System::Single Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITTIMESLOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F4DECC6D30B99A5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HitTimeSlowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HitTimeSlowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITTIMESLOWCONFIG_METHOD_2_F4DECC6D30B99A5B_OFFSET))(a1, a2);
		}
	};
}
