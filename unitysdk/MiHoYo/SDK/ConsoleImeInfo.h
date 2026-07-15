#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/InputField_ContentType.h"

namespace System { class String; }

#define MIHOYO_SDK_CONSOLEIMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA2F4E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleImeInfo_TypeDefinitionIndex = 7824;

	class ConsoleImeInfo : public ::System::Object
	{
	public:
		::System::String* placeholder; // 0x10
		::System::String* description; // 0x18
		::System::String* title; // 0x20
		::System::String* defaultValue; // 0x28
		::UnityEngine::UI::InputField_ContentType imeType; // 0x30
		::System::Int32 maxLength; // 0x34
		::System::Boolean isMultiLine; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEIMEINFO__CTOR_OFFSET))(this);
		}
	};
}
