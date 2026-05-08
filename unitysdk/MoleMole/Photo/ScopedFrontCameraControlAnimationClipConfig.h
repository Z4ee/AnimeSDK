#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/PlayAnimationClipSubGraphConfig_1.h"

class Class_1_85E1FCC6DF9961D3;

#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONCLIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B14B50)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFrontCameraControlAnimationClipConfig_TypeDefinitionIndex = 73335;

	class ScopedFrontCameraControlAnimationClipConfig : public ::MoleMole::Photo::PlayAnimationClipSubGraphConfig_1<::Class_1_85E1FCC6DF9961D3*>
	{
	public:
		::System::Single blendIn; // 0x28
		::System::Single blendOut; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONCLIPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
