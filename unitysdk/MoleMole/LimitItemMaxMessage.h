#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class String; }

#define MOLEMOLE_LIMITITEMMAXMESSAGE_DIRECTSHOW_OFFSET UNITYSDK_OFFSET(0x17909AD0)
#define MOLEMOLE_LIMITITEMMAXMESSAGE_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x17909B20)
#define MOLEMOLE_LIMITITEMMAXMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17909740)
#define MOLEMOLE_LIMITITEMMAXMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17909A80)
#define MOLEMOLE_LIMITITEMMAXMESSAGE_SHOWREWARDWINDOW_OFFSET UNITYSDK_OFFSET(0x17909B70)
#define MOLEMOLE_LIMITITEMMAXMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17909750)

namespace MoleMole
{
	inline static constexpr unsigned int LimitItemMaxMessage_TypeDefinitionIndex = 46474;

	class LimitItemMaxMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::String* showText; // 0x28
		::System::Int64 refreshTimeStamp; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIMITITEMMAXMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIMITITEMMAXMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIMITITEMMAXMESSAGE_ONPROCESS_OFFSET))(this);
		}

		::System::Void DirectShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIMITITEMMAXMESSAGE_DIRECTSHOW_OFFSET))(this);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIMITITEMMAXMESSAGE_DOPROCESS_OFFSET))(this);
		}

		::System::Void ShowRewardWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIMITITEMMAXMESSAGE_SHOWREWARDWINDOW_OFFSET))(this);
		}
	};
}
