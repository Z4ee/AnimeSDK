#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMELINESTATECONFIG_METHOD_2_8AB1B2FC1F1233F9_OFFSET UNITYSDK_OFFSET(0x1C154BF0)
#define RPG_GAMECORE_TIMELINESTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C154D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineStateConfig_TypeDefinitionIndex = 15957;

	class TimelineStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateName; // 0x10
		::System::Boolean IsLoop; // 0x18
		::System::Single Percentage; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINESTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8AB1B2FC1F1233F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimelineStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimelineStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINESTATECONFIG_METHOD_2_8AB1B2FC1F1233F9_OFFSET))(a1, a2);
		}
	};
}
