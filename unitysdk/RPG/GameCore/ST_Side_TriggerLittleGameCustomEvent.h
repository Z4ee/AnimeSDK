#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT_METHOD_4_A1DF893D506171EF_OFFSET UNITYSDK_OFFSET(0x19C1BB00)
#define RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT_METHOD_4_C23B7CC9FE836EA0_OFFSET UNITYSDK_OFFSET(0x19C1BBE0)
#define RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1BB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_TriggerLittleGameCustomEvent_TypeDefinitionIndex = 20155;

	class ST_Side_TriggerLittleGameCustomEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean TriggerOnEnter; // 0x18
		::System::Boolean TriggerOnExit; // 0x19
		::System::String* EventName; // 0x20
		::System::Boolean UseVariable; // 0x28
		::System::String* VariableName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A1DF893D506171EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT_METHOD_4_A1DF893D506171EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C23B7CC9FE836EA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERLITTLEGAMECUSTOMEVENT_METHOD_4_C23B7CC9FE836EA0_OFFSET))(a1, a2);
		}
	};
}
