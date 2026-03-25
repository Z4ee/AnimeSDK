#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_BaseSync.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_GEOSYNC_SETUPLOADTASK_OFFSET UNITYSDK_OFFSET(0x8437AC0)
#define HOUDINIENGINEUNITY_HEU_GEOSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x8437B70)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeoSync_TypeDefinitionIndex = 37780;

	class HEU_GeoSync : public ::HoudiniEngineUnity::HEU_BaseSync
	{
	public:
		::System::String* _filePath; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOSYNC__CTOR_OFFSET))(this);
		}

		::System::Void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOSYNC_SETUPLOADTASK_OFFSET))(this, session);
		}
	};
}
