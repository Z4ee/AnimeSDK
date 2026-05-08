#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_282;
namespace System { class Action; }

#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTEXT_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15B90610)
#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTEXT_PARAMSISVALID_OFFSET UNITYSDK_OFFSET(0x15B90570)
#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTEXT_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15B90620)
#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B90630)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueLevelUpPopWindowContext_TypeDefinitionIndex = 68960;

	class UIAntiqueLevelUpPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_282* Config; // 0x28
		::System::Action* _OnClose_k__BackingField; // 0x30
		::System::Int32 NewLevel; // 0x38
		::System::Int32 LastLevel; // 0x3C
		::System::Int32 NewExp; // 0x40
		::System::Int32 LastExp; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean ParamsIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTEXT_PARAMSISVALID_OFFSET))(this);
		}

		::System::Action* get_OnClose()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTEXT_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTEXT_SET_ONCLOSE_OFFSET))(this, value);
		}
	};
}
