#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTEXT_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x157C0900)
#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTEXT_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x157C0910)
#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x157C0920)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerPopularityLevelUpPopWindowContext_TypeDefinitionIndex = 78010;

	class UISummerPopularityLevelUpPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* _OnClose_k__BackingField; // 0x28
		::System::UInt32 NewPopularity; // 0x30
		::System::UInt32 LastPopularity; // 0x34

		::System::Void _ctor(::System::UInt32 lastPopularity, ::System::UInt32 newPopularity, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTEXT__CTOR_OFFSET))(this, lastPopularity, newPopularity, onClose);
		}

		::System::Action* get_OnClose()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTEXT_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTEXT_SET_ONCLOSE_OFFSET))(this, value);
		}
	};
}
