#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorCustomValueChangeV2; }
namespace System { class String; }

#define CLASS_3_AD1D30CB51F2725B_METHOD_3_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x10B81ED0)
#define CLASS_3_AD1D30CB51F2725B__CTOR_OFFSET UNITYSDK_OFFSET(0x10B81CD0)
#define CLASS_3_AD1D30CB51F2725B__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B81FA0)
#define CLASS_3_AD1D30CB51F2725B__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B82120)
#define CLASS_3_AD1D30CB51F2725B___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B822A0)
#define CLASS_3_AD1D30CB51F2725B___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B822B0)

inline static constexpr unsigned int Class_3_AD1D30CB51F2725B_TypeDefinitionIndex = 43299;

class Class_3_AD1D30CB51F2725B : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFloorCustomValueChangeV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorCustomValueChangeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorCustomValueChangeV2*))((::PBYTE)hIl2Cpp + CLASS_3_AD1D30CB51F2725B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AD1D30CB51F2725B_METHOD_3_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD1D30CB51F2725B__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD1D30CB51F2725B__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD1D30CB51F2725B___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD1D30CB51F2725B___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
