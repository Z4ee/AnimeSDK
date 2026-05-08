#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x10BC26E0)
#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x10BC2730)
#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC26F0)

namespace MoleMole
{
	inline static constexpr unsigned int GetAccessoryOfLockedSkin_TypeDefinitionIndex = 76664;

	class GetAccessoryOfLockedSkin : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 accID; // 0x28

		::System::Void _ctor(::System::Int32 accID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN__CTOR_OFFSET))(this, accID);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN_ONPROCESS_OFFSET))(this);
		}
	};
}
