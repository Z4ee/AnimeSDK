#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_TOPNodeData; }

#define HOUDINIENGINEUNITY_HEU_PDGCOOKEDEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2D280)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGCookedEventData_TypeDefinitionIndex = 37567;

	class HEU_PDGCookedEventData : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_TOPNodeData* TopNodeData; // 0x10
		::System::Boolean CookSuccess; // 0x18

		::System::Void _ctor(::System::Boolean a1, ::HoudiniEngineUnity::HEU_TOPNodeData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGCOOKEDEVENTDATA__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
