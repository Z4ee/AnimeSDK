#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_OPENMARCELADVENTUREUI_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x15B49560)
#define MOLEMOLE_OPENMARCELADVENTUREUI_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x15B49580)
#define MOLEMOLE_OPENMARCELADVENTUREUI__CTOR_OFFSET UNITYSDK_OFFSET(0x15B49570)

namespace MoleMole
{
	inline static constexpr unsigned int OpenMarcelAdventureUI_TypeDefinitionIndex = 51436;

	class OpenMarcelAdventureUI : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENMARCELADVENTUREUI__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENMARCELADVENTUREUI_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENMARCELADVENTUREUI_ONPROCESS_OFFSET))(this);
		}
	};
}
