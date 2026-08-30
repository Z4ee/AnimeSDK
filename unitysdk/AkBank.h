#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerHandler.h"

namespace AK::Wwise { class Bank; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AKBANK_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EEB1CD0)
#define AKBANK_GET_BANKNAME_OFFSET UNITYSDK_OFFSET(0x1EEB2080)
#define AKBANK_GET_VALUEGUID_OFFSET UNITYSDK_OFFSET(0x1EEB20E0)
#define AKBANK_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1EEB1F10)
#define AKBANK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1EEB1F90)
#define AKBANK_START_OFFSET UNITYSDK_OFFSET(0x1EEB1D90)
#define AKBANK_UNLOADBANK_OFFSET UNITYSDK_OFFSET(0x1EEB1EB0)
#define AKBANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB2220)

inline static constexpr unsigned int AkBank_TypeDefinitionIndex = 43722;

class AkBank : public ::AkTriggerHandler
{
public:
	::AK::Wwise::Bank* data; // 0x30
	::System::Boolean decodeBank; // 0x38
	::System::Boolean loadAsynchronous; // 0x39
	::System::Boolean saveDecodedBank; // 0x3A
	::System::Collections::Generic::List_1<::System::Int32>* unloadTriggerList; // 0x40
	::System::String* bankNameInternal; // 0x48
	::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_START_OFFSET))(this);
	}

	::System::Void HandleEvent(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKBANK_HANDLEEVENT_OFFSET))(this, a1);
	}

	::System::Void UnloadBank(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKBANK_UNLOADBANK_OFFSET))(this, a1);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_ONDESTROY_OFFSET))(this);
	}

	::System::String* get_bankName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_GET_BANKNAME_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* get_valueGuid()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_GET_VALUEGUID_OFFSET))(this);
	}
};
