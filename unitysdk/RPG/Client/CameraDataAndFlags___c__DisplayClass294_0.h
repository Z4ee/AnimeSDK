#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LevelDirector; }
namespace RPG::GameCore { class VCameraBlend; }

#define RPG_CLIENT_CAMERADATAANDFLAGS___C__DISPLAYCLASS294_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B6620)
#define RPG_CLIENT_CAMERADATAANDFLAGS___C__DISPLAYCLASS294_0__SETBLENDCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0xB4B7200)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags___c__DisplayClass294_0_TypeDefinitionIndex = 65026;

	class CameraDataAndFlags___c__DisplayClass294_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraBlend* config; // 0x10
		::RPG::Client::LevelDirector* pLevelDirector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS___C__DISPLAYCLASS294_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetBlendConfig_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS___C__DISPLAYCLASS294_0__SETBLENDCONFIG_B__0_OFFSET))(this);
		}
	};
}
