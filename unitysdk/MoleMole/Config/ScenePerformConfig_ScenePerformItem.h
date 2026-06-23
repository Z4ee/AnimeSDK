#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class IScenePerformConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x161A0970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScenePerformConfig_ScenePerformItem_TypeDefinitionIndex = 68474;

	class ScenePerformConfig_ScenePerformItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::IScenePerformConfig*>* PlaySequence; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMITEM__CTOR_OFFSET))(this);
		}
	};
}
