#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerEventEmitterConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_METHOD_4_16784C73E94A0C91_OFFSET UNITYSDK_OFFSET(0x1891D7A0)
#define RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_METHOD_4_489520CB4E3FD250_OFFSET UNITYSDK_OFFSET(0x1891D830)
#define RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1891D800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSingleTriggerEventEmitterConfig_TypeDefinitionIndex = 17707;

	class FiveDimSingleTriggerEventEmitterConfig : public ::RPG::GameCore::FiveDimTriggerEventEmitterConfig
	{
	public:
		::System::String* TriggerName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_16784C73E94A0C91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_METHOD_4_16784C73E94A0C91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_489520CB4E3FD250(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_METHOD_4_489520CB4E3FD250_OFFSET))(a1, a2);
		}
	};
}
