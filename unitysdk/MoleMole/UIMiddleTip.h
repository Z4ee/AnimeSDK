#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_45FA6A0B42B356D1.h"
#include "unitysdk/MoleMole/TipShowObj.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIMIDDLETIP_HIDE_OFFSET UNITYSDK_OFFSET(0x19CA1C80)
#define MOLEMOLE_UIMIDDLETIP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x19CA18F0)
#define MOLEMOLE_UIMIDDLETIP_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x19CA18A0)
#define MOLEMOLE_UIMIDDLETIP_SHOWZENKOVTIP_OFFSET UNITYSDK_OFFSET(0x19CA1B30)
#define MOLEMOLE_UIMIDDLETIP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19CA1860)
#define MOLEMOLE_UIMIDDLETIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA16D0)
#define MOLEMOLE_UIMIDDLETIP___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x19CA1EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiddleTip_TypeDefinitionIndex = 71381;

	class UIMiddleTip : public ::MoleMole::TipShowObj
	{
	public:
		::System::String* message; // 0x30
		::System::Action* finishCallback; // 0x38
		::System::String* Icon; // 0x40
		::System::String* ExtraMessage; // 0x48
		::System::Single countdownEndDungeonTime; // 0x50
		::System::Boolean IsCanceled; // 0x54
		::System::Boolean ShowMainMessage; // 0x55
		::System::Boolean ShowIcon; // 0x56
		::System::Single countdownSeconds; // 0x58

		::System::Void _ctor(::System::Int32 tiPid, ::Enum_3_205B03D40B9BD873 page, ::System::Action* finishAction, ::System::String* debugText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_205B03D40B9BD873, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP__CTOR_OFFSET))(this, tiPid, page, finishAction, debugText);
		}

		::System::Void _ctor_1(::System::Int32 tiPid, ::Enum_3_205B03D40B9BD873 page, ::System::Single countdownSeconds, ::System::Action* finishCallback, ::System::String* debugText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_205B03D40B9BD873, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP__CTOR_1_OFFSET))(this, tiPid, page, countdownSeconds, finishCallback, debugText);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_ONPROCESS_OFFSET))(this);
		}

		static ::MoleMole::UIMiddleTip* ShowZenkovTip(::System::Int32 zkTipId, ::Enum_3_45FA6A0B42B356D1 tipType, ::System::Single countdownSeconds, ::System::Action* finishCallback)
		{
			return ((::MoleMole::UIMiddleTip*(*)(::System::Int32, ::Enum_3_45FA6A0B42B356D1, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_SHOWZENKOVTIP_OFFSET))(zkTipId, tipType, countdownSeconds, finishCallback);
		}

		static ::System::Void Hide(::System::Int32 tipid)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_HIDE_OFFSET))(tipid);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
