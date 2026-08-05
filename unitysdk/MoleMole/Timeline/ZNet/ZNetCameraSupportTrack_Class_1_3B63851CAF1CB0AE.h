#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::ZNet { class ZNetCameraSupportPlayableAsset; }
namespace UnityEngine::Timeline { class AnimationTrack; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK_CLASS_1_3B63851CAF1CB0AE_METHOD_1_7302DBE607E714A4_OFFSET UNITYSDK_OFFSET(0x1B21F860)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK_CLASS_1_3B63851CAF1CB0AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21F850)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetCameraSupportTrack_Class_1_3B63851CAF1CB0AE_TypeDefinitionIndex = 40489;

	class ZNetCameraSupportTrack_Class_1_3B63851CAF1CB0AE : public ::System::Object
	{
	public:
		::MoleMole::Timeline::ZNet::ZNetCameraSupportPlayableAsset* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK_CLASS_1_3B63851CAF1CB0AE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_7302DBE607E714A4(::UnityEngine::Timeline::AnimationTrack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK_CLASS_1_3B63851CAF1CB0AE_METHOD_1_7302DBE607E714A4_OFFSET))(this, a1);
		}
	};
}
