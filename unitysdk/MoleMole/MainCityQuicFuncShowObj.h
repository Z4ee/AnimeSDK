#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class Action; }

#define MOLEMOLE_MAINCITYQUICFUNCSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x15429850)
#define MOLEMOLE_MAINCITYQUICFUNCSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15429840)
#define MOLEMOLE_MAINCITYQUICFUNCSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x15429870)
#define MOLEMOLE_MAINCITYQUICFUNCSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15429860)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityQuicFuncShowObj_TypeDefinitionIndex = 74481;

	class MainCityQuicFuncShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* quicFuncUnLockUpdate; // 0x28
		::System::Int32 Group; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYQUICFUNCSHOWOBJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYQUICFUNCSHOWOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYQUICFUNCSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYQUICFUNCSHOWOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}
