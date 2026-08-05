#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_MATERIALLODITEM_METHOD_1_656B064938A6B4A1_OFFSET UNITYSDK_OFFSET(0x1B522780)
#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_MATERIALLODITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B522410)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int NapSceneOptimizeManager_MaterialLodItem_TypeDefinitionIndex = 89286;

	class NapSceneOptimizeManager_MaterialLodItem : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* renderItems; // 0x10
		::Il2CppArray<::System::Int32>* linkedIndex; // 0x18

		::System::Void _ctor(::UnityEngine::MeshRenderer* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_MATERIALLODITEM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_656B064938A6B4A1(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_MATERIALLODITEM_METHOD_1_656B064938A6B4A1_OFFSET))(this, a1);
		}
	};
}
