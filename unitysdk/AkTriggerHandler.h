#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkTriggerBase_Trigger;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A66CB50)
#define AKTRIGGERHANDLER_DODESTROY_OFFSET UNITYSDK_OFFSET(0x1A66D130)
#define AKTRIGGERHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A66D0E0)
#define AKTRIGGERHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A66D5E0)
#define AKTRIGGERHANDLER_REGISTERTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1A66CC40)
#define AKTRIGGERHANDLER_START_OFFSET UNITYSDK_OFFSET(0x1A66D060)
#define AKTRIGGERHANDLER_UNREGISTERTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1A66D230)
#define AKTRIGGERHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A66D830)
#define AKTRIGGERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A66D7C0)

inline static constexpr unsigned int AkTriggerHandler_TypeDefinitionIndex = 40522;

class AkTriggerHandler : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_triggerTypes()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AkTriggerHandler_TypeDefinitionIndex)->GetStaticField(0x3F100);
	}
	// static const ::System::Int32 AWAKE_TRIGGER_ID = 0x449D8DAE; // 0x0
	// static const ::System::Int32 START_TRIGGER_ID = 0x4C66E1F7; // 0x0
	// static const ::System::Int32 DESTROY_TRIGGER_ID = 0xEAA08C95; // 0x0
	// static const ::System::Int32 ON_ENABLE_TRIGGER_ID = 0xECE0D9F2; // 0x0
	// static const ::System::Int32 MAX_NB_TRIGGERS = 0x20; // 0x0
	::System::Boolean didDestroy; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* triggerList; // 0x20
	::System::Boolean useOtherObject; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER__CCTOR_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_ONDESTROY_OFFSET))(this);
	}

	::System::Void DoDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_DODESTROY_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_ONENABLE_OFFSET))(this);
	}

	::System::Void RegisterTriggers(::System::Collections::Generic::List_1<::System::Int32>* in_triggerList, ::AkTriggerBase_Trigger* in_delegate)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::AkTriggerBase_Trigger*))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_REGISTERTRIGGERS_OFFSET))(this, in_triggerList, in_delegate);
	}

	::System::Void UnregisterTriggers(::System::Collections::Generic::List_1<::System::Int32>* in_triggerList, ::AkTriggerBase_Trigger* in_delegate)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::AkTriggerBase_Trigger*))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_UNREGISTERTRIGGERS_OFFSET))(this, in_triggerList, in_delegate);
	}
};
