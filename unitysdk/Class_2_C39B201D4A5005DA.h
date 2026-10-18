#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"

namespace AstraFX::Fireworks { class AstraFX_FireworksMonoPlugin; }

#define CLASS_2_C39B201D4A5005DA_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0xC258460)
#define CLASS_2_C39B201D4A5005DA_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0xC258580)
#define CLASS_2_C39B201D4A5005DA_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0xC2584E0)
#define CLASS_2_C39B201D4A5005DA_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0xC258320)
#define CLASS_2_C39B201D4A5005DA__CTOR_OFFSET UNITYSDK_OFFSET(0xC258600)

inline static constexpr unsigned int Class_2_C39B201D4A5005DA_TypeDefinitionIndex = 49024;

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
