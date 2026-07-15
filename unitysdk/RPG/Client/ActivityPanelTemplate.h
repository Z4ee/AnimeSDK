#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPanelTemplate_TypeDefinitionIndex = 58951;

	struct alignas(8) ActivityPanelTemplate
	{
		::System::Type* PanelDataType; // 0x10
		::System::String* LuaPanelPath; // 0x18
		::System::String* LuaPanelBinderPath; // 0x20
		::System::Boolean DataValid; // 0x28
	};
}
