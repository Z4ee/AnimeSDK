#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_728ECF47979928D7;
namespace MoleMole::Engine { class MeshStreamingManager; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_CLASS_1_F9D9941572717B04_METHOD_1_8E646C0922BDDD5F_OFFSET UNITYSDK_OFFSET(0x118AA460)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_CLASS_1_F9D9941572717B04__CTOR_OFFSET UNITYSDK_OFFSET(0x118AA450)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int MeshStreamingManager_Class_1_F9D9941572717B04_TypeDefinitionIndex = 43100;

	class MeshStreamingManager_Class_1_F9D9941572717B04 : public ::System::Object
	{
	public:
		::Class_1_728ECF47979928D7* Field_1_1; // 0x10
		::MoleMole::Engine::MeshStreamingManager* Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_CLASS_1_F9D9941572717B04__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_8E646C0922BDDD5F(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_CLASS_1_F9D9941572717B04_METHOD_1_8E646C0922BDDD5F_OFFSET))(this, a1, a2);
		}
	};
}
