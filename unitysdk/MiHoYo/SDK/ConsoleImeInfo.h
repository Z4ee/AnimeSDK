#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/InputField_ContentType.h"

namespace System { class String; }

#define MIHOYO_SDK_CONSOLEIMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB4E50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleImeInfo_TypeDefinitionIndex = 6873;

	class ConsoleImeInfo : public ::System::Object
	{
	public:
		::System::String* description; // 0x10
		::System::String* defaultValue; // 0x18
		::System::String* title; // 0x20
		::System::String* placeholder; // 0x28
		::System::Int32 maxLength; // 0x30
		::System::Boolean isMultiLine; // 0x34
		::UnityEngine::UI::InputField_ContentType imeType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEIMEINFO__CTOR_OFFSET))(this);
		}
	};
}
