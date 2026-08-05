#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::SceneMark::DynamicObject { class DynamicObjectCollector_GameObjectKeyValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BAKEREFMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x13990080)

inline static constexpr unsigned int BakeRefManager_TypeDefinitionIndex = 54102;

class BakeRefManager : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean showNotUsageFeature; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* additionSceneProp; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* forceNotGenSceneProp; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* disableOnBakeHeightmapObjs; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* disableOnBakeNavmesh; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::SceneMark::DynamicObject::DynamicObjectCollector_GameObjectKeyValue*>* collectObjects; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKEREFMANAGER__CTOR_OFFSET))(this);
	}
};
