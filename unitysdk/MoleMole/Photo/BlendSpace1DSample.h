#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_PHOTO_BLENDSPACE1DSAMPLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x136E8790)
#define MOLEMOLE_PHOTO_BLENDSPACE1DSAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x136E8900)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int BlendSpace1DSample_TypeDefinitionIndex = 69881;

	class BlendSpace1DSample : public ::System::Object
	{
	public:
		::UnityEngine::AnimationClip* animation; // 0x10
		::System::Single sampleTime; // 0x18
		::System::Single playRate; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_BLENDSPACE1DSAMPLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_BLENDSPACE1DSAMPLE_GET_ISVALID_OFFSET))(this);
		}
	};
}
