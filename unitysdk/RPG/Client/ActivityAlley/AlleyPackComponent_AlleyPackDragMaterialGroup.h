#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGMATERIALGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EDBEE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGMATERIALGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x8EDBEA0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackDragMaterialGroup_TypeDefinitionIndex = 60746;

	class AlleyPackComponent_AlleyPackDragMaterialGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* GreenMaterials; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* RedMaterials; // 0x18

		::System::Void _ctor(::System::Int32 materialsCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGMATERIALGROUP__CTOR_OFFSET))(this, materialsCount);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGMATERIALGROUP_DISPOSE_OFFSET))(this);
		}
	};
}
