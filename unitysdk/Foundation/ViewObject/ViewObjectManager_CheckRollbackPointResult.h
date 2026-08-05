#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_CheckRollbackPointResult_TypeDefinitionIndex = 55557;

	struct alignas(4) ViewObjectManager_CheckRollbackPointResult
	{
		::System::Boolean safetyModeCheck; // 0x10
		::System::Boolean unstableAreaCheck; // 0x11
		::System::Boolean cdCheck; // 0x12
		::System::Boolean navMeshCheck; // 0x13
		::UnityEngine::Vector3 navMeshPos; // 0x14
		::System::Boolean isHackControllable; // 0x20
	};
}
