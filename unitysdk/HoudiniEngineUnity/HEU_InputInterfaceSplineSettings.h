#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACESPLINESETTINGS_GET_SAMPLINGRESOLUTION_OFFSET UNITYSDK_OFFSET(0x10875F10)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACESPLINESETTINGS_SET_SAMPLINGRESOLUTION_OFFSET UNITYSDK_OFFSET(0x10875F20)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACESPLINESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x10875F30)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceSplineSettings_TypeDefinitionIndex = 38494;

	class HEU_InputInterfaceSplineSettings : public ::System::Object
	{
	public:
		::System::Single _samplingResolution; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACESPLINESETTINGS__CTOR_OFFSET))(this);
		}

		::System::Single get_SamplingResolution()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACESPLINESETTINGS_GET_SAMPLINGRESOLUTION_OFFSET))(this);
		}

		::System::Void set_SamplingResolution(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACESPLINESETTINGS_SET_SAMPLINGRESOLUTION_OFFSET))(this, a1);
		}
	};
}
