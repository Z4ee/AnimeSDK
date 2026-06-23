#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Struct_2_9A6EB2DDAF7C08FF.h"
#include "unitysdk/Struct_2_EF8866DC0BA58CB4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_420;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
template <typename T> class Class_1_CD1ECF9C8E1FE909_1;

#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ADDRECEIVER_OFFSET UNITYSDK_OFFSET(0x1916EE50)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1916E4F0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_CLEAN_OFFSET UNITYSDK_OFFSET(0x1916E2A0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_GET_DEBUGRECEIVERLIST_OFFSET UNITYSDK_OFFSET(0x1916F3D0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_METHOD_5_A51C99ADEC940A24_OFFSET UNITYSDK_OFFSET(0x1916E820)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_METHOD_5_E7A20AA082475849_OFFSET UNITYSDK_OFFSET(0x1916EEF0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1916E4A0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1916E460)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1916E5C0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1916E9F0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1916EC10)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_REMOVERECEIVER_OFFSET UNITYSDK_OFFSET(0x1916F340)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1916F3E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTriggerEventDispatcher_TypeDefinitionIndex = 48778;

	class MonoTriggerEventDispatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_420*>* Field_5_1; // 0x20
		::Class_1_CD1ECF9C8E1FE909_1<::Struct_2_EF8866DC0BA58CB4>* Field_5_2; // 0x28
		::System::Boolean IsFloorTrigger; // 0x30
		::System::Boolean MatchesAnySuite; // 0x31
		::Foundation::ViewObject::SuiteInfo SuiteInfo; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER__CTOR_OFFSET))(this);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_CLEAN_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_AWAKE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void AddReceiver(::Class_0_16E4307DCC419505_420* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_420*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ADDRECEIVER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveReceiver(::Class_0_16E4307DCC419505_420* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_REMOVERECEIVER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_420*>* get_DebugReceiverList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_420*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_GET_DEBUGRECEIVERLIST_OFFSET))(this);
		}

		::System::Void Method_5_E7A20AA082475849(::Class_0_16E4307DCC419505_420* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_METHOD_5_E7A20AA082475849_OFFSET))(this, a1);
		}

		::System::Void Method_5_A51C99ADEC940A24(::Struct_2_9A6EB2DDAF7C08FF a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9A6EB2DDAF7C08FF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_METHOD_5_A51C99ADEC940A24_OFFSET))(this, a1);
		}
	};
}
