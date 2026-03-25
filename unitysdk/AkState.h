#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkDragDropTriggerHandler.h"

namespace AK::Wwise { class BaseType; }
namespace AK::Wwise { class State; }
namespace UnityEngine { class GameObject; }

#define AKSTATE_GET_GROUPGUID_OFFSET UNITYSDK_OFFSET(0x18C22A70)
#define AKSTATE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18C228B0)
#define AKSTATE_GET_VALUEGUID_OFFSET UNITYSDK_OFFSET(0x18C22910)
#define AKSTATE_GET_VALUEID_OFFSET UNITYSDK_OFFSET(0x18C22830)
#define AKSTATE_GET_WWISETYPE_OFFSET UNITYSDK_OFFSET(0x18C22640)
#define AKSTATE_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x18C227D0)
#define AKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C22BD0)

inline static constexpr unsigned int AkState_TypeDefinitionIndex = 34691;

class AkState : public ::AkDragDropTriggerHandler
{
public:
	::AK::Wwise::State* data; // 0x30
	::System::Int32 valueIdInternal; // 0x38
	::System::Int32 groupIdInternal; // 0x3C
	::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x40
	::Il2CppArray<::System::Byte>* groupGuidInternal; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE__CTOR_OFFSET))(this);
	}

	::AK::Wwise::BaseType* get_WwiseType()
	{
		return ((::AK::Wwise::BaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_GET_WWISETYPE_OFFSET))(this);
	}

	::System::Void HandleEvent(::UnityEngine::GameObject* in_gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKSTATE_HANDLEEVENT_OFFSET))(this, in_gameObject);
	}

	::System::Int32 get_valueID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_GET_VALUEID_OFFSET))(this);
	}

	::System::Int32 get_groupID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_GET_GROUPID_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* get_valueGuid()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_GET_VALUEGUID_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* get_groupGuid()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_GET_GROUPGUID_OFFSET))(this);
	}
};
