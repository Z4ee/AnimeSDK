#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/TipShowObj.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIMIDDLETIP_HIDE_OFFSET UNITYSDK_OFFSET(0x16C10070)
#define MOLEMOLE_UIMIDDLETIP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x16C0FE30)
#define MOLEMOLE_UIMIDDLETIP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0FCB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiddleTip_TypeDefinitionIndex = 79474;

	class UIMiddleTip : public ::MoleMole::TipShowObj
	{
	public:
		::System::String* message; // 0x30
		::System::String* Icon; // 0x38
		::System::String* ExtraMessage; // 0x40
		::System::Boolean ShowMainMessage; // 0x48
		::System::Boolean ShowIcon; // 0x49
		::System::Boolean IsCanceled; // 0x4A

		::System::Void _ctor(::System::Int32 tiPid, ::Enum_3_205B03D40B9BD873 page, ::System::Action* finishAction, ::System::String* debugText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_205B03D40B9BD873, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP__CTOR_OFFSET))(this, tiPid, page, finishAction, debugText);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_ONPROCESS_OFFSET))(this);
		}

		static ::System::Void Hide(::System::Int32 tipid)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_HIDE_OFFSET))(tipid);
		}
	};
}
