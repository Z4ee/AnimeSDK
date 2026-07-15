#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR_METHOD_3_41E028BA4D0D3010_OFFSET UNITYSDK_OFFSET(0x19F51CF0)
#define RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR_METHOD_3_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x19F51C80)
#define RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F51E90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkFigureEvtBehaviour_TypeDefinitionIndex = 46594;

	class TalkFigureEvtBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::Boolean Show; // 0x20
		::System::Boolean IsPlayerInvolved; // 0x21
		::System::String* ImagePath; // 0x28
		::System::String* MaleImagePath; // 0x30
		::System::String* FemaleImagePath; // 0x38
		::System::Boolean TriggerSound; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_C6159FCF4A6D407A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR_METHOD_3_C6159FCF4A6D407A_OFFSET))(this);
		}

		::System::Void Method_3_41E028BA4D0D3010(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR_METHOD_3_41E028BA4D0D3010_OFFSET))(this, a1);
		}
	};
}
