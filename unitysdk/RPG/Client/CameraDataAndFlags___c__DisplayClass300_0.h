#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LevelDirector; }
namespace RPG::GameCore { class VCameraBlend; }

#define RPG_CLIENT_CAMERADATAANDFLAGS___C__DISPLAYCLASS300_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C854550)
#define RPG_CLIENT_CAMERADATAANDFLAGS___C__DISPLAYCLASS300_0__SETBLENDCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x1C855540)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags___c__DisplayClass300_0_TypeDefinitionIndex = 69524;

	class CameraDataAndFlags___c__DisplayClass300_0 : public ::System::Object
	{
	public:
		::RPG::Client::LevelDirector* pLevelDirector; // 0x10
		::RPG::GameCore::VCameraBlend* config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS___C__DISPLAYCLASS300_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetBlendConfig_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS___C__DISPLAYCLASS300_0__SETBLENDCONFIG_B__0_OFFSET))(this);
		}
	};
}
