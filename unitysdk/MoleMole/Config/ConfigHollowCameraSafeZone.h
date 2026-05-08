#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowLayoutPlatform.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASAFEZONE_GETBORDER_OFFSET UNITYSDK_OFFSET(0x737F70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraSafeZone_TypeDefinitionIndex = 60957;

	struct alignas(8) ConfigHollowCameraSafeZone
	{
		::UnityEngine::Vector4 border; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HollowLayoutPlatform, ::UnityEngine::Vector4>* borders; // 0x20

		::UnityEngine::Vector4 GetBorder(::MoleMole::EUILayoutPlatform platform, ::System::Boolean useVirtualStick)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASAFEZONE_GETBORDER_OFFSET))(this, platform, useVirtualStick);
		}
	};
}
