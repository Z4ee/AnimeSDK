#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_3_A1DA0C4DC6D1529F_1;

#define MOLEMOLE_CHANGESCENENOTIFYOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x16292120)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x16292190)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x16292130)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16292290)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x162922A0)

namespace MoleMole
{
	inline static constexpr unsigned int ChangeSceneNotifyObj_TypeDefinitionIndex = 84004;

	class ChangeSceneNotifyObj : public ::MoleMole::LogicMessageBase
	{
	public:
		::Class_3_A1DA0C4DC6D1529F_1* Notify; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
