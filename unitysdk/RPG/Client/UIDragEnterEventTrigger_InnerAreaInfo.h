#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_INNERAREAINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE358D10)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_INNERAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE358070)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragEnterEventTrigger_InnerAreaInfo_TypeDefinitionIndex = 72972;

	class UIDragEnterEventTrigger_InnerAreaInfo : public ::System::Object
	{
	public:
		::System::Object* UserObjectData; // 0x10
		::UnityEngine::GameObject* GameObject; // 0x18
		::UnityEngine::Rect ScreenRect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_INNERAREAINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_INNERAREAINFO_GET_ISACTIVE_OFFSET))(this);
		}
	};
}
