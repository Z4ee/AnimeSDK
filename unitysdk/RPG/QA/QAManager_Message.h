#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_QA_QAMANAGER_MESSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B1A880)
#define RPG_QA_QAMANAGER_MESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x37AC3F0)
#define RPG_QA_QAMANAGER_MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x3B1A860)

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager_Message_TypeDefinitionIndex = 52110;

	struct alignas(8) QAManager_Message
	{
		::System::String* Type; // 0x10
		::System::String* Title; // 0x18
		::System::String* Detail; // 0x20
		::System::String* ScreenCapture; // 0x28

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_MESSAGE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_MESSAGE__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_MESSAGE_GETHASHCODE_OFFSET))(this);
		}
	};
}
