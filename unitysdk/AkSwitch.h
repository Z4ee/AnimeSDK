#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkDragDropTriggerHandler.h"

namespace AK::Wwise { class BaseType; }
namespace AK::Wwise { class Switch; }
namespace UnityEngine { class GameObject; }

#define AKSWITCH_GET_GROUPGUID_OFFSET UNITYSDK_OFFSET(0x1B4AE630)
#define AKSWITCH_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B4AE4F0)
#define AKSWITCH_GET_VALUEGUID_OFFSET UNITYSDK_OFFSET(0x1B4AE550)
#define AKSWITCH_GET_VALUEID_OFFSET UNITYSDK_OFFSET(0x1B4AE470)
#define AKSWITCH_GET_WWISETYPE_OFFSET UNITYSDK_OFFSET(0x1B4AE3B0)
#define AKSWITCH_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1B4AE3F0)
#define AKSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AE790)

inline static constexpr unsigned int AkSwitch_TypeDefinitionIndex = 41339;

class AkSwitch : public ::AkDragDropTriggerHandler
{
public:
	::AK::Wwise::Switch* data; // 0x30
	::System::Int32 valueIdInternal; // 0x38
	::System::Int32 groupIdInternal; // 0x3C
	::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x40
	::Il2CppArray<::System::Byte>* groupGuidInternal; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSWITCH__CTOR_OFFSET))(this);
	}

	::AK::Wwise::BaseType* get_WwiseType()
	{
		return ((::AK::Wwise::BaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSWITCH_GET_WWISETYPE_OFFSET))(this);
	}

	::System::Void HandleEvent(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKSWITCH_HANDLEEVENT_OFFSET))(this, a1);
	}

	::System::Int32 get_valueID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSWITCH_GET_VALUEID_OFFSET))(this);
	}

	::System::Int32 get_groupID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSWITCH_GET_GROUPID_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* get_valueGuid()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSWITCH_GET_VALUEGUID_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* get_groupGuid()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSWITCH_GET_GROUPGUID_OFFSET))(this);
	}
};
