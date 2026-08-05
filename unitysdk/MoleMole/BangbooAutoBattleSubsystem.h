#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_2_D0C558C56591C3D1;

#define MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM_GET_NETWORKHANDLER_OFFSET UNITYSDK_OFFSET(0x14831FE0)
#define MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14832000)
#define MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x148321B0)
#define MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14832040)
#define MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM_SET_NETWORKHANDLER_OFFSET UNITYSDK_OFFSET(0x14831FF0)
#define MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14832210)
#define MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14832230)
#define MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x148322C0)
#define MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14832350)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooAutoBattleSubsystem_TypeDefinitionIndex = 42620;

	class BangbooAutoBattleSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BangbooAutoBattleSubsystem*>
	{
	public:
		::Class_2_D0C558C56591C3D1* _NetWorkHandler_k__BackingField; // 0x10
		::System::Boolean _networkHandlerCreated; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::Class_2_D0C558C56591C3D1* get_NetWorkHandler()
		{
			return ((::Class_2_D0C558C56591C3D1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM_GET_NETWORKHANDLER_OFFSET))(this);
		}

		::System::Void set_NetWorkHandler(::Class_2_D0C558C56591C3D1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D0C558C56591C3D1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM_SET_NETWORKHANDLER_OFFSET))(this, value);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOAUTOBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
