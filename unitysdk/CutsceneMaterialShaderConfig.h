#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class CutsceneMaterialShaderConfig_ShaderPropertyConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CUTSCENEMATERIALSHADERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3855D0)

inline static constexpr unsigned int CutsceneMaterialShaderConfig_TypeDefinitionIndex = 30569;

class CutsceneMaterialShaderConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::CutsceneMaterialShaderConfig_ShaderPropertyConfig*>* Properties; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUTSCENEMATERIALSHADERCONFIG__CTOR_OFFSET))(this);
	}
};
