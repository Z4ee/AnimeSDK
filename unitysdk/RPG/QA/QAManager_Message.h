#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_QA_QAMANAGER_MESSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE2EE0)
#define RPG_QA_QAMANAGER_MESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE2EC0)
#define RPG_QA_QAMANAGER_MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE2EA0)

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager_Message_TypeDefinitionIndex = 47831;

	struct alignas(8) QAManager_Message
	{
		::System::String* Type; // 0x10
		::System::String* Title; // 0x18
		::System::String* Detail; // 0x20
		::System::String* ScreenCapture; // 0x28

		::System::Void _ctor(::System::String* type, ::System::String* title, ::System::String* detail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_MESSAGE__CTOR_OFFSET))(this, type, title, detail);
		}

		::System::Void _ctor_1(::System::String* type, ::System::String* title, ::System::String* detail, ::System::String* screenCapture)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_MESSAGE__CTOR_1_OFFSET))(this, type, title, detail, screenCapture);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_MESSAGE_GETHASHCODE_OFFSET))(this);
		}
	};
}
