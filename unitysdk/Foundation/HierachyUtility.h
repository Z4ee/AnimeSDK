#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_HIERACHYUTILITY_GETBYHIERACHYPATH_OFFSET UNITYSDK_OFFSET(0x1ED8CF90)
#define FOUNDATION_HIERACHYUTILITY_GETHIERARCHYPATH_OFFSET UNITYSDK_OFFSET(0x1ED8DC60)
#define FOUNDATION_HIERACHYUTILITY_GETORCREATEBYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1ED8D900)
#define FOUNDATION_HIERACHYUTILITY_GETORCREATEBYHIERACHYPATH_OFFSET UNITYSDK_OFFSET(0x1ED8D0B0)

namespace Foundation
{
	inline static constexpr unsigned int HierachyUtility_TypeDefinitionIndex = 8078;

	class HierachyUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* GetByHierachyPath(::Il2CppArray<::System::String*>* param)
		{
			return ((::UnityEngine::GameObject*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_HIERACHYUTILITY_GETBYHIERACHYPATH_OFFSET))(param);
		}

		static ::UnityEngine::GameObject* GetOrCreateByHierachyPath(::Il2CppArray<::System::String*>* param)
		{
			return ((::UnityEngine::GameObject*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_HIERACHYUTILITY_GETORCREATEBYHIERACHYPATH_OFFSET))(param);
		}

		static ::UnityEngine::GameObject* GetOrCreateByGameObject(::UnityEngine::GameObject* go, ::System::String* childname)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_HIERACHYUTILITY_GETORCREATEBYGAMEOBJECT_OFFSET))(go, childname);
		}

		static ::System::String* GetHierarchyPath(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_HIERACHYUTILITY_GETHIERARCHYPATH_OFFSET))(gameObject);
		}
	};
}
