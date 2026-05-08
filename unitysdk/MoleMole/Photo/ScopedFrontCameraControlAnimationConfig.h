#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class FrontCameraAnimationGraphConfig; }
namespace MoleMole::Photo { class ReferenceSkeletonConfig; }

#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE5F80)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFrontCameraControlAnimationConfig_TypeDefinitionIndex = 38064;

	class ScopedFrontCameraControlAnimationConfig : public ::System::Object
	{
	public:
		::MoleMole::Photo::FrontCameraAnimationGraphConfig* graphConfig; // 0x10
		::MoleMole::Photo::ReferenceSkeletonConfig* skeleton; // 0x18
		::System::Single armUpSpeed; // 0x20
		::System::Single minArmRatio; // 0x24
		::System::Single maxArmRatio; // 0x28
		::System::Int32 clothIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
