#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNativeEditBox_EditBoxConfig_TypeDefinitionIndex = 67954;

	struct alignas(8) MonoNativeEditBox_EditBoxConfig
	{
		::System::Boolean multiline; // 0x10
		::UnityEngine::Color textColor; // 0x14
		::UnityEngine::Color backColor; // 0x24
		::System::String* contentType; // 0x38
		::System::String* font; // 0x40
		::System::Single fontSize; // 0x48
		::System::String* align; // 0x50
		::System::String* placeHolder; // 0x58
		::System::Int32 characterLimit; // 0x60
		::UnityEngine::Color placeHolderColor; // 0x64
	};
}
