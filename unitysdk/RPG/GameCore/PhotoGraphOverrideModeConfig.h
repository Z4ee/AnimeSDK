#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHOVERRIDEMODECONFIG_METHOD_2_23A3D134F7763D34_OFFSET UNITYSDK_OFFSET(0x1D32CA20)
#define RPG_GAMECORE_PHOTOGRAPHOVERRIDEMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D32CFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphOverrideModeConfig_TypeDefinitionIndex = 21391;

	class PhotoGraphOverrideModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExitWhenPreViewDialogFinish; // 0x10
		::System::Boolean SkipPhotoPreviewDialog; // 0x11
		::RPG::GameCore::DynamicFloat* IdentifyRadiusOverride; // 0x18
		::System::Single IdentifyMaxExitDistance; // 0x20
		::RPG::GameCore::TargetEvaluator* IdentifyLookAt; // 0x28
		::System::Single InitFov; // 0x30
		::System::String* ToastTemplate; // 0x38
		::RPG::Client::TextID SuccessToastText; // 0x40
		::RPG::Client::TextID FailToastText; // 0x50
		::System::Boolean ShowFinishToastManually; // 0x60
		::System::Single OverrideMaxFov; // 0x64
		::System::Single OverrideMinFov; // 0x68
		::System::Boolean IsSimpleConfig; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHOVERRIDEMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_23A3D134F7763D34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphOverrideModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphOverrideModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHOVERRIDEMODECONFIG_METHOD_2_23A3D134F7763D34_OFFSET))(a1, a2);
		}
	};
}
