#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropEventInBattle; }
namespace System { class Object; }

#define CLASS_3_B0B137F5CAE20F51_METHOD_3_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0xDE43BE0)
#define CLASS_3_B0B137F5CAE20F51__CTOR_OFFSET UNITYSDK_OFFSET(0xDE43A20)
#define CLASS_3_B0B137F5CAE20F51__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDE43D50)
#define CLASS_3_B0B137F5CAE20F51__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDE43DE0)
#define CLASS_3_B0B137F5CAE20F51___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDE43E70)
#define CLASS_3_B0B137F5CAE20F51___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDE43E80)

inline static constexpr unsigned int Class_3_B0B137F5CAE20F51_TypeDefinitionIndex = 43316;

class Class_3_B0B137F5CAE20F51 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPropEventInBattle*>
{
public:
	::System::Int32 Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropEventInBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropEventInBattle*))((::PBYTE)hIl2Cpp + CLASS_3_B0B137F5CAE20F51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_B0B137F5CAE20F51_METHOD_3_F69068FADEFBD596_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0B137F5CAE20F51__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0B137F5CAE20F51__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0B137F5CAE20F51___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0B137F5CAE20F51___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
