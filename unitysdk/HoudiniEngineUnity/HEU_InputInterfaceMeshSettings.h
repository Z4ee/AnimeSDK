#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESHSETTINGS_GET_EXPORTCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x10875EE0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESHSETTINGS_SET_EXPORTCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x10875EF0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESHSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x10875F00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceMeshSettings_TypeDefinitionIndex = 38488;

	class HEU_InputInterfaceMeshSettings : public ::System::Object
	{
	public:
		::System::Boolean _exportColliders; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESHSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ExportColliders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESHSETTINGS_GET_EXPORTCOLLIDERS_OFFSET))(this);
		}

		::System::Void set_ExportColliders(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACEMESHSETTINGS_SET_EXPORTCOLLIDERS_OFFSET))(this, a1);
		}
	};
}
