#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData_RuntimeMainPage3DInfo_TypeDefinitionIndex = 82016;

	struct alignas(8) ConfigUIAvatarShowData_RuntimeMainPage3DInfo
	{
		::System::String* avatarMainPagePrefabPath; // 0x10
		::System::Int32 cameraPerformType; // 0x18
		::System::String* animationClipPath; // 0x20
		::System::String* animatorControllerPath; // 0x28
		::System::String* avatarShowPrefabPath; // 0x30
		::UnityEngine::Vector2 cameraClippingPlanes; // 0x38
	};
}
