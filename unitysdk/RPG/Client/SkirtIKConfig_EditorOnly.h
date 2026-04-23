#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CLIENT_SKIRTIKCONFIG_EDITORONLY__CTOR_OFFSET UNITYSDK_OFFSET(0xB191C10)

namespace RPG::Client
{
	inline static constexpr unsigned int SkirtIKConfig_EditorOnly_TypeDefinitionIndex = 63047;

	class SkirtIKConfig_EditorOnly : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKIRTIKCONFIG_EDITORONLY__CTOR_OFFSET))(this);
		}
	};
}
