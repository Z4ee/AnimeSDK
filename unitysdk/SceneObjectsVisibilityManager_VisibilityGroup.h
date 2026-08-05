#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define SCENEOBJECTSVISIBILITYMANAGER_VISIBILITYGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5037C0)

inline static constexpr unsigned int SceneObjectsVisibilityManager_VisibilityGroup_TypeDefinitionIndex = 57126;

class SceneObjectsVisibilityManager_VisibilityGroup : public ::System::Object
{
public:
	::System::String* key; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objects; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_VISIBILITYGROUP__CTOR_OFFSET))(this);
	}
};
