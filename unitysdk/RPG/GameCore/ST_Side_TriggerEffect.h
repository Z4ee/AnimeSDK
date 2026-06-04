#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT_METHOD_4_34D42A6F7507E798_OFFSET UNITYSDK_OFFSET(0x19C1B3F0)
#define RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT_METHOD_4_61D5EB787223950F_OFFSET UNITYSDK_OFFSET(0x19C1B4F0)
#define RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1B480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_TriggerEffect_TypeDefinitionIndex = 19018;

	class ST_Side_TriggerEffect : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean TriggerOnEnter; // 0x18
		::System::Boolean TriggerOnExit; // 0x19
		::System::String* EffectPath; // 0x20
		::System::String* AttachPoint; // 0x28
		::RPG::MVector3 PositionOffset; // 0x30
		::RPG::MVector3 RotationOffset; // 0x3C
		::RPG::MVector3 Scale; // 0x48
		::System::Single Delay; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34D42A6F7507E798(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_TriggerEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_TriggerEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT_METHOD_4_34D42A6F7507E798_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_61D5EB787223950F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_TriggerEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT_METHOD_4_61D5EB787223950F_OFFSET))(a1, a2);
		}
	};
}
