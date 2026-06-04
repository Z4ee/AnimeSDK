#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TIMEREWINDPARENTPROPSTATECONFIG_METHOD_2_A4AF73F5ECAC9C54_OFFSET UNITYSDK_OFFSET(0x19DE76F0)
#define RPG_GAMECORE_TIMEREWINDPARENTPROPSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE7830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindParentPropStateConfig_TypeDefinitionIndex = 19512;

	class TimeRewindParentPropStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropState PropState; // 0x10
		::System::Single RotateAngle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPARENTPROPSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A4AF73F5ECAC9C54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindParentPropStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindParentPropStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPARENTPROPSTATECONFIG_METHOD_2_A4AF73F5ECAC9C54_OFFSET))(a1, a2);
		}
	};
}
