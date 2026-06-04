#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_BaseSync.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_GEOSYNC_SETUPLOADTASK_OFFSET UNITYSDK_OFFSET(0x17ED9630)
#define HOUDINIENGINEUNITY_HEU_GEOSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x17ED96F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeoSync_TypeDefinitionIndex = 37633;

	class HEU_GeoSync : public ::HoudiniEngineUnity::HEU_BaseSync
	{
	public:
		::System::String* _filePath; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOSYNC__CTOR_OFFSET))(this);
		}

		::System::Void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOSYNC_SETUPLOADTASK_OFFSET))(this, a1);
		}
	};
}
