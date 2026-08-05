#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowCameraSerializeField_TypeDefinitionIndex = 40574;

	struct alignas(4) HollowCameraSerializeField
	{
		::MoleMole::UICameraAtom InitAtom; // 0x10
		::MoleMole::UICameraAtom TargetAtom; // 0x30
		::System::Nullable_1<::UnityEngine::Vector2> CameraCenter; // 0x50
	};
}
