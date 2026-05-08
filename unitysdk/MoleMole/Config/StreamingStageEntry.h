#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/StageEntry.h"

class Class_1_8C28E085C991E9A7;
namespace MoleMole { class MonoStageEnv; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x181DEE70)
#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x181DEE60)
#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_GET_STAGESCENEPATH_OFFSET UNITYSDK_OFFSET(0x181DEE50)
#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_LOADSTAGEENV_OFFSET UNITYSDK_OFFSET(0x181DEF20)
#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x181DEF10)
#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY___BASE_LOADSTAGEENV_OFFSET UNITYSDK_OFFSET(0x181DF3E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StreamingStageEntry_TypeDefinitionIndex = 80491;

	class StreamingStageEntry : public ::MoleMole::Config::StageEntry
	{
	public:
		::System::String* _sceneName; // 0x80
		::Class_1_8C28E085C991E9A7* _sceneData; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_StageScenePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_GET_STAGESCENEPATH_OFFSET))(this);
		}

		::System::Object* get_CustomData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_GET_CUSTOMDATA_OFFSET))(this);
		}

		static ::MoleMole::Config::StreamingStageEntry* Allocate(::System::String* sceneName, ::Class_1_8C28E085C991E9A7* streamingSceneData)
		{
			return ((::MoleMole::Config::StreamingStageEntry*(*)(::System::String*, ::Class_1_8C28E085C991E9A7*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_ALLOCATE_OFFSET))(sceneName, streamingSceneData);
		}

		::MoleMole::MonoStageEnv* LoadStageEnv()
		{
			return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_LOADSTAGEENV_OFFSET))(this);
		}

		::MoleMole::MonoStageEnv* __base_LoadStageEnv()
		{
			return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY___BASE_LOADSTAGEENV_OFFSET))(this);
		}
	};
}
