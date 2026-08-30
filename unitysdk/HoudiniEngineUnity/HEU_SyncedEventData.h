#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_BaseSync; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadData; }

#define HOUDINIENGINEUNITY_HEU_SYNCEDEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B153570)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SyncedEventData_TypeDefinitionIndex = 39297;

	class HEU_SyncedEventData : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* TopNodeData; // 0x10
		::HoudiniEngineUnity::HEU_BaseSync* OutputObject; // 0x18
		::System::Boolean CookSuccess; // 0x20

		::System::Void _ctor(::System::Boolean a1, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* a2, ::HoudiniEngineUnity::HEU_BaseSync* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*, ::HoudiniEngineUnity::HEU_BaseSync*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SYNCEDEVENTDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
