#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define EMBREEDEBUGTOOL_RAYDEBUGINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB113FA0)
#define EMBREEDEBUGTOOL_RAYDEBUGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB113120)

inline static constexpr unsigned int EmbreeDebugTool_RayDebugInfo_TypeDefinitionIndex = 44779;

class EmbreeDebugTool_RayDebugInfo : public ::System::Object
{
public:
	::UnityEngine::Vector3 origin; // 0x10
	::UnityEngine::Vector3 direction; // 0x1C
	::System::Boolean hasHit; // 0x28
	::UnityEngine::Vector3 hitPosition; // 0x2C
	::UnityEngine::Vector3 hitNormal; // 0x38
	::System::Single distance; // 0x44
	::System::Boolean isFrontFace; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL_RAYDEBUGINFO__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL_RAYDEBUGINFO_TOSTRING_OFFSET))(this);
	}
};
