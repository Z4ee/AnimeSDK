#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class InteractionRangeParamFloat; }

#define MOLEMOLE_CONFIG_SKINPREVIEWDATAOFAVATAR_METHOD_1_56B6D479D20E3709_OFFSET UNITYSDK_OFFSET(0x11CB81D0)
#define MOLEMOLE_CONFIG_SKINPREVIEWDATAOFAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB81C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SkinPreviewDataOfAvatar_TypeDefinitionIndex = 42959;

	class SkinPreviewDataOfAvatar : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamRotation; // 0x10
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamCameraHeight; // 0x18
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamCameraDepth; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SKINPREVIEWDATAOFAVATAR__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::SkinPreviewDataOfAvatar* Method_1_56B6D479D20E3709()
		{
			return ((::MoleMole::Config::SkinPreviewDataOfAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SKINPREVIEWDATAOFAVATAR_METHOD_1_56B6D479D20E3709_OFFSET))(this);
		}
	};
}
