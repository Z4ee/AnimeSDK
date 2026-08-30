#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoRemainTimerEvent.h"
#include "unitysdk/RPG/Client/MonoRemainTimerText_ApplyModeEnum.h"
#include "unitysdk/RPG/Client/MonoRemainTimerText_UnitTextPaletteModeEnum.h"
#include "unitysdk/System/TimeSpan.h"

namespace RPG::Client { class UITextUtils_RemainTimeUnitTextPalette; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MONOREMAINTIMERTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD85DEF0)
#define RPG_CLIENT_MONOREMAINTIMERTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD85E420)
#define RPG_CLIENT_MONOREMAINTIMERTEXT__LOADPALETTE_OFFSET UNITYSDK_OFFSET(0xD85E040)
#define RPG_CLIENT_MONOREMAINTIMERTEXT__ONREMAINTIMEEXPIRED_OFFSET UNITYSDK_OFFSET(0xD85E3B0)
#define RPG_CLIENT_MONOREMAINTIMERTEXT__ONREMAINTIMEUPDATED_OFFSET UNITYSDK_OFFSET(0xD85E1B0)
#define RPG_CLIENT_MONOREMAINTIMERTEXT__SETREMAINTIMETEXT_OFFSET UNITYSDK_OFFSET(0xD85E210)
#define RPG_CLIENT_MONOREMAINTIMERTEXT__TRYINITPALETTE_OFFSET UNITYSDK_OFFSET(0xD85DFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRemainTimerText_TypeDefinitionIndex = 72526;

	class MonoRemainTimerText : public ::RPG::Client::MonoRemainTimerEvent
	{
	public:
		::UnityEngine::UI::Text* _Text; // 0x38
		::RPG::Client::UITextUtils_RemainTimeUnitTextPalette* UnitTextPalette; // 0x40
		::RPG::Client::MonoRemainTimerText_UnitTextPaletteModeEnum _UnitTextPaletteMode; // 0x48
		::System::String* _DayTextID; // 0x50
		::System::String* _HourTextID; // 0x58
		::System::String* _MinuteTextID; // 0x60
		::System::String* _SecondTextID; // 0x68
		::System::Int32 MaxUnitCount; // 0x70
		::RPG::Client::MonoRemainTimerText_ApplyModeEnum ApplyMode; // 0x74
		::System::String* TemplateTextID; // 0x78
		::System::Boolean AutoDeactivateOnComplete; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERTEXT_AWAKE_OFFSET))(this);
		}

		::System::Void _TryInitPalette()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERTEXT__TRYINITPALETTE_OFFSET))(this);
		}

		::RPG::Client::UITextUtils_RemainTimeUnitTextPalette* _LoadPalette()
		{
			return ((::RPG::Client::UITextUtils_RemainTimeUnitTextPalette*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERTEXT__LOADPALETTE_OFFSET))(this);
		}

		::System::Void _OnRemainTimeUpdated(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERTEXT__ONREMAINTIMEUPDATED_OFFSET))(this, a1);
		}

		::System::Void _OnRemainTimeExpired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERTEXT__ONREMAINTIMEEXPIRED_OFFSET))(this);
		}

		::System::Void _SetRemainTimeText(::System::TimeSpan a1, ::RPG::Client::UITextUtils_RemainTimeUnitTextPalette* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::RPG::Client::UITextUtils_RemainTimeUnitTextPalette*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMERTEXT__SETREMAINTIMETEXT_OFFSET))(this, a1, a2);
		}
	};
}
