#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLittleGameCustomEvent; }
namespace System { class String; }

#define CLASS_3_138EC5A73DB24906_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1629B740)
#define CLASS_3_138EC5A73DB24906__CTOR_OFFSET UNITYSDK_OFFSET(0x1629B5D0)
#define CLASS_3_138EC5A73DB24906__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1629B7A0)
#define CLASS_3_138EC5A73DB24906__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1629B9F0)
#define CLASS_3_138EC5A73DB24906__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1629BFA0)

inline static constexpr unsigned int Class_3_138EC5A73DB24906_TypeDefinitionIndex = 53239;

class Class_3_138EC5A73DB24906 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitLittleGameCustomEvent*>
{
public:
	::System::String* FGMKCOANOOK; // 0x68
	::System::UInt32 CKDAFIHGACE; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLittleGameCustomEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
