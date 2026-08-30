#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TALKDEBATEUICONTROLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE158D60)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkDebateUIControlData_TypeDefinitionIndex = 60788;

	class TalkDebateUIControlData : public ::System::Object
	{
	public:
		::System::Boolean AskBtnActive; // 0x10
		::System::Boolean NextBtnActive; // 0x11
		::System::Boolean AskBtnGray; // 0x12
		::System::Boolean PrevBtnActive; // 0x13
		::System::Boolean ShowBtnActive; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKDEBATEUICONTROLDATA__CTOR_OFFSET))(this);
		}
	};
}
