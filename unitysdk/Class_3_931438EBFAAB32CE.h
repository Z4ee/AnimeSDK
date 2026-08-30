#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorCustomValueChangeV2; }
namespace System { class String; }

#define CLASS_3_931438EBFAAB32CE_METHOD_3_10174DABAE4BE0E1_OFFSET UNITYSDK_OFFSET(0x18FBFC10)
#define CLASS_3_931438EBFAAB32CE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FBFA00)
#define CLASS_3_931438EBFAAB32CE__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18FBFC70)
#define CLASS_3_931438EBFAAB32CE__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18FBFE30)

inline static constexpr unsigned int Class_3_931438EBFAAB32CE_TypeDefinitionIndex = 53725;

class Class_3_931438EBFAAB32CE : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFloorCustomValueChangeV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorCustomValueChangeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorCustomValueChangeV2*))((::PBYTE)hIl2Cpp + CLASS_3_931438EBFAAB32CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_10174DABAE4BE0E1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_931438EBFAAB32CE_METHOD_3_10174DABAE4BE0E1_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_931438EBFAAB32CE__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_931438EBFAAB32CE__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
