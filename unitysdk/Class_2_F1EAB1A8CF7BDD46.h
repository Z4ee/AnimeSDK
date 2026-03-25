#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"

class AstraFX_DemoComponent;

#define CLASS_2_F1EAB1A8CF7BDD46_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x8710B10)
#define CLASS_2_F1EAB1A8CF7BDD46_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x8710C20)
#define CLASS_2_F1EAB1A8CF7BDD46_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x8710BA0)
#define CLASS_2_F1EAB1A8CF7BDD46_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x8710A00)
#define CLASS_2_F1EAB1A8CF7BDD46__CTOR_OFFSET UNITYSDK_OFFSET(0x8710C70)
#define CLASS_2_F1EAB1A8CF7BDD46___IFIXBASEPROXY_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x8710C90)
#define CLASS_2_F1EAB1A8CF7BDD46___IFIXBASEPROXY_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x8710CB0)
#define CLASS_2_F1EAB1A8CF7BDD46___IFIXBASEPROXY_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x8710CA0)
#define CLASS_2_F1EAB1A8CF7BDD46___IFIXBASEPROXY_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x8710C80)

inline static constexpr unsigned int Class_2_F1EAB1A8CF7BDD46_TypeDefinitionIndex = 38455;

class Class_2_F1EAB1A8CF7BDD46 : public ::UnityEngine::AstraFXRendererDelegate
{
public:
	::AstraFX_DemoComponent* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46__CTOR_OFFSET))(this);
	}

	::System::Void ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46_RESETSIMULATIONSTATE_OFFSET))(this);
	}

	::System::Void AfterCreateResources()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46_AFTERCREATERESOURCES_OFFSET))(this);
	}

	::System::Void BeforeExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46_BEFOREEXECUTEPASSES_OFFSET))(this);
	}

	::System::Void AfterExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46_AFTEREXECUTEPASSES_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46___IFIXBASEPROXY_RESETSIMULATIONSTATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AfterCreateResources()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46___IFIXBASEPROXY_AFTERCREATERESOURCES_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_BeforeExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46___IFIXBASEPROXY_BEFOREEXECUTEPASSES_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AfterExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46___IFIXBASEPROXY_AFTEREXECUTEPASSES_OFFSET))(this);
	}
};
