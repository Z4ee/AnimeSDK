#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraArrangementModelInstance; }
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_Config; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x189CFC70)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x189CFFB0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x189CFBD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementModelsPool_TypeDefinitionIndex = 77985;

	class ChimeraArrangementModelsPool : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraArrangementModelInstance_Config* _Config; // 0x10
		::UnityEngine::GameObject* _Prefab; // 0x18
		::UnityEngine::Transform* _Root; // 0x20
		::System::Collections::Generic::Queue_1<::RPG::Client::Prop::ChimeraArrangementModelInstance*>* _ChimeraInstances; // 0x28

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::RPG::Client::Prop::ChimeraArrangementModelInstance_Config* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::RPG::Client::Prop::ChimeraArrangementModelInstance_Config*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Prop::ChimeraArrangementModelInstance* Acquire(::System::UInt32 a1)
		{
			return ((::RPG::Client::Prop::ChimeraArrangementModelInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL_ACQUIRE_OFFSET))(this, a1);
		}

		::System::Void Release(::RPG::Client::Prop::ChimeraArrangementModelInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELSPOOL_RELEASE_OFFSET))(this, a1);
		}
	};
}
