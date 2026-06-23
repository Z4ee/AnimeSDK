#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CameraStoryDataEntry; }
namespace Nap::NapECS { class EcsWorld; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2F690)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__DISPLAYCLASS9_0__GETCONFIGINTERNAL_B__0_OFFSET UNITYSDK_OFFSET(0x18F2F6A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStoryDatas___c__DisplayClass9_0_TypeDefinitionIndex = 56763;

	class ConfigCameraStoryDatas___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsWorld* world; // 0x10
		::System::UInt32 playerId; // 0x18
		::System::UInt32 npcId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetConfigInternal_b__0(::MoleMole::Config::CameraStoryDataEntry* entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CameraStoryDataEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__DISPLAYCLASS9_0__GETCONFIGINTERNAL_B__0_OFFSET))(this, entry);
		}
	};
}
