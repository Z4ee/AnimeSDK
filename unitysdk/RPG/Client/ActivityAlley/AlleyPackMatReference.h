#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKMATREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD27630)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackMatReference_TypeDefinitionIndex = 74022;

	class AlleyPackMatReference : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* originMaterials; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* redMaterials; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* greenMaterials; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKMATREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
