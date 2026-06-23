#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_728ECF47979928D7;
namespace MoleMole::Engine { class MeshStreamingManager; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_CLASS_1_BCD6F7E0D2EAFF20_METHOD_1_8945464396F3B4FA_OFFSET UNITYSDK_OFFSET(0x1A390980)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_CLASS_1_BCD6F7E0D2EAFF20__CTOR_OFFSET UNITYSDK_OFFSET(0x1A390970)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int MeshStreamingManager_Class_1_BCD6F7E0D2EAFF20_TypeDefinitionIndex = 51128;

	class MeshStreamingManager_Class_1_BCD6F7E0D2EAFF20 : public ::System::Object
	{
	public:
		::MoleMole::Engine::MeshStreamingManager* Field_1_1; // 0x10
		::Class_1_728ECF47979928D7* Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_CLASS_1_BCD6F7E0D2EAFF20__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_8945464396F3B4FA(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_CLASS_1_BCD6F7E0D2EAFF20_METHOD_1_8945464396F3B4FA_OFFSET))(this, a1, a2);
		}
	};
}
