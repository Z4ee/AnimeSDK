#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FindAnchorConfig; }

#define RPG_GAMECORE_PHOTOGRAPHCONTROLCONFIG_METHOD_2_3BD79762A15F28DD_OFFSET UNITYSDK_OFFSET(0x1B4C0420)
#define RPG_GAMECORE_PHOTOGRAPHCONTROLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C0710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphControlConfig_TypeDefinitionIndex = 20829;

	class PhotoGraphControlConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ResetPlayerPosition; // 0x10
		::System::Boolean Keep3CCameraRotation; // 0x11
		::RPG::GameCore::FindAnchorConfig* AnchorConfig; // 0x18
		::System::Single OverrideCameraHeight; // 0x20
		::RPG::GameCore::BodySize OverrideCameraHeightByBodySize; // 0x24
		::System::Boolean LockPlayerMove; // 0x28
		::System::Boolean LockCameraRotate; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHCONTROLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3BD79762A15F28DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphControlConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphControlConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHCONTROLCONFIG_METHOD_2_3BD79762A15F28DD_OFFSET))(a1, a2);
		}
	};
}
