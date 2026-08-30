#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENEARTPREFABEXPORTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3E8C0)

inline static constexpr unsigned int SceneArtPrefabExportConfig_TypeDefinitionIndex = 47968;

class SceneArtPrefabExportConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::System::String*>* MonoContainBlackList; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* NameContainBlackList; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEARTPREFABEXPORTCONFIG__CTOR_OFFSET))(this);
	}
};
