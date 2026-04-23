#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraArrangementModelInstance; }
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_Config; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL_ACQUIRE_OFFSET UNITYSDK_OFFSET(0xADB0240)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0xADB06A0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xADB01A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementModelsPool_TypeDefinitionIndex = 71953;

	class ChimeraArrangementModelsPool : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraArrangementModelInstance_Config* _Config; // 0x10
		::UnityEngine::Transform* _Root; // 0x18
		::UnityEngine::GameObject* _Prefab; // 0x20
		::System::Collections::Generic::Queue_1<::RPG::Client::Prop::ChimeraArrangementModelInstance*>* _ChimeraInstances; // 0x28

		::System::Void _ctor(::UnityEngine::GameObject* prefab, ::UnityEngine::Transform* root, ::RPG::Client::Prop::ChimeraArrangementModelInstance_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::RPG::Client::Prop::ChimeraArrangementModelInstance_Config*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL__CTOR_OFFSET))(this, prefab, root, config);
		}

		::RPG::Client::Prop::ChimeraArrangementModelInstance* Acquire(::System::UInt32 chimeraID)
		{
			return ((::RPG::Client::Prop::ChimeraArrangementModelInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL_ACQUIRE_OFFSET))(this, chimeraID);
		}

		::System::Void Release(::RPG::Client::Prop::ChimeraArrangementModelInstance* chimeraInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL_RELEASE_OFFSET))(this, chimeraInstance);
		}
	};
}
