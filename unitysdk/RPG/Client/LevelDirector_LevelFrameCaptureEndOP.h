#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class RawImage; }

#define RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMECAPTUREENDOP_ONFRAMECAPTUREEND_OFFSET UNITYSDK_OFFSET(0xA666640)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMECAPTUREENDOP__CTOR_OFFSET UNITYSDK_OFFSET(0xA6665D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LevelDirector_LevelFrameCaptureEndOP_TypeDefinitionIndex = 54701;

	class LevelDirector_LevelFrameCaptureEndOP : public ::System::Object
	{
	public:
		::UnityEngine::UI::RawImage* RTOwner; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMECAPTUREENDOP__CTOR_OFFSET))(this);
		}

		::System::Void OnFrameCaptureEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMECAPTUREENDOP_ONFRAMECAPTUREEND_OFFSET))(this);
		}
	};
}
