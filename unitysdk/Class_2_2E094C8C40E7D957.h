#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"

class Class_0_16E4307DCC419505_1180;

#define CLASS_2_2E094C8C40E7D957_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x15229160)
#define CLASS_2_2E094C8C40E7D957_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x15229400)
#define CLASS_2_2E094C8C40E7D957_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x152292B0)
#define CLASS_2_2E094C8C40E7D957_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x15228F80)
#define CLASS_2_2E094C8C40E7D957__CTOR_OFFSET UNITYSDK_OFFSET(0x15229550)

inline static constexpr unsigned int Class_2_2E094C8C40E7D957_TypeDefinitionIndex = 73583;

class Class_2_2E094C8C40E7D957 : public ::UnityEngine::AstraFXRendererDelegate
{
public:
	::Class_0_16E4307DCC419505_1180* COKDGBEABHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E094C8C40E7D957__CTOR_OFFSET))(this);
	}

	::System::Void ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E094C8C40E7D957_RESETSIMULATIONSTATE_OFFSET))(this);
	}

	::System::Void AfterCreateResources()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E094C8C40E7D957_AFTERCREATERESOURCES_OFFSET))(this);
	}

	::System::Void BeforeExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E094C8C40E7D957_BEFOREEXECUTEPASSES_OFFSET))(this);
	}

	::System::Void AfterExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E094C8C40E7D957_AFTEREXECUTEPASSES_OFFSET))(this);
	}
};
