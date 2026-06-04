#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerEventEmitterConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_METHOD_4_21633C13CDE870C0_OFFSET UNITYSDK_OFFSET(0x19757180)
#define RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_METHOD_4_E20077949F22F50F_OFFSET UNITYSDK_OFFSET(0x19757210)
#define RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197571E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSingleTriggerEventEmitterConfig_TypeDefinitionIndex = 17735;

	class FiveDimSingleTriggerEventEmitterConfig : public ::RPG::GameCore::FiveDimTriggerEventEmitterConfig
	{
	public:
		::System::String* TriggerName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_21633C13CDE870C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_METHOD_4_21633C13CDE870C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E20077949F22F50F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_METHOD_4_E20077949F22F50F_OFFSET))(a1, a2);
		}
	};
}
