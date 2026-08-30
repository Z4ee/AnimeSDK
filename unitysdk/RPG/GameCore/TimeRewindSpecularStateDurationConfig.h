#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TIMEREWINDSPECULARSTATEDURATIONCONFIG_METHOD_2_6B366FB7E757AE27_OFFSET UNITYSDK_OFFSET(0x1D5D1AB0)
#define RPG_GAMECORE_TIMEREWINDSPECULARSTATEDURATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindSpecularStateDurationConfig_TypeDefinitionIndex = 16421;

	class TimeRewindSpecularStateDurationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BlendTime; // 0x10
		::System::Single Duration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSPECULARSTATEDURATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6B366FB7E757AE27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindSpecularStateDurationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindSpecularStateDurationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSPECULARSTATEDURATIONCONFIG_METHOD_2_6B366FB7E757AE27_OFFSET))(a1, a2);
		}
	};
}
