#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTBEHAVIOR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x173BFD20)
#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x173BF970)
#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x173BFD10)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetWeaponSupportBehavior_TypeDefinitionIndex = 44513;

	class ZNetWeaponSupportBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single rotateSpeed; // 0x10
		::UnityEngine::Vector3 initRot; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTBEHAVIOR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTBEHAVIOR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}
	};
}
