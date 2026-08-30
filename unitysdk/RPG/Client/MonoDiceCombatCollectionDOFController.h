#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::CustomRP { class RPGDepthOfField; }

#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_METHOD_5_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xD74F640)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_METHOD_5_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xD74F6B0)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD74F940)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD74F470)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD74F590)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD74FAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDiceCombatCollectionDOFController_TypeDefinitionIndex = 63626;

	class MonoDiceCombatCollectionDOFController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single FocusDistance; // 0x18
		::System::Single FStop; // 0x1C
		::System::Single SensorWidth; // 0x20
		::System::Single CGMBGGEHKNP; // 0x24
		::System::Single JIAECCMCJGD; // 0x28
		::System::Single CPFJKPOBNMP; // 0x2C
		::RPG::CustomRP::RPGDepthOfField* EFKDOHFAOID; // 0x30
		::System::Boolean DALKJPIGDNO; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_METHOD_5_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Boolean Method_5_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_METHOD_5_4DA6D4A624E42CAB_OFFSET))(this);
		}
	};
}
