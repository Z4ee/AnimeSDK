#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"

namespace AstraFX::Fireworks { class AstraFX_FireworksMonoPlugin; }

#define CLASS_2_C39B201D4A5005DA_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x198F1E90)
#define CLASS_2_C39B201D4A5005DA_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x198F1FB0)
#define CLASS_2_C39B201D4A5005DA_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x198F1F10)
#define CLASS_2_C39B201D4A5005DA_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x198F1D50)
#define CLASS_2_C39B201D4A5005DA__CTOR_OFFSET UNITYSDK_OFFSET(0x198F2030)

inline static constexpr unsigned int Class_2_C39B201D4A5005DA_TypeDefinitionIndex = 49450;

class Class_2_C39B201D4A5005DA : public ::UnityEngine::AstraFXRendererDelegate
{
public:
	::AstraFX::Fireworks::AstraFX_FireworksMonoPlugin* HDDFKAGFMIM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C39B201D4A5005DA__CTOR_OFFSET))(this);
	}

	::System::Void ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C39B201D4A5005DA_RESETSIMULATIONSTATE_OFFSET))(this);
	}

	::System::Void AfterCreateResources()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C39B201D4A5005DA_AFTERCREATERESOURCES_OFFSET))(this);
	}

	::System::Void BeforeExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C39B201D4A5005DA_BEFOREEXECUTEPASSES_OFFSET))(this);
	}

	::System::Void AfterExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C39B201D4A5005DA_AFTEREXECUTEPASSES_OFFSET))(this);
	}
};
