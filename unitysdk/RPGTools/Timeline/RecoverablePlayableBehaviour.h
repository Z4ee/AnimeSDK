#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_METHOD_2_786596606D75395C_OFFSET UNITYSDK_OFFSET(0xB90D2E0)
#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xB90D510)
#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB90D4C0)
#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xB90D250)
#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB90D5A0)
#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR___IFIXBASEPROXY_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xB90D5B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RecoverablePlayableBehaviour_TypeDefinitionIndex = 45208;

	class RecoverablePlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Int32 _ProcessFrameCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_786596606D75395C(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_METHOD_2_786596606D75395C_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_B387E1AED8A8F880()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_PrepareFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR___IFIXBASEPROXY_PREPAREFRAME_OFFSET))(this, P0, P1);
		}
	};
}
