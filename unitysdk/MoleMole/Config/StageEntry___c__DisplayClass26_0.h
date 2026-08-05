#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/StageEntry_StreamingSceneType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class StageEntry; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_CONFIG_STAGEENTRY___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1626DB30)
#define MOLEMOLE_CONFIG_STAGEENTRY___C__DISPLAYCLASS26_0__LOADPERPSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1626DB40)
#define MOLEMOLE_CONFIG_STAGEENTRY___C__DISPLAYCLASS26_0__LOADPERPSTAGE_B__2_OFFSET UNITYSDK_OFFSET(0x1626DC90)
#define MOLEMOLE_CONFIG_STAGEENTRY___C__DISPLAYCLASS26_0__LOADPERPSTAGE_G__AFTERSCENELOAD_1_OFFSET UNITYSDK_OFFSET(0x1626DB70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StageEntry___c__DisplayClass26_0_TypeDefinitionIndex = 66323;

	class StageEntry___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::String* realSceneName; // 0x10
		::System::Action_1<::UnityEngine::GameObject*>* onLoadDone; // 0x18
		::MoleMole::Config::StageEntry* __4__this; // 0x20
		::MoleMole::Config::StageEntry_StreamingSceneType stype; // 0x28
		::System::UInt32 stageEntityID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadPerpStage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY___C__DISPLAYCLASS26_0__LOADPERPSTAGE_B__0_OFFSET))(this);
		}

		::System::Void _LoadPerpStage_g__AfterSceneLoad_1(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY___C__DISPLAYCLASS26_0__LOADPERPSTAGE_G__AFTERSCENELOAD_1_OFFSET))(this, asset, request);
		}

		::System::Void _LoadPerpStage_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRY___C__DISPLAYCLASS26_0__LOADPERPSTAGE_B__2_OFFSET))(this);
		}
	};
}
