#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define NPCCROWDAVATARUTILS_CROWDAVATARSHADERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB3F00)

inline static constexpr unsigned int NPCCrowdAvatarUtils_CrowdAvatarShaderInfo_TypeDefinitionIndex = 70114;

class NPCCrowdAvatarUtils_CrowdAvatarShaderInfo : public ::System::Object
{
public:
	::System::String* CrowdShaderMatPath; // 0x10
	::UnityEngine::Material* CrowdMat; // 0x18
	::System::String* StandShaderName; // 0x20
	::System::String* CrowdShaderName; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS_CROWDAVATARSHADERINFO__CTOR_OFFSET))(this);
	}
};
