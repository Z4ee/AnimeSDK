#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TIMELINEENTITYCONFIG_METHOD_2_81DE1740DB504EE8_OFFSET UNITYSDK_OFFSET(0x1D5D1BE0)
#define RPG_GAMECORE_TIMELINEENTITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineEntityConfig_TypeDefinitionIndex = 20392;

	class TimelineEntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10
		::System::String* TemplateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEENTITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_81DE1740DB504EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimelineEntityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimelineEntityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEENTITYCONFIG_METHOD_2_81DE1740DB504EE8_OFFSET))(a1, a2);
		}
	};
}
