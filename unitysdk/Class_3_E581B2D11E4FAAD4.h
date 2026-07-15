#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMissionCustomValueChange; }
namespace System { class String; }

#define CLASS_3_E581B2D11E4FAAD4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188D7ED0)
#define CLASS_3_E581B2D11E4FAAD4_METHOD_3_4914A33F482DD11A_OFFSET UNITYSDK_OFFSET(0x188D8130)
#define CLASS_3_E581B2D11E4FAAD4__CTOR_OFFSET UNITYSDK_OFFSET(0x188D7C30)
#define CLASS_3_E581B2D11E4FAAD4__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x188D7F20)
#define CLASS_3_E581B2D11E4FAAD4__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x188D7F70)
#define CLASS_3_E581B2D11E4FAAD4__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x188D8050)

inline static constexpr unsigned int Class_3_E581B2D11E4FAAD4_TypeDefinitionIndex = 51049;

class Class_3_E581B2D11E4FAAD4 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMissionCustomValueChange*>
{
public:
	::RPG::Client::MissionModule* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMissionCustomValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMissionCustomValueChange*))((::PBYTE)hIl2Cpp + CLASS_3_E581B2D11E4FAAD4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E581B2D11E4FAAD4_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E581B2D11E4FAAD4__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E581B2D11E4FAAD4__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E581B2D11E4FAAD4__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_4914A33F482DD11A(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E581B2D11E4FAAD4_METHOD_3_4914A33F482DD11A_OFFSET))(this, a1, a2);
	}
};
