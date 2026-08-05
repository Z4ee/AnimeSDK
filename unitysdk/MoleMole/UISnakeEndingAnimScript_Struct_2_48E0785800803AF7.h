#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_STRUCT_2_48E0785800803AF7_METHOD_2_DFE8217DFAECE9D2_OFFSET UNITYSDK_OFFSET(0xAA9220)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_STRUCT_2_48E0785800803AF7__CTOR_OFFSET UNITYSDK_OFFSET(0xAA9200)

namespace MoleMole
{
	inline static constexpr unsigned int UISnakeEndingAnimScript_Struct_2_48E0785800803AF7_TypeDefinitionIndex = 94913;

	struct alignas(8) UISnakeEndingAnimScript_Struct_2_48E0785800803AF7
	{
		::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x10
		::System::String* Field_2_7; // 0x18
		::System::String* Field_2_6; // 0x20
		::System::Boolean Field_2_5; // 0x28

		::System::Void _ctor(::UnityEngine::UI::Extension::UILocalizationText* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_STRUCT_2_48E0785800803AF7__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_2_DFE8217DFAECE9D2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_STRUCT_2_48E0785800803AF7_METHOD_2_DFE8217DFAECE9D2_OFFSET))(this, a1);
		}
	};
}
