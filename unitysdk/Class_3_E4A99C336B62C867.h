#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorCustomValueChange; }
namespace System { class String; }

#define CLASS_3_E4A99C336B62C867_METHOD_3_0E72B12FCD9FB8F6_OFFSET UNITYSDK_OFFSET(0x15A75790)
#define CLASS_3_E4A99C336B62C867__CTOR_OFFSET UNITYSDK_OFFSET(0x15A75580)
#define CLASS_3_E4A99C336B62C867__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A75810)
#define CLASS_3_E4A99C336B62C867__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A75940)

inline static constexpr unsigned int Class_3_E4A99C336B62C867_TypeDefinitionIndex = 53724;

class Class_3_E4A99C336B62C867 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFloorCustomValueChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorCustomValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorCustomValueChange*))((::PBYTE)hIl2Cpp + CLASS_3_E4A99C336B62C867__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0E72B12FCD9FB8F6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E4A99C336B62C867_METHOD_3_0E72B12FCD9FB8F6_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4A99C336B62C867__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4A99C336B62C867__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
