#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define LOADJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA8200)

inline static constexpr unsigned int LoadJson_TypeDefinitionIndex = 45800;

class LoadJson : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* path; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADJSON__CTOR_OFFSET))(this);
	}
};
