#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STSpecialEventType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT_METHOD_4_652E3AA1137305A8_OFFSET UNITYSDK_OFFSET(0x1B78AEC0)
#define RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT_METHOD_4_753E6325C450FC19_OFFSET UNITYSDK_OFFSET(0x1B78AE70)
#define RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B78AEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_NotifySpecialEvent_TypeDefinitionIndex = 19356;

	class ST_Side_NotifySpecialEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::STSpecialEventType SpecialEventType; // 0x18
		::System::Boolean TriggerOnEnter; // 0x1C
		::System::Boolean TriggerOnExit; // 0x1D
		::RPG::GameCore::DynamicFloat* Distance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_753E6325C450FC19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_NotifySpecialEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_NotifySpecialEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT_METHOD_4_753E6325C450FC19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_652E3AA1137305A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_NotifySpecialEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_NotifySpecialEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_NOTIFYSPECIALEVENT_METHOD_4_652E3AA1137305A8_OFFSET))(a1, a2);
		}
	};
}
