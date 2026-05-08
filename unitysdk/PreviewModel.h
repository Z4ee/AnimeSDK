#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define PREVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C22F360)

inline static constexpr unsigned int PreviewModel_TypeDefinitionIndex = 36439;

class PreviewModel : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* avatarShow; // 0x18
	::System::String* avatarPath; // 0x20
	::System::Boolean isPrefab; // 0x28
	::UnityEngine::Rendering::Universal::VisualEnvironmentE* volum; // 0x30
	::System::Boolean showErrorDialog; // 0x38
	::System::Boolean hasShowError; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREVIEWMODEL__CTOR_OFFSET))(this);
	}
};
