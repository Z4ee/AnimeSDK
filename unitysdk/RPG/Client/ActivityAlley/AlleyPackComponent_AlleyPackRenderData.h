#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKRENDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD14AB0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackRenderData_TypeDefinitionIndex = 73990;

	class AlleyPackComponent_AlleyPackRenderData : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* OriginMaterials; // 0x10
		::UnityEngine::Renderer* Renderer; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* GreenMaterials; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* RedMaterials; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKRENDERDATA__CTOR_OFFSET))(this);
		}
	};
}
