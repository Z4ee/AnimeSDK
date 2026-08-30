#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEU_ScriptMeshInputUVLayoutExample_OutputMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HEU_SCRIPTMESHINPUTUVLAYOUTEXAMPLE_APPLYUVLAYOUTTO_OFFSET UNITYSDK_OFFSET(0x1B3BC080)
#define HEU_SCRIPTMESHINPUTUVLAYOUTEXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C1600)

inline static constexpr unsigned int HEU_ScriptMeshInputUVLayoutExample_TypeDefinitionIndex = 39054;

class HEU_ScriptMeshInputUVLayoutExample : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_SCRIPTMESHINPUTUVLAYOUTEXAMPLE__CTOR_OFFSET))(this);
	}

	static ::System::Void ApplyUVLayoutTo(::Il2CppArray<::UnityEngine::GameObject*>* a1, ::HEU_ScriptMeshInputUVLayoutExample_OutputMode a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GameObject*>*, ::HEU_ScriptMeshInputUVLayoutExample_OutputMode, ::System::String*))((::PBYTE)hIl2Cpp + HEU_SCRIPTMESHINPUTUVLAYOUTEXAMPLE_APPLYUVLAYOUTTO_OFFSET))(a1, a2, a3);
	}
};
