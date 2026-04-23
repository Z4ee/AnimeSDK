#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMELINEINTERMEDIASTATECONFIG_METHOD_2_C936433390528A9A_OFFSET UNITYSDK_OFFSET(0x1909D450)
#define RPG_GAMECORE_TIMELINEINTERMEDIASTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1909D580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineIntermediaStateConfig_TypeDefinitionIndex = 15729;

	class TimelineIntermediaStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateName; // 0x10
		::System::Single Percentage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEINTERMEDIASTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C936433390528A9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimelineIntermediaStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimelineIntermediaStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEINTERMEDIASTATECONFIG_METHOD_2_C936433390528A9A_OFFSET))(a1, a2);
		}
	};
}
