#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class String; }

#define MOLEMOLE_UIKRANTIADDICTPOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x163C18C0)
#define MOLEMOLE_UIKRANTIADDICTPOP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x163C1900)
#define MOLEMOLE_UIKRANTIADDICTPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x163C18D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIKRAntiAddictPop_TypeDefinitionIndex = 60779;

	class UIKRAntiAddictPop : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::String* _additcMsg; // 0x28

		::System::Void _ctor(::System::String* addictMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKRANTIADDICTPOP__CTOR_OFFSET))(this, addictMsg);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKRANTIADDICTPOP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKRANTIADDICTPOP_ONPROCESS_OFFSET))(this);
		}
	};
}
