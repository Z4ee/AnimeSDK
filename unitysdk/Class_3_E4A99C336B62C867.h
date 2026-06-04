#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorCustomValueChange; }
namespace System { class String; }

#define CLASS_3_E4A99C336B62C867_METHOD_3_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x13BD67E0)
#define CLASS_3_E4A99C336B62C867__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD65D0)
#define CLASS_3_E4A99C336B62C867__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13BD68E0)
#define CLASS_3_E4A99C336B62C867__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13BD6A20)
#define CLASS_3_E4A99C336B62C867___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13BD6B50)
#define CLASS_3_E4A99C336B62C867___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13BD6B60)

inline static constexpr unsigned int Class_3_E4A99C336B62C867_TypeDefinitionIndex = 49963;

class Class_3_E4A99C336B62C867 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFloorCustomValueChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorCustomValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorCustomValueChange*))((::PBYTE)hIl2Cpp + CLASS_3_E4A99C336B62C867__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E4A99C336B62C867_METHOD_3_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4A99C336B62C867__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4A99C336B62C867__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4A99C336B62C867___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4A99C336B62C867___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
