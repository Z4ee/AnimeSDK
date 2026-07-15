#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindEffControlType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDEFFCONFIG_METHOD_2_DCA582507D750045_OFFSET UNITYSDK_OFFSET(0x1C152A10)
#define RPG_GAMECORE_TIMEREWINDEFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C152C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindEffConfig_TypeDefinitionIndex = 15952;

	class TimeRewindEffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TimeRewindEffControlType ControlType; // 0x10
		::RPG::GameCore::EffectConfig* TriggerEffConfig; // 0x18
		::System::String* EffectUniqueName; // 0x20
		::System::String* BlendOutAnim; // 0x28
		::System::String* BlendInAnim; // 0x30
		::System::Single Duration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDEFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DCA582507D750045(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindEffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindEffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDEFFCONFIG_METHOD_2_DCA582507D750045_OFFSET))(a1, a2);
		}
	};
}
