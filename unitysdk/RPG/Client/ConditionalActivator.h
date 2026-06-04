#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ConditionCheckerHandle; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONDITIONALACTIVATOR_METHOD_5_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xB709030)
#define RPG_CLIENT_CONDITIONALACTIVATOR_METHOD_5_36E51BE72B938C51_OFFSET UNITYSDK_OFFSET(0xB7090C0)
#define RPG_CLIENT_CONDITIONALACTIVATOR_METHOD_5_A73B8662804238D6_OFFSET UNITYSDK_OFFSET(0xB709210)
#define RPG_CLIENT_CONDITIONALACTIVATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB709580)
#define RPG_CLIENT_CONDITIONALACTIVATOR_START_OFFSET UNITYSDK_OFFSET(0xB708FE0)
#define RPG_CLIENT_CONDITIONALACTIVATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB7095D0)
#define RPG_CLIENT_CONDITIONALACTIVATOR___WAITSTATESWITCH_B__3_0_OFFSET UNITYSDK_OFFSET(0xB709630)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionalActivator_TypeDefinitionIndex = 67726;

	class ConditionalActivator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockIDs; // 0x18
		::RPG::Client::ConditionCheckerHandle* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_START_OFFSET))(this);
		}

		::System::Boolean Method_5_36E51BE72B938C51()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_METHOD_5_36E51BE72B938C51_OFFSET))(this);
		}

		::System::Void Method_5_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_METHOD_5_2CBE0B79DD36047E_OFFSET))(this);
		}

		::System::Void Method_5_A73B8662804238D6(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_METHOD_5_A73B8662804238D6_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void __WaitStateSwitch_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR___WAITSTATESWITCH_B__3_0_OFFSET))(this);
		}
	};
}
