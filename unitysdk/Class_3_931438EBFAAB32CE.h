#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorCustomValueChangeV2; }
namespace System { class String; }

#define CLASS_3_931438EBFAAB32CE_METHOD_3_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0xA42E470)
#define CLASS_3_931438EBFAAB32CE__CTOR_OFFSET UNITYSDK_OFFSET(0xA42E260)
#define CLASS_3_931438EBFAAB32CE__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA42E540)
#define CLASS_3_931438EBFAAB32CE__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA42E700)
#define CLASS_3_931438EBFAAB32CE___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA42E8C0)
#define CLASS_3_931438EBFAAB32CE___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA42E8D0)

inline static constexpr unsigned int Class_3_931438EBFAAB32CE_TypeDefinitionIndex = 49964;

class Class_3_931438EBFAAB32CE : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFloorCustomValueChangeV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorCustomValueChangeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorCustomValueChangeV2*))((::PBYTE)hIl2Cpp + CLASS_3_931438EBFAAB32CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_931438EBFAAB32CE_METHOD_3_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_931438EBFAAB32CE__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_931438EBFAAB32CE__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_931438EBFAAB32CE___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_931438EBFAAB32CE___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
