#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEU_ScriptMeshInputUVLayoutExample_OutputMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HEU_SCRIPTMESHINPUTUVLAYOUTEXAMPLE_APPLYUVLAYOUTTO_OFFSET UNITYSDK_OFFSET(0x8C0F4D0)
#define HEU_SCRIPTMESHINPUTUVLAYOUTEXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0FE20)

inline static constexpr unsigned int HEU_ScriptMeshInputUVLayoutExample_TypeDefinitionIndex = 40918;

class HEU_ScriptMeshInputUVLayoutExample : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_SCRIPTMESHINPUTUVLAYOUTEXAMPLE__CTOR_OFFSET))(this);
	}

	static ::System::Void ApplyUVLayoutTo(::Il2CppArray<::UnityEngine::GameObject*>* gameObjects, ::HEU_ScriptMeshInputUVLayoutExample_OutputMode outputMode, ::System::String* output_name_suffix)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GameObject*>*, ::HEU_ScriptMeshInputUVLayoutExample_OutputMode, ::System::String*))((::PBYTE)hIl2Cpp + HEU_SCRIPTMESHINPUTUVLAYOUTEXAMPLE_APPLYUVLAYOUTTO_OFFSET))(gameObjects, outputMode, output_name_suffix);
	}
};
