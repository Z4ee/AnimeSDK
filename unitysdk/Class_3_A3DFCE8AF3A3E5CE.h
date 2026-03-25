#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDrinkMakerCheersInitFinish; }
namespace System { class Object; }

#define CLASS_3_A3DFCE8AF3A3E5CE_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x87D3150)
#define CLASS_3_A3DFCE8AF3A3E5CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87D2E90)
#define CLASS_3_A3DFCE8AF3A3E5CE__CTOR_OFFSET UNITYSDK_OFFSET(0x87D2B70)
#define CLASS_3_A3DFCE8AF3A3E5CE__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x87D2CF0)
#define CLASS_3_A3DFCE8AF3A3E5CE__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x87D2DC0)
#define CLASS_3_A3DFCE8AF3A3E5CE___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87D3270)
#define CLASS_3_A3DFCE8AF3A3E5CE___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x87D3250)
#define CLASS_3_A3DFCE8AF3A3E5CE___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x87D3260)

inline static constexpr unsigned int Class_3_A3DFCE8AF3A3E5CE_TypeDefinitionIndex = 47554;

class Class_3_A3DFCE8AF3A3E5CE : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitDrinkMakerCheersInitFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish*))((::PBYTE)hIl2Cpp + CLASS_3_A3DFCE8AF3A3E5CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DFCE8AF3A3E5CE__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DFCE8AF3A3E5CE__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DFCE8AF3A3E5CE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A3DFCE8AF3A3E5CE_METHOD_3_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DFCE8AF3A3E5CE___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DFCE8AF3A3E5CE___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DFCE8AF3A3E5CE___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
